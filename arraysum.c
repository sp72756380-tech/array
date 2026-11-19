
#include<stdio.h>
int main()
{
    int a[7];
    int sum=0;
    for(int i=0; i<=6; i++)
    {
        printf("enter a number");
        scanf("%d",&a[i]);
    }
    for(int i=0; i<=6; i++)
    {
        sum=sum+a[i];
    }
printf("%d",sum);
return 0;

}