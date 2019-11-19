#include<stdio.h>

int gcd(int x,int y);
int main()
{
     int x,y;

     printf("Enter any number:");
     scanf("%d",&x);
     printf("Enter any number:");
     scanf("%d",&y);

     printf("The GCD is %d\n",gcd(x,y));
     return 0;
}
int gcd(int x,int y)
{
	if(y==0)
	{
	        return x;
	}
	else
	{
		return gcd(y,x%y);
	}
}
