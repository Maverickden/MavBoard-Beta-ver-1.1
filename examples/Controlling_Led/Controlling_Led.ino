#include <Mavboard.h>

Mavboard mavboard;

void setup()
{
  mavboard.set_board();

}

void loop()
{
  mavboard.Led1(HIGH);
  delay( 1000 );
  mavboard.Led1(LOW);
  delay( 1000 );
}
