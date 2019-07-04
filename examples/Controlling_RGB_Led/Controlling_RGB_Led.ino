#include <Mavboard.h>

Mavboard mavboard;

void setup()
{
  mavboard.set_board();

}

void loop()
{
  mavboard.rgb_r(HIGH);
  mavboard.rgb_g(LOW);
  mavboard.rgb_b(LOW);
  delay( 1000 );
  mavboard.rgb_r(LOW);
  mavboard.rgb_g(HIGH);
  mavboard.rgb_b(LOW);
  delay( 1000 );
  mavboard.rgb_r(LOW);
  mavboard.rgb_g(LOW);
  mavboard.rgb_b(HIGH);
  delay( 1000 );
  mavboard.rgb_r(LOW);
  mavboard.rgb_g(LOW);
  mavboard.rgb_b(LOW);
  delay( 1000 );
  mavboard.rgb(HIGH);
  delay( 1000 );
}
