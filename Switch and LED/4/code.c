//Shifting LEDs
#include<regx51.h>
sbit sw=P1^0;

void delay(int);

void main()
{
	int i;
	while(1)
	{
  if(sw==0)
	{
		for(i=0;i<8;i++)
		{
		P2=0x80>>i;
		delay(50);
		}
	}
	else
	{
		for(i=0;i<8;i++)
		{
		P2=0x01<<i;
		delay(50);
		}
	}
	}
}
void delay(int n)
{
 int i,j;
	for(i=0;i<n;i++)
	for(j=0;j<1275;j++);
}
