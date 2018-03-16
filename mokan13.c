#include<stdio.h>
void main()
{
int l,i;
char s[100000];
gets(s);
l=strlen(s);

char arr[l],top=-1;
i=0;
while(s[i]!='\0')
{top++;
    arr[top]=s[i];

    i++;
}

for(i=0;i<l;i++)
{
    if(s[i]!=arr[top])
        break;
        top--;
}
if(i==l)
    printf("YES");
else
    printf("NO");
}
getch();
