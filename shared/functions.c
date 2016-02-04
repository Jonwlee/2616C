void basicDrive (int leftPower, int rightPower) {
  motor[LDrive] = leftPower;
  motor{RDrive] = -rightPower;
	}

//void basicHorizontalIntake (int power) {
//	motor[HIntake] = power;
//	}

void basicIntake (int power) {
	motor[VIntake] = -power
	motor[HIntake] = power;
	}

//void basicBothIntakes (int power) {
//	basicHorizontalIntake(power);
//	basicVerticalIntake((-1)*(power));
//	}

void flywheels (int UPower, int BPower) {
	motor[BLFly] = - BPower
	motor[BRFly] =  BPower;
	motor[ULFly] = UPower;
	motor[URFly]= -UPower;
	}
