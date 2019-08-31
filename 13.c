#include<htc.h>
int main()
{
	TRISB=0;
	while(1)
	{
		PORTB=0XA6;
		for(int i=-30000;i<30000;i++);
	}
}