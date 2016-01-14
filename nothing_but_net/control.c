#include "../shared/functions.c"

void control() {
	bool slowDrive = false;

	while(true) {

		//Drive
		if (vexRT[Btn6D] || vexRT[Btn6U]) slowDrive = true;
		else slowDrive = false;

		basicDrive(
			slowDrive ? (vexRT[Ch3] / 2.2) : vexRT[Ch3],
			slowDrive ? (vexRT[Ch2] / 2.2) : vexRT[Ch2]
			);

		//// Vertical Intake
		//if (vexRT[Btn5U]) {
		//	basicVerticalIntake(127);
		//}
		//else if (vexRT[Btn5D]){
		//	basicVerticalIntake(-127);
		//}
		//else if (abs(vexRT[Ch3Xmtr2]) >= 10) {
		//	basicVerticalIntake(vexRT[Ch3Xmtr2]);
		//}
		//else basicVerticalIntake(0);

		//// Horizontal Intake
		//if (vexRT[Btn6U]) {
		//	basicHorizontalIntake(127);
		//}
		//else if (vexRT[Btn6D]){
		//	basicHorizontalIntake(-127);
		//}
		//else if (abs(vexRT[Ch2Xmtr2]) >= 10) {
		//	basicHorizontalIntake(vexRT[Ch2Xmtr2]);
		//}
		//else basicHorizontalIntake(0);

		////Flywheels
		//if (vexRT[Btn7D] || vexRT[Btn7L] || vexRT[Btn7U] ||
		//		vexRT[Btn7R] || vexRT[Btn8D] || vexRT[Btn8L] ||
		//		vexRT[Btn8U] || vexRT[Btn8R]) {
		//	flywheels(127);
		//}
		//else if (vexRT[Btn5UXmtr2] || vexRT[Btn5DXmtr2] || vexRT[Btn6UXmtr2] || vexRT[Btn6DXmtr2]) {
		//	flywheels(127);
		//}
		//else if (vexRT[Btn8DXmtr2]) flywheels(40);
		//else if (vexRT[Btn8LXmtr2]) flywheels(70);
		//else if (vexRT[Btn8UXmtr2]) flywheels(100);
		//else if (vexRT[Btn8RXmtr2]) flywheels(127);
		//else flywheels(0);

		//wait1Msec(10);
	}
}
