//Write a program in C that takes minutes as input, and display the total number of hours and minutes.
#include<stdio.h>
int main()
{
	int min,hour;
	printf("enter the minute:");
	scanf("%d",&min);
	hour=min/60;
	min=min%60;

	printf("hour = %d minute = %d",hour,min);
	return 0;
}
