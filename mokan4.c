#include <stdio.h>
#include<conio.h>

int main(void)
{
	int a[100],n,i,j,count=0,t[100];
	printf("\Enter the number of values");
	scanf("%d",&n);
	printf("\nEnter the values");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		t[i]=-1;
	}
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
		if(a[i]==a[j])
		{
			count++;
		            t[j]=0;
		}
	}
	if(t[i]!=0)
	{
		t[i]=count;
	}
	}
	printf("\nThe unique elements are:");
	for(i=0;i<n;i++)
	{
		if(t[i]==1)
		{
			printf("%d",a[i]);
		}
	}
	

}
getch();
