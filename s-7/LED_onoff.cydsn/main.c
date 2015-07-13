/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>

int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

//    int sw_state;

    int sw_read;
    
    for(;;)
    {
        /* switch state */
        sw_read = SW1_Read();
        
        if (sw_read == 1) {

        	LED_Write( 1 );

        	continue;

		}

        /* Place your application code here. */
//        LED_Write( SW1_Read() );

        LED_Write( 1 );

        CyDelay( 500 );

        LED_Write( 0 );

        CyDelay( 500 );
        
        //CyDelay( 500 );
        //CyDelay( 1000 );
    }
}

/* [] END OF FILE */
