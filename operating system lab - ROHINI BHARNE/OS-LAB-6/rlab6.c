// wap to implement SJF CPU scheduling
#include<stdio.h>
#include<unistd.h>
int main(){
  int n;
  printf("\n Enter the number of processes : ");
  scanf("%d", &n);
  int p[n];
  for(int i=0; i<n; i++){
  printf("\n Enter the Burst time of the %d process : ", i+1);
  scanf("%d", &p[i]);
  }
  int temp;
  printf("\n The sorted process burst time : ");
  for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if (p[j] > p[j+1]){
                temp = p[j];
                p[j] = p[j+1];
                p[j+1] = temp;
            }
        }
    }
  for(int i=0; i<n; i++){
    printf("%d \t", p[i]);
  }
  int avg = 0;
  int tt = 0;
  int avgwt = 0;
  for(int i=0; i<n; i++){
    tt = tt+p[i];
    avg = tt+avg;
    printf("\n Turn Around time of %d process : %d \n", i+1, tt);
  }
  int avgtt = avg/n;
  printf("\n Average turn Around time : %d \n", avgtt);
  int wt;
  for(int i=0; i<n; i++){
    avgwt = wt + avgwt;
    printf("\n Waiting Time of %d process : %d \n", i+1, wt);
    wt = wt + p[i];
  }
  printf("\n Average waiting time : %d", avgwt/n);
}
