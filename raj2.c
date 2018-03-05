#include<stdio.h>
#include<conio.h>
void main()
{
    int a[200],i,j,n,t,k;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    for(i=0;i<k-1;i++)
   printf("%d ",a[i]);
}
getch();
