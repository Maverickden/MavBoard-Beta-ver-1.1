#include <Mavboard.h>

Mavboard mavboard;

void setup()
{
  mavboard.set_board();

}

void loop()
{
  mavboard.Buzzer(HIGH);
  delay( 1000 );
  mavboard.Buzzer(LOW);
  delay( 1000 );
}
