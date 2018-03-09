#include<stdio.h> 
#include<conio.h>
void main(void) 
{ 
int j,a[100],i,n,flag; 
scanf("%d",&n); 
for(i=0;i<n;i++) 
{ 
flag=0; 
for(j=0;j<n;j++) 
{ 
if(a[i]== a[j]) 
{ 
flag++; 
} 
else 
continue; 
} 
if(flag==1) 
printf("%d",a[i]); 
} 
}
getch();
