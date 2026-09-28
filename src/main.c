#include "sdk_project_config.h"
void delay (volatile int cycles){
	while(cycles--);

}
int main(void){
             	CLOCK_DRV_Init(&clockMan1_InitConfig0);
	PINS_DRV_Init(NUM_OF_CONFIGURED_PINS0,g_pin_mux_InitConfigArr0);
	for(;;){
		PINS_DRV_TogglePins(PTD ,(1<<0));
		delay(7200000);
	}


}

