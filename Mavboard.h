#include <Arduino.h>
#include <avr/pgmspace.h>

#include "ShiftOutX.h"
#include "ShiftPinNo.h"



/*
/*
beta 1.0 pinout

#define Buzzerpin 12
#define Ledpin 13
#define rgb_r_pin 5
#define rgb_g_pin 6
#define rgb_b_pin 7

#define button_pin A3
#define ldr_pin A1
#define potentiometer_pin A2
*/

/*
beta 1.1 pinout
*/
#define button1_pin A2
#define button2_pin A3
#define ldr_pin A0
#define potentiometer_pin A1

#define right_motor_pin1 5
#define right_motor_pin2 6
#define left_motor_pin1 7
#define left_motor_pin2 8

class Mavboard
{
public:
bool on;
int k_=0;
void set_board();
void Buzzer(bool on);
void Led1(bool on);
void Led2(bool on);
void Led3(bool on);
void Led4(bool on);
void rgb(bool on);
void rgb_r(bool on);
void rgb_g(bool on);
void rgb_b(bool on);

int ReadPotentiometer();
int ReadLDR();
int ReadIR_Sensor();

bool ReadButton1();
bool ReadButton2();

void forward();
void backward();
void right();
void left();
void stop();
void motor_test();

};

