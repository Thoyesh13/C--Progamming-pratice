#include<stdio.h>
int main ()
{
    int x,y;
    printf("enter number:");
    scanf("%d",&x);
    y=(x/1000)*100+((x/100)%10)*1000+((x/10)%10)*10+x%10;
    printf("%d",y);
    return 0;
}
