#include <stdio.h>

int main(void) {
	char a[100];
	char b[100];
	int i ,count;
	int m,n;
	scanf("%s %s",a,b);
	m=strlen(a);
	n=strlen(b);
		for(i=0;i<m;i++)
		{
			if(m!=n)
			{
				printf("no");
				break;
			}
			else if(a[i]==b[i])
			{
				count=count+0;
			}
			else
			{
				count=count+1;
			}
		}
	
	if(count==1)
	{
		printf("yes");
		
	}
	else
	{
		print("no");
	}

getch();
}
