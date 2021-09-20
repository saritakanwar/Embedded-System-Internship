// if SWITCH on then LED on
#include<regx51.h>
sbit sw=P1^0;
sbit led=P2^0;

void main()
{
	while(1)
	{
  	if(sw==0)
		led=1;
	else
		led=0;
	}
}
