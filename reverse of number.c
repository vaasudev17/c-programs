//Find the reverse of a given number
//   Example if the given number is 231 then the answer is 132
#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter a digit");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		printf("%d",b);
		a=a/10;
	}
	return 0;
}
