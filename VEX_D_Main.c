#pragma config(Sensor, dgtl1,  left_6bar_encoder, sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  right_6bar_encoder, sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  conveyor_encoder, sensorQuadEncoder)
#pragma config(Sensor, dgtl7,  left_drive_encoder, sensorQuadEncoder)
#pragma config(Sensor, dgtl9,  right_drive_encoder, sensorQuadEncoder)
#pragma config(Motor,  port1,           left_back_drive, tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           left_6bar_B,   tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           right_front_drive, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           left_conveyor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           left_front_drive, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           right_conveyor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           left_6bar_A,   tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           right_6bar_A,  tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           right_6bar_B,  tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          right_back_drive, tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#pragma platform(VEX)
#pragma competitionControl(Competition)
#pragma autonomousDuration(15)
#pragma userControlDuration(120)

#include "Vex_Competition_Includes.c" //Main competition background code...do not modify!
#include "VEX_D_Auton.h"

void pre_auton()
{
	resetEncoders();
}

task autonomous()
{
	basicAuton_Stack();
}

task usercontrol()
{
	while(true)
	{
		updateChannels();
		updateEncoders();
		updateDrive();
		updateManip();
	}

}
