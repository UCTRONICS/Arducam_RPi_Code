
#include <wiringPi.h>  
int main(void)  
{  
	wiringPiSetup() ;  
	pinMode (24, OUTPUT) ;//connect to buzzer
	while(1)
	{
		
			digitalWrite(24, LOW) ;
			delay (1) ;  	 
			digitalWrite(24, HIGH) ; 
			delay (1) ; 	
	}
}
