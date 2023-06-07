#include <stdio.h>

int main()
{
    int n, i, key;
    printf("enter number of elements:");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter element to be found:");
    scanf("%d", &key);
    int lb = 0, ub = n - 1, mid;
    while (lb <= ub)
    {
        mid = (lb + ub) / 2;
        if (a[mid] == key)
        {
            printf("element found");
            return 0;
        }
        if (key < a[mid])
        {
            ub = mid - 1;
        }
        else
            {
                lb = mid + 1;
            }
    }
    printf("element not found");
    return 0;
}