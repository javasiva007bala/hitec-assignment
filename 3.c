////////////////////////////////////////////
//                                        //
//   Authore : Siva Pragsam.v             //
//   Title   : 7-segment Digits           //
//                                        //
////////////////////////////////////////////

#include<htc.h>
int main()
{
	TRISB=0;
	int a[]={0x80,0xC0,0xE0,0xF0,0xF8,0xFC,0xFE,0xFF};
	int i;
	while(1)
	{
			for(i=7;i>=0;i--)
			{
			PORTB=a[i];
			for(int j=-30000;j<30000;j++);
			}
	}	
}