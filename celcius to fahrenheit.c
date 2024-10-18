/*****************************************************************************
	Author         : Vasudev.p
	Roll no         : 26
	Semester     : 1
	Programme :BSc CS(DA)
	Question      : write a program that converts centigrade to fahrenheit
***************************************************************/
#include<stdio.h>
int main()
{
	float c,f;         									//variable for storing decimal values
	printf("enter the celcius :");
	scanf("%f",&c);										//reading the value of celcius from keyboard
	f=(c*9/5)+35;      									//for calculating the value of fahrenheit
	printf("the celcius in fahrenheit is : %f",f);     //for displaying the value of fahrenheit
	return 0;
}
