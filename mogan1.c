include<stdio.h>
#include<conio.h>
int fact (int);
int main()
{
    int n,c,i=0;
    scanf("%d",&n);
    printf("Factorial of the number %d is: %d",n,fact(n));
    return 0;
}
int fact(int x)
{
    if(x==1||x==0)
    return 1;
    else
    return (x*fact(x-1));
}
getch();
