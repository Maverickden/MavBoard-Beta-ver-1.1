#include <Mavboard.h>

Mavboard mavboard;

void setup()
{
  mavboard.set_board();

}

void loop()
{
  mavboard.motor_test();
}
