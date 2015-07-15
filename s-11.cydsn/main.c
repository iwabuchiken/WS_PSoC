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

    for(;;)
    {
        /* Place your application code here. */
        //LED_Write( SW1_Read() );
        
        // halt flashing
        while( SW1_Read() ) {};
        
        /*  
            flashing
        */
        // LED 1
        LED_Write( 1 );
        
        CyDelay( 100 );
        
        LED_Write( 0 );
        
        // LED 2
        LED_2_Write( 1 );
        
        CyDelay( 100 );
        
        LED_2_Write( 0 );

        // LED 3
        LED_3_Write( 1 );

        CyDelay( 100 );

        LED_3_Write( 0 );

    }
    
}

/* [] END OF FILE */
