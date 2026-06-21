#include<stdio.h>
int main ()
{
    int x,y;
    printf("enter number:");
    scanf("%d",&x);
    y=(x%10)*10+(x/10)%10;
    printf("%d",y);
    return 0;
}
