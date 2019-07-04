#include <Mavboard.h>

Mavboard mavboard;

void setup()
{
  mavboard.set_board();

}

void loop()
{
  mavboard.forward();
  delay( 1000 );
  mavboard.backward();
  delay( 1000 );
  mavboard.right();
  delay( 1000 );
  mavboard.left();
  delay( 1000 );
}
