
//Drive
int leftDrive = 0;
int rightDrive = 0;

//Conveyer
int intake = 0;
int outtake = 0;
int conveyorBrake = 0;

//Lift
int raise6Bar = 0;
int drop6Bar = 0;

void updateOI()
{
	leftDrive = vexRT[Ch3];
	rightDrive = vexRT[Ch2];

	intake = vexRT[Btn5U];
	outtake = vexRT[Btn5D];
	conveyorBrake = vexRT[Btn8R];

	raise6Bar = vexRT[Btn6U];
	drop6Bar = vexRT[Btn6D];
}
