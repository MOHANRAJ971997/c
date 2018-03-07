3include<stdio.h>
{
n=int(input())
if n<0:
	print("positive numbers only")
elif n==0:
	print("factorial of zero is 1")
else:
	fact=1
	for i in range(1,n+1):
		fact = fact*i
	print(fact)
  }
  getch();
