#include <stdio.h>
#include<string.h>

int main(void)
{
	char a[100];
	scanf("%s",a);
	int i,u,v;
	u=a[0];
	if(u>91)
	{
		v=u-32;
		a[0]=v;
		
	}
	for(i=1;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			u=a[i+1];
			if(u>91)
			{
				v=u-32;
				a[i+1]=v;
			}	
		}
	}
	printf("%s",a);

}
getch();
