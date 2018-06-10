#include <stdio.h>
#include <math.h>
int main()
{
int a;
float b;
printf("please enter a number:\n");
scanf("%lf",&a);
if(a>=1000)
{
printf("please enter another number:\n");
scanf("%f",&a);
}
else
{
	b=sqrt(a);
	printf("a=%7.0f,b=%7.0f\n",a,b);
}
return 0;
}

