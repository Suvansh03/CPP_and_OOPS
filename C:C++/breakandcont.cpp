#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the Value of N: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        if (i==5)
        {
            continue;
        }
        printf("%d ",i);
    }
    return 0;
}