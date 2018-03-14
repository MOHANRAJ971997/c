#include <iostream>

using namespace std;

int main()
{
	char a[50],temp;
	int i,j,len;
	cout<<"enter any string:\n";
            cin>>a; 
	len=strlen(a);
	cout<<"reverse of the string is:";
	for(i=0,j=len-1;i<len/2;++i,--j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	cout<<a;


getch();
}
