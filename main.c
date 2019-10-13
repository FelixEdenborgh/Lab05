#include <avr/interrupt.h>
#include <avr/io.h>
#include <avr/pgmspace.h>
#include <stdio.h>
#include <string.h>
#include <util/delay.h>

#include "adc.h"
#include "gpio.h"
#include "i2c.h"
#include "serial.h"
#include "timer.h"
#include "util.h"

#include "DHT11.h"
#include "DHT_Settings.h"
#include "IO_Macros.h"

/**void DHT_init() {
	DDRD |= (1 << PD4);

}**/

void main (void) {
	printf("%s\n Hej");

	double temp[1], hum[1];
	DHT_Setup();

	while (1 == 1) {
		DHT_Read(temp, hum);

		printf("Temperature: ");
		printf("%f\n", temp);
		printf("Humidity: ");
		printf("%f\n", hum);


	/**	if(DHT_status == DHT_Ok){
			printf("%d\n", temp[0]);
			printf("%d\n", hum[1]);
		}**/
	_delay_ms(1000);



	}

}
