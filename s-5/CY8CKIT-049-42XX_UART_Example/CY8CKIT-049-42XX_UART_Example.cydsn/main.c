
#include <project.h>

const char welcome_string[] = "Hello World!\n\r";

int main()
{
	uint8_t i;
	char c;
	
    UART_Start();                             // start the UART peripheral
	
	while(SW1_Read());                        // wait for button press to continue (gives you time to switch to a terminal window)

	for(i=0; i<strlen(welcome_string); i++) { // display the welcome string
		UART_UartPutChar(welcome_string[i]);
	}
    for(;;) {
		c = UART_UartGetChar();               // get typed character
        if(c) {                               // if it's a valid character

			UART_UartPutChar(c);              // echo it in the terminal window
			UART_UartPutChar(c);              // echo it in the terminal window

		}
    }
    
    return 0;
    
}
