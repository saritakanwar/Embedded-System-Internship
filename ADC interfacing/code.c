#include<regx51.h>
#define input P1
#define output P2
sbit rd=P3^7;
sbit wr=P3^6;
sbit intr=P3^5;
void delay(int msec);

void main()
{
	unsigned char x;
 intr=1;
	while(1)
	{
	 wr=0;
		delay(10);
		wr=1;
		while(intr==1);
		intr=0;
		rd=0;
		delay(5);
		x=input;
		output=x;
	}
}

void delay(int msec)
{
 int i,j;
	for(i=0;i<msec;i++)
	for(j=0;j<1275;j++);
}
