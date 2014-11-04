#pragma config(UART_Usage, UART1, uartVEXLCD, baudRate19200, IOPins, None, None)
#pragma config(Sensor, dgtl1,  right_drive_encoder, sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  left_drive_encoder, sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  right_6Bar_encoder, sensorQuadEncoder)
#pragma config(Sensor, dgtl7,  left_6Bar_encoder, sensorQuadEncoder)
#pragma config(Sensor, dgtl9,  conveyor_encoder, sensorQuadEncoder)
#pragma config(Motor,  port1,           left_back_drive, tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           left_6Bar_B,   tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           right_front_drive, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           conveyor,      tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port5,           left_front_drive, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           strafer,       tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           left_6Bar_A,   tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           right_6Bar_A,  tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           right_6Bar_B,  tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          right_back_drive, tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#pragma platform(VEX)
#pragma competitionControl(Competition)
#pragma autonomousDuration(15)
#pragma userControlDuration(120)

#include "Vex_Competition_Includes.c" //Main competition background code...do not modify!
#include "VEX_D_Combos.h"

//stack 3 skyrise pieces with cube (red side)
void triStack()
{
	//first skyrise piece
	autonDrive(-80, -80, 110); //back up
	autonConveyor(-50, 640); //get conveyor to position
	wait1Msec(500);
	autonDrive(100, 100, 230); //drive into piece
	wait1Msec(500);
	move6BarToPosition(120); //pick up piece
	wait1Msec(500);
	autonDrive(-80, -80, 120); //back up
	wait1Msec(500);
	autonDrive(-60, 60, 125); //turn to the stack slot
	wait1Msec(500);
	autonConveyor(-50, 500); //drop piece
	wait1Msec(500);
	auton6Bar(-50, 400);
	wait1Msec(500);
	autonDrive(-60, -60, 100); //back up
}

void pre_auton()
{
	resetEncoders();
}

task autonomous()
{
	//basicStack();
	triStack();
}

task usercontrol()
{
	while(true)
	{
		updateChannels();
		updateCombos();
		updateDrive();
		updateManip();
		updateEncoders(right_drive_encoder, conveyor_encoder);
	}

}
