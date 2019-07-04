#include <Mavboard.h>

bool _ABVAR_1_a= false ;
Mavboard mavboard;

void setup()
{
  mavboard.set_board();

  Serial.begin(9600);
}

void loop()
{
  _ABVAR_1_a = mavboard.ReadButton1();
  ;
  Serial.print("Button Value is");
  Serial.print(" ");
  Serial.print(_ABVAR_1_a);
  Serial.print(" ");
  Serial.println();
}
