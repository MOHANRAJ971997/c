#include<stdio.h>
int main()
{
flag=0
j=0
d=[]
l=[]
a=int(raw_input())
for i in range(0,a):
    l.append(int(raw_input()))
for i in l:
    if i==j:
        d.append(i)
        j+=1
        flag=1
    else:
        j+=1
if flag==0:
    print -1
else:
    d.sort(reverse=True)
    print d
    }
    getch();
        
