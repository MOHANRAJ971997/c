#include<stdio.h>
def g2(a,b):
	k=0
	o=''
	c=0
	f=0
	for i in range(len(a)):
		if len(a)<len(b):
			if a[i]==b[i]:
				o+=a[i]
				k=k+1
		else :
			f=1
			break
	i=0
	if f==1:
		while(True):
			if a[i]==b[i]:
				o+=a[i]
			else :
				o+=b[i]
				c=c+1
			if i==3:
				break
			i=i+1
		return c

	for i in range(k,len(b)):
		o+=b[i]
		c=c+1
	return c
 
 def main():
	a=input()
	b=input()
	v=g2(a,b)
  print(v**2)
try:
 	 main()
except:
 	 print('invalid')
   }
   getch();
