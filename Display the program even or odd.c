#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter an integer :");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("%d is an even integer.",n);
    }
    else
    {
        printf("%d is an odd integer.",n);
    }
    return 0;
}
