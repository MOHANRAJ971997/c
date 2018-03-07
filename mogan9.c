#include<stdio.h>
#include<conio.h>
void main()
{
int l,u,i,z=0,cout=0;
scanf("%d %d",&l,&u);
for(i=l;i<=u;i++)
{
if((i<4)&&(i>1))
cout++;
else if((i%2==0)||(i%3==0))
z++;
else
cout++;
}
printf("%d",cout);
}
getch();
