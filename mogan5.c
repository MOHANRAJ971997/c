#include <stdio.h>
#include<string.h>
void main() 
{
int i,k,len,n[7];
char roman[7];
scanf("%[^\n]s",roman);
len=strlen(roman);
for(i=0;i<len;i++)
{
	if(roman[i]=='I')
	n[i]=1;
	else if(roman[i]=='V')
	n[i]=5;
	else if(roman[i]=='X')
	n[i]=10;
	else if(roman[i]=='L')
	n[i]=50;
	else if(roman[i]=='C')
	n[i]=100;
	else if(roman[i]=='D')
	n[i]=500;
	else if(roman[i]=='M')
	n[i]=1000;
	else
	printf("invalid");
}
k=n[len-1];
for(i=len-1;i>0;i--)
{
	if(n[i]>n[i-1])
	k=k-n[i-1];
	else
	k=k+n[i-1];
}
printf("%d",k);
	
}
getch();
