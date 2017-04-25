
#include <wiringPi.h>  
int main(void)  
{  
	wiringPiSetup() ;  
	pinMode (24, OUTPUT) ;//connect to ralay
	while(1)
	{
		
			digitalWrite(24, HIGH) ;
			delay (2000) ;  	 
			digitalWrite(24, LOW) ; 
			delay (2000) ; 	
	}
}
