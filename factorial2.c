#include<stdio.h>
float factorial(int n);
int main()
{
	long int n;
	float sum = 0.0;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for ( int i=0; i<=n; i++)
	{
	sum = sum +(float)i/factorial(i);
}
printf("The sum of 1/1!+2/2!+3/3!+.......%d/%d = %lf\n",n,n,sum);
return 0;
}

float factorial(int n)
{
	if(n==0)
	{
		return 1.0;
	}
	
	float fact = 1.0;

	for(int i=1;i<=n;i++)
	{	
	fact = fact*(float)i;	
}
	return fact;
}