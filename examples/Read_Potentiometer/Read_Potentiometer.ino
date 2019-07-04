#include <Mavboard.h>

int _ABVAR_1_a = 0 ;
Mavboard mavboard;

void setup()
{
  mavboard.set_board();

  Serial.begin(9600);
}

void loop()
{
  _ABVAR_1_a = mavboard.ReadPotentiometer();
  ;
  Serial.print("Potentiometer value is");
  Serial.print(" ");
  Serial.print(_ABVAR_1_a);
  Serial.print(" ");
  Serial.println();
}
