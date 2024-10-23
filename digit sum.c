#include<stdio.h>
int main()
{
	int a,b,c,sum=0;
	printf("enter a digit:");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		sum=sum+b;
		a=a/10;23
	}
	printf("sum = %d",sum);
	return 0;
}
