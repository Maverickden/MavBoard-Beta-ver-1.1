#include "Mavboard.h"

//shiftOutX(_latchPin, _dataPin, _clockPin, _bitOrder, _NofRegisters);
shiftOutX reg(3, 2, 4, MSBFIRST, 1);

//======================================
//======================================
void Mavboard::set_board()
{
	reg.pinOff(shPin1);
	reg.pinOff(shPin2);
	reg.pinOff(shPin3);
	reg.pinOff(shPin4);
	reg.pinOff(shPin5);
	reg.pinOff(shPin6);
	reg.pinOff(shPin7);
	reg.pinOff(shPin8);
	pinMode(right_motor_pin1, OUTPUT);
	pinMode(right_motor_pin2, OUTPUT);
	pinMode(left_motor_pin1, OUTPUT);
	pinMode(left_motor_pin1, OUTPUT);
	
	digitalWrite(right_motor_pin1, LOW);
	digitalWrite(right_motor_pin2, LOW);
	digitalWrite(left_motor_pin1, LOW);
	digitalWrite(left_motor_pin1, LOW);
}
//======================================
//======================================
void Mavboard::Buzzer(bool on)
{
	if(on)
	{
		reg.pinOn(shPin4);
	}
	else{
		reg.pinOff(shPin4);
	}
}
//======================================
//======================================
/*void Mavboard::Led(bool on)
{
  pinMode(Ledpin, OUTPUT);
  digitalWrite(Ledpin, on);  
}*/
void Mavboard::Led1(bool on)
{
	if(on)
	{
		reg.pinOn(shPin5);
	}
	else{
		reg.pinOff(shPin5);
	}
}
void Mavboard::Led2(bool on)
{
	if(on)
	{
		reg.pinOn(shPin6);
	}
	else{
		reg.pinOff(shPin6);
	} 
}
void Mavboard::Led3(bool on)
{
  	if(on)
	{
		reg.pinOn(shPin7);
	}
	else{
		reg.pinOff(shPin7);
	} 
}
void Mavboard::Led4(bool on)
{
	if(on)
	{
		reg.pinOn(shPin8);
	}
	else{
		reg.pinOff(shPin8);
	} 
}
//======================================
//======================================
void Mavboard::rgb(bool on)
{
/*  pinMode(rgb_r_pin, OUTPUT);
  pinMode(rgb_g_pin, OUTPUT);
  pinMode(rgb_b_pin, OUTPUT);
  digitalWrite(rgb_r_pin, on);  
  digitalWrite(rgb_g_pin, on);  
  digitalWrite(rgb_b_pin, on);  */
  	if(on)
	{
		reg.pinOn(shPin1);
		reg.pinOn(shPin2);
		reg.pinOn(shPin3);
	}
	else{
		reg.pinOff(shPin1);
		reg.pinOff(shPin2);
		reg.pinOff(shPin3);
	}
}

void Mavboard::rgb_r(bool on)
{
	if(on)
	{
		reg.pinOn(shPin1);
	}
	else{
		reg.pinOff(shPin1);
	} 
}

void Mavboard::rgb_g(bool on)
{
	if(on)
	{
		reg.pinOn(shPin2);
	}
	else{
		reg.pinOff(shPin2);
	}
}
void Mavboard::rgb_b(bool on)
{
	if(on)
	{
		reg.pinOn(shPin3);
	}
	else{
		reg.pinOff(shPin3);
	} 
}

//======================================
//======================================

/*bool Mavboard::ReadButton()
{
  pinMode(button_pin, INPUT);
  bool k = digitalRead(button_pin);  
  return k;
}*/
bool Mavboard::ReadButton1()
{
  pinMode(button1_pin, INPUT);
  bool k = digitalRead(button1_pin);  
  return k;
}

bool Mavboard::ReadButton2()
{
  pinMode(button1_pin, INPUT);
  bool k = digitalRead(button1_pin);  
  return k;
}

//======================================
//======================================

int Mavboard::ReadLDR()
{
  pinMode(ldr_pin, INPUT);
  int k = analogRead(ldr_pin);  
  return k;
}

//======================================
//======================================

int Mavboard::ReadPotentiometer()
{
  pinMode(potentiometer_pin, INPUT);
  int k = analogRead(potentiometer_pin);  
  return k;
}
//======================================
//======================================

int Mavboard::ReadIR_Sensor()
{
  pinMode(potentiometer_pin, INPUT);
  int k = analogRead(potentiometer_pin);  
  return k;
}
//======================================
//======================================
void Mavboard::forward()
{
	digitalWrite(right_motor_pin1, HIGH);
	digitalWrite(right_motor_pin2, LOW);
	digitalWrite(left_motor_pin1, HIGH);
	digitalWrite(left_motor_pin1, LOW);
}

void Mavboard::backward()
{
	digitalWrite(right_motor_pin1, LOW);
	digitalWrite(right_motor_pin2, HIGH);
	digitalWrite(left_motor_pin1, LOW);
	digitalWrite(left_motor_pin1, HIGH);
}

void Mavboard::right()
{
	digitalWrite(right_motor_pin1, LOW);
	digitalWrite(right_motor_pin2, LOW);
	digitalWrite(left_motor_pin1, HIGH);
	digitalWrite(left_motor_pin1, LOW);
}

void Mavboard::left()
{
	digitalWrite(right_motor_pin1, HIGH);
	digitalWrite(right_motor_pin2, LOW);
	digitalWrite(left_motor_pin1, LOW);
	digitalWrite(left_motor_pin1, LOW);
}

void Mavboard::stop()
{
	digitalWrite(right_motor_pin1, LOW);
	digitalWrite(right_motor_pin2, LOW);
	digitalWrite(left_motor_pin1, LOW);
	digitalWrite(left_motor_pin1, LOW);
}

void Mavboard::motor_test()
{
	digitalWrite(right_motor_pin1, HIGH);
	digitalWrite(right_motor_pin2, LOW);
	digitalWrite(left_motor_pin1, HIGH);
	digitalWrite(left_motor_pin1, LOW);
}
//======================================
//======================================