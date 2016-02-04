#include "../shared/functions.c"

void auton(){
	 basicDrive(-60,60); // drive auton
	 wait1Msec(2000);
	 basicDrive(0,0);
	}
