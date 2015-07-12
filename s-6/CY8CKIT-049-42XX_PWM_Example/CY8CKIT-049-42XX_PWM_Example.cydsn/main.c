
#include <project.h>

volatile uint8_t inc_flag = 1;
volatile uint16_t compare_val = 0;

int main()
{
    PWM_Start();                                  // start the PWM peripheral


    // wait for SW1 being pushed
//    UART_Start();

//    while(SW1_Read());

    for(;;) {
		if(compare_val > 11000) { inc_flag = 0; } // set increment flag to false
		if(compare_val < 1000) { inc_flag = 1; }  // set increment flag to true
		if(inc_flag) {                            // if increment flag is true
			compare_val += 500;                   // increment compare value
		}else{                                    // else if increment flag is false
			compare_val -= 500;                   // decrement compare value
		}
		PWM_WriteCompare(compare_val);            // write new compare value to PWM
		CyDelay(25);                              // wait 25ms before looping again
    }
}
