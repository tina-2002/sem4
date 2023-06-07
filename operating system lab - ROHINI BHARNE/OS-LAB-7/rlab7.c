// wap to implement priority CPU scheduling
#include<stdio.h>
#include<unistd.h>
int main(){
  int n;
  printf("\n Enter the number of processes : ");
  scanf("%d", &n);
  int b[n], p[n];
  for(int i=0; i<n; i++){
    printf("\n Enter the Burst time of the %d process : ", i+1);
    scanf("%d", &b[i]);
  }
  for(int i=0; i<n; i++){
    printf("\n Enter the priority of the %d process : ", i+1);
    scanf("%d", &p[i]);
  }
  int temp, temp2;
  printf("\n The sorted burst time of process according to the priority(low-to-high) : ");
  for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if (p[j] > p[j+1]){
                temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
                //
                temp2 = p[j];
                p[j] = p[j+1];
                p[j+1] = temp2;
                
            }
        }
    }
  for(int i=0; i<n; i++){
    printf("%d \t", b[i]);
  }
  int avg = 0;
  int tt = 0;
  float avgwt = 0;
  for(int i=0; i<n; i++){
    tt = tt+b[i];
    avg = tt+avg;
    printf("\n Turn Around time of %d process : %d \n", i+1, tt);
  }
  float avgtt = avg/n;
  printf("\n Average turn Around time : %f \n", avgtt);
  int wt;
  for(int i=0; i<n; i++){
    avgwt = wt + avgwt;
    printf("\n Waiting Time of %d process : %d \n", i+1, wt);
    wt = wt + b[i];
  }
  printf("\n Average waiting time : %f", avgwt/n);
}
