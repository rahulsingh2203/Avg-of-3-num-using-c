#include<stdio.h>

void main(){
	int a,b,c;
	float avg;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("\nEnter Second number:");
	scanf("%d",&b);
	printf("\nEnter third number:");
	scanf("%d",&c);
	avg = (a+b+c)/3.0;
	printf("\nAverage of above three number is: %0.3f", avg);
}
