#include "../shared/functions.c"

void control() {
	//bool slowDrive = false;

	while(true) {
		basicDrive(vexRT[Ch3],vexRT[Ch2]);

		//Drive
		//if (vexRT[Btn7D] || vexRT[Btn7L] || vexRT[Btn7U] || vexRT[Btn7R] ||
		//	vexRT[Btn8D] || vexRT[Btn8L] || vexRT[Btn8U] || vexRT[Btn8R]) slowDrive = true;
		//else slowDrive = false;

		//basicDrive( //ternary operator, if slowDrive is true, power is divided by 2.2
		//	slowDrive ? (vexRT[Ch3] / 2.2) : vexRT[Ch3],
		//	slowDrive ? (vexRT[Ch2] / 2.2) : vexRT[Ch2]
		//	);

		//Intake (Horizontal and Vertical)
		if (vexRT[Btn6U]) basicIntake(127);

		else if (vexRT[Btn6D]) basicIntake(-127);

				else basicIntake(0);

		// Flywheels
		if (vexRT[Btn5U])  flywheels(127,127); //rev spin motors
		else if (vexRT[Btn5D]) flywheels(64,64);
		else flywheels(0,0);

	}
}
