//Giving signal to oneway by using SWITCH and LED
#include<regx51.h>
sbit sw=P1^0;
sbit Rled=P2^0;
sbit Gled=P2^1;
sbit Yled=P2^2;
void delay(int);

void main()
{
	int i;
				Gled=Rled=Yled=0;
	while(1)
	{
  	if(sw==0)
		for(i=0;i<3;i++)
		{
			Gled=0;
			Rled=1;
			Yled=0;
		 delay(100);
			Gled=0;
			Rled=0;
			Yled=1;
		 delay(100);
			Gled=1;
			Rled=0;
			Yled=0;
		 delay(100);
			Gled=0;
			Rled=0;
			Yled=1;
		 delay(100);
		
		}
  else
	{
	 		Gled=0;
			Rled=0;
			Yled=0;
	}
 }
}

void delay(int n)
{
 int i,j;
	for(i=0;i<n;i++)
	for(j=0;j<1275;j++);
}
