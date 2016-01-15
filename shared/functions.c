void basicDrive (int leftPower, int rightPower) {
	// motor[FLDrive] = motor[BLDrive] = leftPower;
	// motor[FRDrive] = motor[BRDrive] = rightPower;
	}

void basicHorizontalIntake (int power) {
	motor[HIntake] = power;
	}

void basicVerticalIntake (int power) {
	motor[BVertIntake] = motor[UVertIntake] = power;
	}

void basicBothIntakes (int power) {
	basicHorizontalIntake(power);
	basicVerticalIntake(power);
	}

void flywheels (int power) {
	motor[BLFly] = motor[BRFly] = motor[ULFly] = motor[URFly]= power;
	}