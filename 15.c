#include<htc.h>
int main()
{
	TRISB=0;		//select POPRTB output pin
	TRISC=0;		//select PORTC	output pin
	TRISD=0;		//select PORTD	output pin
	int i;
	int a[]={0xfc,0x60,0xda,0xf2,0x66,0xb6,0xbe,0xe0,0xfe,0xe6};	//here declare 7segment led address
	for(i=0;i<=1;i++)	
	{	
			PORTB=a[i];		//increment PORTB value
			for(int k=0;k<10;k++)
			{
				PORTC=a[k];	//increment PORTC value
				for(int a1=0;a1<10<;a1++)
					{
						PORTD=a[a1];	//increment PORTD value
									for(int j=-2000;j<2000;j++);
								}
					}
			}
	}
}
	