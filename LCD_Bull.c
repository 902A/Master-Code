#include "Main.h"

void LCD_Bull ( void )
{
      while ( 1 )
      {
            GetLCDButtonsWatcher ( 2 , &but1 , &but2 , &but3 ) ;
            if ( but1 == 1 )
            {
                  SetLCDText ( 2 , 1 , "Running Code...." ) ;
                  SetMotor ( 1 , -127 ) ;
                  Wait ( 2000 ) ;
                  SetMotor ( 1 , 0 ) ;
                  SetLCDText ( 2 , 1 , "Done...." ) ;
                  Wait ( 1000 ) ;
                  SetLCDText ( 2 , 1 , "Press Button" ) ;
            }
      }
}
