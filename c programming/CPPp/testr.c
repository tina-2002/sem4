
#include <stdio.h>

int main()
{
    int Matrix_1[50][50];
    char String_1[50], String_2[50];
    int i, j;

    printf("Enter the strings with elements only 'S', 'I', 'T', 'N'\n");
    printf("Enter string 1 : ");
    scanf("%s", &String_1);
    printf("Enter string 2 : ");
    scanf("%s", &String_2);

    for(i = 0; i < 50; i++)
    {
        for(j = 0; j < 50; j++)
        {
            Matrix_1[i][j] = 0;
        }
    }

    for (i = 0; i < 50; i++)
    {
        for(j = 0; j < 50; j++)
        {
            if(String_1[i] == String_2[j])
            {
                Matrix_1[i][j] = 255;
            }
            else
            {
                Matrix_1[i][j] = 999;
            }
        }
    }

    for(i = 0; i < 50; i++)
    {
        printf("\n");
        for(j = 0; j < 50; j++)
        {
            printf("%d", Matrix_1[i][j]);
            printf("\t");
        }
    }

    return 0;
}

