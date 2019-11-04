#include<reg51.h>
sbit l1=P1^0;
sbit l2=P1^1;
sbit l3=P1^2;
sbit l4=P1^3;
void main()
{
	unsigned int i;
	l1 = l2 = l3 = l4 = 0;
	while(1)
	{
		l1 = 1;
		l2=l3=l4=0;
		for(i=0;i<60000;i++);
		l2=1;
		l1=l3=l4=0;
		for(i=0;i<60000;i++);
		l3=1;
		l1=l2=l4=0;
		for(i=0;i<60000;i++);
		l4=1;
		l1=l2=l3=0;
		for(i=0;i<60000;i++);
	}
}