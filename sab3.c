#include <stdio.h>
#include<string.h>
int main()
{
    int a,n;
    scanf("%d",&a);
    while(a>=1)
    {
        n=a%10;
        printf("%d",n);
        a=a/10;
    }
    

    return 0;
}
