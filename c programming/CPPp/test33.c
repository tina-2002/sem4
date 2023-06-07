#include <stdio.h>
 
int main() {
    char str[50],sub[30];
    int i,j,count=0;
    printf("Enter a string:");
    gets(str);
    printf("Enter search substring:");
    gets(sub);
    for ( i = 0; str[i] != '\0'; i++) {
        
        for ( j = 0; sub[j] != '\0'; j++) {
            if (str[i + j] != sub[j]) {
                break;
            }
            else{
              count++;
            }
        }
        if (count!=0) {
            break;
        }
    }
     
    if (count!=0) {
        printf("\n String contains substring");
    } else {
        printf("\n String does not contain substring");
    }
    return 0;
}
