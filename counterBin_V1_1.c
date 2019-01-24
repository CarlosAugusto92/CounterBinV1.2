/*This is a binary counter, but the code has been improved 
 with less instructions and less time of compilation.
 This is for improve the way of the previous program was written.
 *Carlos Augusto Pérez Méndez
 * Mechatronics Engineer.
 * mendezd.carlos@gmail.com
 * More info about the evaluation board in http://dignal.com
*/
#include "Alteri.h"      


void main ()
{
    TRISD = 0;
    
    int i = 0;
    
    for (i = 0; i <= 15; i++)  //Counter from 0 to 15.
    {
        PORTD = i;             //The results are written in portD of microcontroller.
        delay_ms(1000);        //Wait 500 miliseconds.
    
    }
}

