#include "conversions.h"

int main(void)
{
	printLengthOptions();
		
	int test = 0;
	int from;
	int to;
	while (test == 0)
	{
		scanf("%d %d", &from, &to);
		test = lengthConversion(from, to);
	}
	return 0;
}
	
void printLengthOptions(void)
{
	printf("Please type the number associated with what you are converting from, then the number you are converting to, separated by a space, then press enter: \n");
	printf("1. Kilometer \n2. Meter \n3. Centimeter \n4. Millimeter \n5. Micrometer \n6. Nanometer \n7. Mile \n8. Yard \n9. Foot \n10. Inch \n11. Nautical Mile \n");
}

int lengthConversion(int from, int to)
{
	if (from == 1)			//Convert from Kilometer
	{
		if (to == 1)		//Convert to Kilometer
		{
			convertKilometerToKilometer();
			return 11;
		}
		else if (to == 2)		//Convert to Meter
		{
			convertKilometerToMeter();
			return 12;
		}
		else if (to == 3)		//Convert to Centimeter
		{
			convertKilometerToCentimeter();
			return 13;
		}
		else if (to == 4)		//Convert to Millimeter
		{
			convertKilometerToMillimeter();
			return 14;
		}
		else if (to == 5)		//Convert to Micrometer
		{
			convertKilometerToMicrometer();
			return 15;
		}
		else if (to == 6)		//Convert to Nanometer 
		{
			convertKilometerToNanometer();
			return 16;
		}
		else if (to == 7)		//Convert to Mile 
		{
			convertKilometerToMile();
			return 17;
		}
		else if (to == 8)		//Convert to Yard 
		{
			convertKilometerToYard();
			return 18;
		}
		else if (to == 9)		//Convert to Foot
		{
			convertKilometerToFoot();
			return 19;
		}	
		else if (to == 10)		//Convert to Inch
		{
			convertKilometerToInch();
			return 110;
		}
		else if (to == 11)		//Convert to Nautical Mile
		{
			convertKilometerToNauticalMile();
			return 111;
		}
		else
		{
			printf("Incorrect input. Try again.\n");
			return 0;
		}
	}
	else if (from == 2)		//Convert from Meter
	{
		if (to == 1)		//Convert to Kilometer
		{
			convertMeterToKilometer();
			return 21;
		}
		else if (to == 2)		//Convert to Meter
		{
			convertMeterToMeter();
			return 22;
		}
		else if (to == 3)		//Convert to Centimeter
		{
			convertMeterToCentimeter();
			return 23;
		}
		else if (to == 4)		//Convert to Millimeter
		{
			convertMeterToMillimeter();
			return 24;
		}
		else if (to == 5)		//Convert to Micrometer
		{
			convertMeterToMicrometer();
			return 25;
		}
		else if (to == 6)		//Convert to Nanometer 
		{
			convertMeterToNanometer();
			return 26;
		}
		else if (to == 7)		//Convert to Mile 
		{
			convertMeterToMile();
			return 27;
		}
		else if (to == 8)		//Convert to Yard 
		{
			convertMeterToYard();
			return 28;
		}
		else if (to == 9)		//Convert to Foot
		{
			convertMeterToFoot();
			return 29;
		}	
		else if (to == 10)		//Convert to Inch
		{
			convertMeterToInch();
			return 210;
		}
		else if (to == 11)		//Convert to Nautical Mile
		{
			convertMeterToNauticalMile();
			return 211;
		}
		else
		{
			printf("Incorrect input. Try again.\n");
			return 0;
		}
	}
	else if (from == 3)		//Convert from Centimeter
	{
		if (to == 1)		//Convert to Kilometer
		{
			convertCentimeterToKilometer();
			return 31;
		}
		else if (to == 2)		//Convert to Meter
		{
			convertCentimeterToMeter();
			return 32;
		}
		else if (to == 3)		//Convert to Centimeter
		{
			convertCentimeterToCentimeter();
			return 33;
		}
		else if (to == 4)		//Convert to Millimeter
		{
			convertCentimeterToMillimeter();
			return 34;
		}
		else if (to == 5)		//Convert to Micrometer
		{
			convertCentimeterToMicrometer();
			return 35;
		}
		else if (to == 6)		//Convert to Nanometer 
		{
			convertCentimeterToNanometer();
			return 36;
		}
		else if (to == 7)		//Convert to Mile 
		{
			convertCentimeterToMile();
			return 37;
		}
		else if (to == 8)		//Convert to Yard 
		{
			convertCentimeterToYard();
			return 38;
		}
		else if (to == 9)		//Convert to Foot
		{
			convertCentimeterToFoot();
			return 39;
		}	
		else if (to == 10)		//Convert to Inch
		{
			convertCentimeterToInch();
			return 310;
		}
		else if (to == 11)		//Convert to Nautical Mile
		{
			convertCentimeterToNauticalMile();
			return 311;
		}
		else
		{
			printf("Incorrect input. Try again.\n");
			return 0;
		}
	}
	else if (from == 4)		//Convert from Millimeter
	{
		if (to == 1)		//Convert to Kilometer
		{
			convertMillimeterToKilometer();
			return 41;
		}
		else if (to == 2)		//Convert to Meter
		{
			convertMillimeterToMeter();
			return 42;
		}
		else if (to == 3)		//Convert to Centimeter
		{
			convertMillimeterToCentimeter();
			return 43;
		}
		else if (to == 4)		//Convert to Millimeter
		{
			convertMillimeterToMillimeter();
			return 44;
		}
		else if (to == 5)		//Convert to Micrometer
		{
			convertMillimeterToMicrometer();
			return 45;
		}
		else if (to == 6)		//Convert to Nanometer 
		{
			convertMillimeterToNanometer();
			return 46;
		}
		else if (to == 7)		//Convert to Mile 
		{
			convertMillimeterToMile();
			return 47;
		}
		else if (to == 8)		//Convert to Yard 
		{
			convertMillimeterToYard();
			return 48;
		}
		else if (to == 9)		//Convert to Foot
		{
			convertMillimeterToFoot();
			return 49;
		}	
		else if (to == 10)		//Convert to Inch
		{
			convertMillimeterToInch();
			return 410;
		}
		else if (to == 11)		//Convert to Nautical Mile
		{
			convertMillimeterToNauticalMile();
			return 411;
		}
		else
		{
			printf("Incorrect input. Try again.\n");
			return 0;
		}
	}
	else if (from == 5)		//Convert from Micrometer
	{
		if (to == 1)		//Convert to Kilometer
		{
			convertMicrometerToKilometer();
			return 51;
		}
		else if (to == 2)		//Convert to Meter
		{
			convertMicrometerToMeter();
			return 52;
		}
		else if (to == 3)		//Convert to Centimeter
		{
			convertMicrometerToCentimeter();
			return 53;
		}
		else if (to == 4)		//Convert to Millimeter
		{
			convertMicrometerToMillimeter();
			return 54;
		}
		else if (to == 5)		//Convert to Micrometer
		{
			convertMicrometerToMicrometer();
			return 55;
		}
		else if (to == 6)		//Convert to Nanometer 
		{
			convertMicrometerToNanometer();
			return 56;
		}
		else if (to == 7)		//Convert to Mile 
		{
			convertMicrometerToMile();
			return 57;
		}
		else if (to == 8)		//Convert to Yard 
		{
			convertMicrometerToYard();
			return 58;
		}
		else if (to == 9)		//Convert to Foot
		{
			convertMicrometerToFoot();
			return 59;
		}	
		else if (to == 10)		//Convert to Inch
		{
			convertMicrometerToInch();
			return 510;
		}
		else if (to == 11)		//Convert to Nautical Mile
		{
			convertMicrometerToNauticalMile();
			return 511;
		}
		else
		{
			printf("Incorrect input. Try again.\n");
			return 0;
		}
	}
	else if (from == 6)		//Convert from Nanometer 
	{
		if (to == 1)		//Convert to Kilometer
		{
			convertNanometerToKilometer();
			return 61;
		}
		else if (to == 2)		//Convert to Meter
		{
			convertNanometerToMeter();
			return 62;
		}
		else if (to == 3)		//Convert to Centimeter
		{
			convertNanometerToCentimeter();
			return 63;
		}
		else if (to == 4)		//Convert to Millimeter
		{
			convertNanometerToMillimeter();
			return 64;
		}
		else if (to == 5)		//Convert to Micrometer
		{
			convertNanometerToMicrometer();
			return 65;
		}
		else if (to == 6)		//Convert to Nanometer 
		{
			convertNanometerToNanometer();
			return 66;
		}
		else if (to == 7)		//Convert to Mile 
		{
			convertNanometerToMile();
			return 67;
		}
		else if (to == 8)		//Convert to Yard 
		{
			convertNanometerToYard();
			return 68;
		}
		else if (to == 9)		//Convert to Foot
		{
			convertNanometerToFoot();
			return 69;
		}	
		else if (to == 10)		//Convert to Inch
		{
			convertNanometerToInch();
			return 610;
		}
		else if (to == 11)		//Convert to Nautical Mile
		{
			convertNanometerToNauticalMile();
			return 611;
		}
		else
		{
			printf("Incorrect input. Try again.\n");
			return 0;
		}
	}
	else if (from == 7)		//Convert from Mile 
	{
		if (to == 1)		//Convert to Kilometer
		{
			convertMileToKilometer();
			return 71;
		}
		else if (to == 2)		//Convert to Meter
		{
			convertMileToMeter();
			return 72;
		}
		else if (to == 3)		//Convert to Centimeter
		{
			convertMileToCentimeter();
			return 73;
		}
		else if (to == 4)		//Convert to Millimeter
		{
			convertMileToMillimeter();
			return 74;
		}
		else if (to == 5)		//Convert to Micrometer
		{
			convertMileToMicrometer();
			return 75;
		}
		else if (to == 6)		//Convert to Nanometer 
		{
			convertMileToNanometer();
			return 76;
		}
		else if (to == 7)		//Convert to Mile 
		{
			convertMileToMile();
			return 77;
		}
		else if (to == 8)		//Convert to Yard 
		{
			convertMileToYard();
			return 78;
		}
		else if (to == 9)		//Convert to Foot
		{
			convertMileToFoot();
			return 79;
		}	
		else if (to == 10)		//Convert to Inch
		{
			convertMileToInch();
			return 710;
		}
		else if (to == 11)		//Convert to Nautical Mile
		{
			convertMileToNauticalMile();
			return 711;
		}
		else
		{
			printf("Incorrect input. Try again.\n");
			return 0;
		}
	}
	else if (from == 8)		//Convert from Yard 
	{
		if (to == 1)		//Convert to Kilometer
		{
			convertYardToKilometer();
			return 81;
		}
		else if (to == 2)		//Convert to Meter
		{
			convertYardToMeter();
			return 82;
		}
		else if (to == 3)		//Convert to Centimeter
		{
			convertYardToCentimeter();
			return 83;
		}
		else if (to == 4)		//Convert to Millimeter
		{
			convertYardToMillimeter();
			return 84;
		}
		else if (to == 5)		//Convert to Micrometer
		{
			convertYardToMicrometer();
			return 85;
		}
		else if (to == 6)		//Convert to Nanometer 
		{
			convertYardToNanometer();
			return 86;
		}
		else if (to == 7)		//Convert to Mile 
		{
			convertYardToMile();
			return 87;
		}
		else if (to == 8)		//Convert to Yard 
		{
			convertYardToYard();
			return 88;
		}
		else if (to == 9)		//Convert to Foot
		{
			convertYardToFoot();
			return 89;
		}	
		else if (to == 10)		//Convert to Inch
		{
			convertYardToInch();
			return 810;
		}
		else if (to == 11)		//Convert to Nautical Mile
		{
			convertYardToNauticalMile();
			return 811;
		}
		else
		{
			printf("Incorrect input. Try again.\n");
			return 0;
		}
	}
	else if (from == 9)		//Convert from Foot
	{
		if (to == 1)		//Convert to Kilometer
		{
			convertFootToKilometer();
			return 91;
		}
		else if (to == 2)		//Convert to Meter
		{
			convertFootToMeter();
			return 92;
		}
		else if (to == 3)		//Convert to Centimeter
		{
			convertFootToCentimeter();
			return 93;
		}
		else if (to == 4)		//Convert to Millimeter
		{
			convertFootToMillimeter();
			return 94;
		}
		else if (to == 5)		//Convert to Micrometer
		{
			convertFootToMicrometer();
			return 95;
		}
		else if (to == 6)		//Convert to Nanometer 
		{
			convertFootToNanometer();
			return 96;
		}
		else if (to == 7)		//Convert to Mile 
		{
			convertFootToMile();
			return 97;
		}
		else if (to == 8)		//Convert to Yard 
		{
			convertFootToYard();
			return 98;
		}
		else if (to == 9)		//Convert to Foot
		{
			convertFootToFoot();
			return 99;
		}	
		else if (to == 10)		//Convert to Inch
		{
			convertFootToInch();
			return 910;
		}
		else if (to == 11)		//Convert to Nautical Mile
		{
			convertFootToNauticalMile();
			return 911;
		}
		else
		{
			printf("Incorrect input. Try again.\n");
			return 0;
		}
	}	
	else if (from == 10)	//Convert from Inch
	{
		if (to == 1)		//Convert to Kilometer
		{
			convertInchToKilometer();
			return 101;
		}
		else if (to == 2)		//Convert to Meter
		{
			convertInchToMeter();
			return 102;
		}
		else if (to == 3)		//Convert to Centimeter
		{
			convertInchToCentimeter();
			return 103;
		}
		else if (to == 4)		//Convert to Millimeter
		{
			convertInchToMillimeter();
			return 104;
		}
		else if (to == 5)		//Convert to Micrometer
		{
			convertInchToMicrometer();
			return 105;
		}
		else if (to == 6)		//Convert to Nanometer 
		{
			convertInchToNanometer();
			return 106;
		}
		else if (to == 7)		//Convert to Mile 
		{
			convertInchToMile();
			return 107;
		}
		else if (to == 8)		//Convert to Yard 
		{
			convertInchToYard();
			return 108;
		}
		else if (to == 9)		//Convert to Foot
		{
			convertInchToFoot();
			return 109;
		}	
		else if (to == 10)		//Convert to Inch
		{
			convertInchToInch();
			return 1010;
		}
		else if (to == 11)		//Convert to Nautical Mile
		{
			convertInchToNauticalMile();
			return 1011;
		}
		else
		{
			printf("Incorrect input. Try again.\n");
			return 0;
		}
	}
	else if (from == 11)	//Convert from Nautical Mile
	{
		if (to == 1)		//Convert to Kilometer
		{
			convertNauticalMileToKilometer();
			return 111;
		}
		else if (to == 2)		//Convert to Meter
		{
			convertNauticalMileToMeter();
			return 112;
		}
		else if (to == 3)		//Convert to Centimeter
		{
			convertNauticalMileToCentimeter();
			return 113;
		}
		else if (to == 4)		//Convert to Millimeter
		{
			convertNauticalMileToMillimeter();
			return 114;
		}
		else if (to == 5)		//Convert to Micrometer
		{
			convertNauticalMileToMicrometer();
			return 115;
		}
		else if (to == 6)		//Convert to Nanometer 
		{
			convertNauticalMileToNanometer();
			return 116;
		}
		else if (to == 7)		//Convert to Mile 
		{
			convertNauticalMileToMile();
			return 117;
		}
		else if (to == 8)		//Convert to Yard 
		{
			convertNauticalMileToYard();
			return 118;
		}
		else if (to == 9)		//Convert to Foot
		{
			convertNauticalMileToFoot();
			return 119;
		}	
		else if (to == 10)		//Convert to Inch
		{
			convertNauticalMileToInch();
			return 1110;
		}
		else if (to == 11)		//Convert to Nautical Mile
		{
			convertNauticalMileToNauticalMile();
			return 1111;
		}
		else
		{
			printf("Incorrect input. Try again.\n");
			return 0;
		}
	}
	else
	{
		printf("Incorrect input. Try again.\n");
		return 0;
	}
	return 0;
}

//Convert from Kilometer

void convertKilometerToKilometer(void)
{
	double kilometers;
	printf("How many kilometers are you converting to kilometers?\n");
	scanf("%lf", &kilometers);
	printf("%lf kilometers is the same as %lf kilometers.\n", kilometers, kilometers);
}

void convertKilometerToMeter(void)
{
	double kilometers;
	double meters = 0;
	printf("How many kilometers are you converting to meters?\n");
	scanf("%lf", &kilometers);
	meters = kilometers * 1000;
	printf("%lf kilometers is the same as %lf meters.\n", kilometers, meters);
}

void convertKilometerToCentimeter(void)
{
	double kilometers;
	double centimeters = 0;
	printf("How many kilometers are you converting to centimeters?\n");
	scanf("%lf", &kilometers);
	centimeters = kilometers * 100000;
	printf("%lf kilometers is the same as %lf centimeters.\n", kilometers, centimeters);
}

void convertKilometerToMillimeter(void)
{
	double kilometers;
	double millimeters = 0;
	printf("How many kilometers are you converting to millimeters?\n");
	scanf("%lf", &kilometers);
	millimeters = kilometers * 1000000;
	printf("%lf kilometers is the same as %lf millimeters.\n", kilometers, millimeters);
}

void convertKilometerToMicrometer(void)
{
	double kilometers;
	double micrometers = 0;
	printf("How many kilometers are you converting to micrometers?\n");
	scanf("%lf", &kilometers);
	micrometers = kilometers * 1000000000;
	printf("%lf kilometers is the same as %lf mircometers.\n", kilometers, micrometers);
}

void convertKilometerToNanometer(void)
{
	double kilometers;
	double nanometers = 0;
	printf("How many kilometers are you converting to nanometers?\n");
	scanf("%lf", &kilometers);
	nanometers = kilometers * 1000000000000;
	printf("%lf kilometers is the same as %lf nanometers.\n", kilometers, nanometers);
}

void convertKilometerToMile(void)
{
	double kilometers;
	double miles = 0;
	printf("How many kilometers are you converting to miles?\n");
	scanf("%lf", &kilometers);
	miles = kilometers * 0.621371;
	printf("%lf kilometers is the same as %lf miles.\n", kilometers, miles);
}

void convertKilometerToYard(void)
{
	double kilometers;
	double yards = 0;
	printf("How many kilometers are you converting to yards?\n");
	scanf("%lf", &kilometers);
	yards = kilometers * 1093.612959995625;
	printf("%lf kilometers is the same as %lf yards.\n", kilometers, yards);
}

void convertKilometerToFoot(void)
{
	double kilometers;
	double feet = 0;
	printf("How many kilometers are you converting to feet?\n");
	scanf("%lf", &kilometers);
	feet = kilometers * 3280.84;
	printf("%lf kilometers is the same as %lf feet.\n", kilometers, feet);
}

void convertKilometerToInch(void)
{
	double kilometers;
	double inches = 0;
	printf("How many kilometers are you converting to inches?\n");
	scanf("%lf", &kilometers);
	inches = kilometers * 39370.1;
	printf("%lf kilometers is the same as %lf inches.\n", kilometers, inches);
}

void convertKilometerToNauticalMile(void)
{
	double kilometers;
	double nauticalMiles = 0;
	printf("How many kilometers are you converting to nautical miles?\n");
	scanf("%lf", &kilometers);
	nauticalMiles = kilometers * 0.539957;
	printf("%lf kilometers is the same as %lf nautical miles.\n", kilometers, nauticalMiles);
}

//Convert from Meter

void convertMeterToKilometer(void)
{
	double meters;
	double kilometers = 0;
	printf("How many meters are you converting to kilometers?\n");
	scanf("%lf", &meters);
	kilometers = meters * 0.001;
	printf("%lf meters is the same as %lf kilometers.\n", meters, kilometers);
}

void convertMeterToMeter(void)
{
	double meters;
	printf("How many meters are you converting to meters?\n");
	scanf("%lf", &meters);
	printf("%lf meters is the same as %lf meters.\n", meters, meters);
}

void convertMeterToCentimeter(void)
{
	double meters;
	double centimeters = 0;
	printf("How many meters are you converting to centimeters?\n");
	scanf("%lf", &meters);
	centimeters = meters * 100;
	printf("%lf meters is the same as %lf centimeters.\n", meters, centimeters);
}

void convertMeterToMillimeter(void)
{
	double meters;
	double millimeters = 0;
	printf("How many meters are you converting to millimeters?\n");
	scanf("%lf", &meters);
	millimeters = meters * 1000;
	printf("%lf meters is the same as %lf millimeters.\n", meters, millimeters);
}

void convertMeterToMicrometer(void)
{
	double meters;
	double micrometers = 0;
	printf("How many meters are you converting to micrometers?\n");
	scanf("%lf", &meters);
	micrometers = meters * 1000000;
	printf("%lf meters is the same as %lf mircometers.\n", meters, micrometers);
}

void convertMeterToNanometer(void)
{
	double meters;
	double nanometers = 0;
	printf("How many meters are you converting to nanometers?\n");
	scanf("%lf", &meters);
	nanometers = meters * 1000000000;
	printf("%lf meters is the same as %lf nanometers.\n", meters, nanometers);
}

void convertMeterToMile(void)
{
	double meters;
	double miles = 0;
	printf("How many meters are you converting to miles?\n");
	scanf("%lf", &meters);
	miles = meters * 0.000621371;
	printf("%lf meters is the same as %lf miles.\n", meters, miles);
}

void convertMeterToYard(void)
{
	double meters;
	double yards = 0;
	printf("How many meters are you converting to yards?\n");
	scanf("%lf", &meters);
	yards = meters * 1.09361;
	printf("%lf meters is the same as %lf yards.\n", meters, yards);
}

void convertMeterToFoot(void)
{
	double meters;
	double feet = 0;
	printf("How many meters are you converting to feet?\n");
	scanf("%lf", &meters);
	feet = meters * 3.28084;
	printf("%lf meters is the same as %lf feet.\n", meters, feet);
}

void convertMeterToInch(void)
{
	double meters;
	double inches = 0;
	printf("How many meters are you converting to inches?\n");
	scanf("%lf", &meters);
	inches = meters * 39.3701;
	printf("%lf meters is the same as %lf inches.\n", meters, inches);
}

void convertMeterToNauticalMile(void)
{
	double meters;
	double nauticalMiles = 0;
	printf("How many meters are you converting to nautical miles?\n");
	scanf("%lf", &meters);
	nauticalMiles = meters * 0.000539957;
	printf("%lf meters is the same as %lf nautical miles.\n", meters, nauticalMiles);
}

//Convert from Centimeter

void convertCentimeterToKilometer(void)
{
	double centimeters;
	double kilometers = 0;
	printf("How many centimeters are you converting to kilometers?\n");
	scanf("%lf", &centimeters);
	kilometers = centimeters * 0.00001;
	printf("%lf centimeters is the same as %lf kilometers.\n", centimeters, kilometers);
}

void convertCentimeterToMeter(void)
{
	double centimeters;
	double meters = 0.01;
	printf("How many centimeters are you converting to meters?\n");
	scanf("%lf", &centimeters);
	meters = centimeters * 1;
	printf("%lf centimeters is the same as %lf meters.\n", centimeters, meters);
}

void convertCentimeterToCentimeter(void)
{
	double centimeters;
	printf("How many centimeters are you converting to centimeters?\n");
	scanf("%lf", &centimeters);
	printf("%lf centimeters is the same as %lf centimeters.\n", centimeters, centimeters);
}

void convertCentimeterToMillimeter(void)
{
	double centimeters;
	double millimeters = 0;
	printf("How many centimeters are you converting to millimeters?\n");
	scanf("%lf", &centimeters);
	millimeters = centimeters * 10;
	printf("%lf centimeters is the same as %lf millimeters.\n", centimeters, millimeters);
}

void convertCentimeterToMicrometer(void)
{
	double centimeters;
	double micrometers = 0;
	printf("How many centimeters are you converting to micrometers?\n");
	scanf("%lf", &centimeters);
	micrometers = centimeters * 10000;
	printf("%lf centimeters is the same as %lf mircometers.\n", centimeters, micrometers);
}

void convertCentimeterToNanometer(void)
{
	double centimeters;
	double nanometers = 0;
	printf("How many centimeters are you converting to nanometers?\n");
	scanf("%lf", &centimeters);
	nanometers = centimeters * 10000000;
	printf("%lf centimeters is the same as %lf nanometers.\n", centimeters, nanometers);
}

void convertCentimeterToMile(void)
{
	double centimeters;
	double miles = 0;
	printf("How many centimeters are you converting to miles?\n");
	scanf("%lf", &centimeters);
	miles = centimeters * 0.0000062137;
	printf("%lf centimeters is the same as %lf miles.\n", centimeters, miles);
}

void convertCentimeterToYard(void)
{
	double centimeters;
	double yards = 0;
	printf("How many centimeters are you converting to yards?\n");
	scanf("%lf", &centimeters);
	yards = centimeters * 0.0109361;
	printf("%lf centimeters is the same as %lf yards.\n", centimeters, yards);
}

void convertCentimeterToFoot(void)
{
	double centimeters;
	double feet = 0;
	printf("How many centimeters are you converting to feet?\n");
	scanf("%lf", &centimeters);
	feet = centimeters * 0.0328084;
	printf("%lf centimeters is the same as %lf feet.\n", centimeters, feet);
}

void convertCentimeterToInch(void)
{
	double centimeters;
	double inches = 0;
	printf("How many centimeters are you converting to inches?\n");
	scanf("%lf", &centimeters);
	inches = centimeters * 0.393701;
	printf("%lf centimeters is the same as %lf inches.\n", centimeters, inches);
}

void convertCentimeterToNauticalMile(void)
{
	double centimeters;
	double nauticalMiles = 0;
	printf("How many centimeters are you converting to nautical miles?\n");
	scanf("%lf", &centimeters);
	nauticalMiles = centimeters * 0.0000053996;
	printf("%lf centimeters is the same as %lf nautical miles.\n", centimeters, nauticalMiles);
}

//Convert from Millimeter

void convertMillimeterToKilometer(void)
{
	double millimeters;
	double kilometers = 0;
	printf("How many millimeters are you converting to kilometers?\n");
	scanf("%lf", &millimeters);
	kilometers = millimeters * 0.000001;
	printf("%lf millimeters is the same as %lf kilometers.\n", millimeters, kilometers);
}

void convertMillimeterToMeter(void)
{
	double millimeters;
	double meters = 0;
	printf("How many millimeters are you converting to meters?\n");
	scanf("%lf", &millimeters);
	meters = millimeters * 0.001;
	printf("%lf millimeters is the same as %lf meters.\n", millimeters, meters);
}

void convertMillimeterToCentimeter(void)
{
	double millimeters;
	double centimeters = 0;
	printf("How many millimeters are you converting to centimeters?\n");
	scanf("%lf", &millimeters);
	centimeters = millimeters * 0.1;
	printf("%lf millimeters is the same as %lf centimeters.\n", millimeters, centimeters);
}

void convertMillimeterToMillimeter(void)
{
	double millimeters;
	printf("How many millimeters are you converting to millimeters?\n");
	scanf("%lf", &millimeters);
	printf("%lf millimeters is the same as %lf millimeters.\n", millimeters, millimeters);
}

void convertMillimeterToMicrometer(void)
{
	double millimeters;
	double micrometers = 0;
	printf("How many millimeters are you converting to micrometers?\n");
	scanf("%lf", &millimeters);
	micrometers = millimeters * 1000;
	printf("%lf millimeters is the same as %lf mircometers.\n", millimeters, micrometers);
}

void convertMillimeterToNanometer(void)
{
	double millimeters;
	double nanometers = 0;
	printf("How many millimeters are you converting to nanometers?\n");
	scanf("%lf", &millimeters);
	nanometers = millimeters * 1000000;
	printf("%lf millimeters is the same as %lf nanometers.\n", millimeters, nanometers);
}

void convertMillimeterToMile(void)
{
	double millimeters;
	double miles = 0;
	printf("How many millimeters are you converting to miles?\n");
	scanf("%lf", &millimeters);
	miles = millimeters * 0.00000062137;
	printf("%lf millimeters is the same as %lf miles.\n", millimeters, miles);
}

void convertMillimeterToYard(void)
{
	double millimeters;
	double yards = 0;
	printf("How many millimeters are you converting to yards?\n");
	scanf("%lf", &millimeters);
	yards = millimeters * 0.00109361;
	printf("%lf millimeters is the same as %lf yards.\n", millimeters, yards);
}

void convertMillimeterToFoot(void)
{
	double millimeters;
	double feet = 0;
	printf("How many millimeters are you converting to feet?\n");
	scanf("%lf", &millimeters);
	feet = millimeters * 0.00328084;
	printf("%lf millimeters is the same as %lf feet.\n", millimeters, feet);
}

void convertMillimeterToInch(void)
{
	double millimeters;
	double inches = 0;
	printf("How many millimeters are you converting to inches?\n");
	scanf("%lf", &millimeters);
	inches = millimeters * 0.0393701;
	printf("%lf millimeters is the same as %lf inches.\n", millimeters, inches);
}

void convertMillimeterToNauticalMile(void)
{
	double millimeters;
	double nauticalMiles = 0;
	printf("How many millimeters are you converting to nautical miles?\n");
	scanf("%lf", &millimeters);
	nauticalMiles = millimeters * 0.00000053996;
	printf("%lf millimeters is the same as %lf nautical miles.\n", millimeters, nauticalMiles);
}

//Convert from Micrometer

void convertMicrometerToKilometer(void)
{
	double micrometers;
	double kilometers = 0;
	printf("How many micrometers are you converting to kilometers?\n");
	scanf("%lf", &micrometers);
	kilometers = micrometers * 0.000000001;
	printf("%lf micrometers is the same as %lf kilometers.\n", micrometers, kilometers);
}

void convertMicrometerToMeter(void)
{
	double micrometers;
	double meters = 0;
	printf("How many micrometers are you converting to meters?\n");
	scanf("%lf", &micrometers);
	meters = micrometers * 0.000001;
	printf("%lf micrometers is the same as %lf meters.\n", micrometers, meters);
}

void convertMicrometerToCentimeter(void)
{
	double micrometers;
	double centimeters = 0;
	printf("How many micrometers are you converting to centimeters?\n");
	scanf("%lf", &micrometers);
	centimeters = micrometers * 0.0001;
	printf("%lf micrometers is the same as %lf centimeters.\n", micrometers, centimeters);
}

void convertMicrometerToMillimeter(void)
{
	double micrometers;
	double millimeters = 0;
	printf("How many micrometers are you converting to millimeters?\n");
	scanf("%lf", &micrometers);
	millimeters = micrometers * 0.001;
	printf("%lf micrometers is the same as %lf millimeters.\n", micrometers, millimeters);
}

void convertMicrometerToMicrometer(void)
{
	double micrometers;
	printf("How many micrometers are you converting to micrometers?\n");
	scanf("%lf", &micrometers);
	printf("%lf micrometers is the same as %lf mircometers.\n", micrometers, micrometers);
}

void convertMicrometerToNanometer(void)
{
	double micrometers;
	double nanometers = 0;
	printf("How many micrometers are you converting to nanometers?\n");
	scanf("%lf", &micrometers);
	nanometers = micrometers * 1000;
	printf("%lf micrometers is the same as %lf nanometers.\n", micrometers, nanometers);
}

void convertMicrometerToMile(void)
{
	double micrometers;
	double miles = 0;
	printf("How many micrometers are you converting to miles?\n");
	scanf("%lf", &micrometers);
	miles = micrometers * 0.00000000062137;
	printf("%lf micrometers is the same as %lf miles.\n", micrometers, miles);
}

void convertMicrometerToYard(void)
{
	double micrometers;
	double yards = 0;
	printf("How many micrometers are you converting to yards?\n");
	scanf("%lf", &micrometers);
	yards = micrometers * 0.0000010936;
	printf("%lf micrometers is the same as %lf yards.\n", micrometers, yards);
}

void convertMicrometerToFoot(void)
{
	double micrometers;
	double feet = 0;
	printf("How many micrometers are you converting to feet?\n");
	scanf("%lf", &micrometers);
	feet = micrometers * 0.0000032808;
	printf("%lf micrometers is the same as %lf feet.\n", micrometers, feet);
}

void convertMicrometerToInch(void)
{
	double micrometers;
	double inches = 0;
	printf("How many micrometers are you converting to inches?\n");
	scanf("%lf", &micrometers);
	inches = micrometers * 0.00003937;
	printf("%lf micrometers is the same as %lf inches.\n", micrometers, inches);
}

void convertMicrometerToNauticalMile(void)
{
	double micrometers;
	double nauticalMiles = 0;
	printf("How many micrometers are you converting to nautical miles?\n");
	scanf("%lf", &micrometers);
	nauticalMiles = micrometers * 0.00000000053996;
	printf("%lf micrometers is the same as %lf nautical miles.\n", micrometers, nauticalMiles);
}

//Convert from Nanometer

void convertNanometerToKilometer(void)
{
	double nanometers;
	double kilometers = 0;
	printf("How many nanometers are you converting to kilometers?\n");
	scanf("%lf", &nanometers);
	kilometers = nanometers * 0.000000000001;
	printf("%lf nanometers is the same as %lf kilometers.\n", nanometers, kilometers);
}

void convertNanometerToMeter(void)
{
	double nanometers;
	double meters = 0;
	printf("How many nanometers are you converting to meters?\n");
	scanf("%lf", &nanometers);
	meters = nanometers * 0.000000001;
	printf("%lf nanometers is the same as %lf meters.\n", nanometers, meters);
}

void convertNanometerToCentimeter(void)
{
	double nanometers;
	double centimeters = 0;
	printf("How many nanometers are you converting to centimeters?\n");
	scanf("%lf", &nanometers);
	centimeters = nanometers * 0.0000001;
	printf("%lf nanometers is the same as %lf centimeters.\n", nanometers, centimeters);
}

void convertNanometerToMillimeter(void)
{
	double nanometers;
	double millimeters = 0;
	printf("How many nanometers are you converting to millimeters?\n");
	scanf("%lf", &nanometers);
	millimeters = nanometers * 0.000001;
	printf("%lf nanometers is the same as %lf millimeters.\n", nanometers, millimeters);
}

void convertNanometerToMicrometer(void)
{
	double nanometers;
	double micrometers = 0;
	printf("How many nanometers are you converting to micrometers?\n");
	scanf("%lf", &nanometers);
	micrometers = nanometers * 0.001;
	printf("%lf nanometers is the same as %lf mircometers.\n", nanometers, micrometers);
}

void convertNanometerToNanometer(void)
{
	double nanometers;
	printf("How many nanometers are you converting to nanometers?\n");
	scanf("%lf", &nanometers);
	printf("%lf nanometers is the same as %lf nanometers.\n", nanometers, nanometers);
}

void convertNanometerToMile(void)
{
	double nanometers;
	double miles = 0;
	printf("How many nanometers are you converting to miles?\n");
	scanf("%lf", &nanometers);
	miles = nanometers * 0.00000000000062137;
	printf("%lf nanometers is the same as %lf miles.\n", nanometers, miles);
}

void convertNanometerToYard(void)
{
	double nanometers;
	double yards = 0;
	printf("How many nanometers are you converting to yards?\n");
	scanf("%lf", &nanometers);
	yards = nanometers * 0.0000000010936;
	printf("%lf nanometers is the same as %lf yards.\n", nanometers, yards);
}

void convertNanometerToFoot(void)
{
	double nanometers;
	double feet = 0;
	printf("How many nanometers are you converting to feet?\n");
	scanf("%lf", &nanometers);
	feet = nanometers * 0.0000000032808;
	printf("%lf nanometers is the same as %lf feet.\n", nanometers, feet);
}

void convertNanometerToInch(void)
{
	double nanometers;
	double inches = 0;
	printf("How many nanometers are you converting to inches?\n");
	scanf("%lf", &nanometers);
	inches = nanometers * 0.00000003937;
	printf("%lf nanometers is the same as %lf inches.\n", nanometers, inches);
}

void convertNanometerToNauticalMile(void)
{
	double nanometers;
	double nauticalMiles = 0;
	printf("How many nanometers are you converting to nautical miles?\n");
	scanf("%lf", &nanometers);
	nauticalMiles = nanometers * 0.00000000000053996;
	printf("%lf nanometers is the same as %lf nautical miles.\n", nanometers, nauticalMiles);
}

//Convert from Mile

void convertMileToKilometer(void)
{
	double miles;
	double kilometers = 0;
	printf("How many miles are you converting to kilometers?\n");
	scanf("%lf", &miles);
	kilometers = miles * 1.60934;
	printf("%lf miles is the same as %lf kilometers.\n", miles, kilometers);
}

void convertMileToMeter(void)
{
	double miles;
	double meters;
	printf("How many miles are you converting to meters?\n");
	scanf("%lf", &miles);
	meters = miles * 1609.34;
	printf("%lf miles is the same as %lf meters.\n", miles, meters);
}

void convertMileToCentimeter(void)
{
	double miles;
	double centimeters = 0;
	printf("How many miles are you converting to centimeters?\n");
	scanf("%lf", &miles);
	centimeters = miles * 160934;
	printf("%lf miles is the same as %lf centimeters.\n", miles, centimeters);
}

void convertMileToMillimeter(void)
{
	double miles;
	double millimeters = 0;
	printf("How many miles are you converting to millimeters?\n");
	scanf("%lf", &miles);
	millimeters = miles * 1609000;
	printf("%lf miles is the same as %lf millimeters.\n", miles, millimeters);
}

void convertMileToMicrometer(void)
{
	double miles;
	double micrometers = 0;
	printf("How many miles are you converting to micrometers?\n");
	scanf("%lf", &miles);
	micrometers = miles * 1609000000;
	printf("%lf miles is the same as %lf mircometers.\n", miles, micrometers);
}

void convertMileToNanometer(void)
{
	double miles;
	double nanometers = 0;
	printf("How many miles are you converting to nanometers?\n");
	scanf("%lf", &miles);
	nanometers = miles * 1609000000000;
	printf("%lf miles is the same as %lf nanometers.\n", miles, nanometers);
}

void convertMileToMile(void)
{
	double miles;
	printf("How many miles are you converting to miles?\n");
	scanf("%lf", &miles);
	printf("%lf miles is the same as %lf miles.\n", miles, miles);
}

void convertMileToYard(void)
{
	double miles;
	double yards = 0;
	printf("How many miles are you converting to yards?\n");
	scanf("%lf", &miles);
	yards = miles * 1760;
	printf("%lf miles is the same as %lf yards.\n", miles, yards);
}

void convertMileToFoot(void)
{
	double miles;
	double feet = 0;
	printf("How many miles are you converting to feet?\n");
	scanf("%lf", &miles);
	feet = miles * 5280;
	printf("%lf miles is the same as %lf feet.\n", miles, feet);
}

void convertMileToInch(void)
{
	double miles;
	double inches = 0;
	printf("How many miles are you converting to inches?\n");
	scanf("%lf", &miles);
	inches = miles * 63360;
	printf("%lf miles is the same as %lf inches.\n", miles, inches);
}

void convertMileToNauticalMile(void)
{
	double miles;
	double nauticalMiles = 0;
	printf("How many miles are you converting to nautical miles?\n");
	scanf("%lf", &miles);
	nauticalMiles = miles * 0.868976;
	printf("%lf miles is the same as %lf nautical miles.\n", miles, nauticalMiles);
}

//Convert from Yard

void convertYardToKilometer(void)
{
	double yards;
	double kilometers = 0;
	printf("How many yards are you converting to kilometers?\n");
	scanf("%lf", &yards);
	kilometers = yards * 0.0009144;
	printf("%lf yards is the same as %lf kilometers.\n", yards, kilometers);
}

void convertYardToMeter(void)
{
	double yards;
	double meters = 0;
	printf("How many yards are you converting to meters?\n");
	scanf("%lf", &yards);
	meters = yards * 0.9144;
	printf("%lf yards is the same as %lf meters.\n", yards, meters);
}

void convertYardToCentimeter(void)
{
	double yards;
	double centimeters = 0;
	printf("How many yards are you converting to centimeters?\n");
	scanf("%lf", &yards);
	centimeters = yards * 91.44;
	printf("%lf yards is the same as %lf centimeters.\n", yards, centimeters);
}

void convertYardToMillimeter(void)
{
	double yards;
	double millimeters = 0;
	printf("How many yards are you converting to millimeters?\n");
	scanf("%lf", &yards);
	millimeters = yards * 914.4;
	printf("%lf yards is the same as %lf millimeters.\n", yards, millimeters);
}

void convertYardToMicrometer(void)
{
	double yards;
	double micrometers = 0;
	printf("How many yards are you converting to micrometers?\n");
	scanf("%lf", &yards);
	micrometers = yards * 914400;
	printf("%lf yards is the same as %lf mircometers.\n", yards, micrometers);
}

void convertYardToNanometer(void)
{
	double yards;
	double nanometers = 0;
	printf("How many yards are you converting to nanometers?\n");
	scanf("%lf", &yards);
	nanometers = yards * 914400000;
	printf("%lf yards is the same as %lf nanometers.\n", yards, nanometers);
}

void convertYardToMile(void)
{
	double yards;
	double miles = 0;
	printf("How many yards are you converting to miles?\n");
	scanf("%lf", &yards);
	miles = yards * 0.000568182;
	printf("%lf yards is the same as %lf miles.\n", yards, miles);
}

void convertYardToYard(void)
{
	double yards;
	printf("How many yards are you converting to yards?\n");
	scanf("%lf", &yards);
	printf("%lf yards is the same as %lf yards.\n", yards, yards);
}

void convertYardToFoot(void)
{
	double yards;
	double feet = 0;
	printf("How many yards are you converting to feet?\n");
	scanf("%lf", &yards);
	feet = yards * 3;
	printf("%lf yards is the same as %lf feet.\n", yards, feet);
}

void convertYardToInch(void)
{
	double yards;
	double inches = 0;
	printf("How many yards are you converting to inches?\n");
	scanf("%lf", &yards);
	inches = yards * 36;
	printf("%lf yards is the same as %lf inches.\n", yards, inches);
}

void convertYardToNauticalMile(void)
{
	double yards;
	double nauticalMiles = 0;
	printf("How many yards are you converting to nautical miles?\n");
	scanf("%lf", &yards);
	nauticalMiles = yards * 0.000493737;
	printf("%lf yards is the same as %lf nautical miles.\n", yards, nauticalMiles);
}

//Convert from Foot

void convertFootToKilometer(void)
{
	double feet;
	double kilometers = 0;
	printf("How many feet are you converting to kilometers?\n");
	scanf("%lf", &feet);
	kilometers = feet * 0.0003048;
	printf("%lf feet is the same as %lf kilometers.\n", feet, kilometers);
}

void convertFootToMeter(void)
{
	double feet;
	double meters = 0;
	printf("How many feet are you converting to meters?\n");
	scanf("%lf", &feet);
	meters = feet * 0.3048;
	printf("%lf feet is the same as %lf meters.\n", feet, meters);
}

void convertFootToCentimeter(void)
{
	double feet;
	double centimeters = 0;
	printf("How many feet are you converting to centimeters?\n");
	scanf("%lf", &feet);
	centimeters = feet * 30.48;
	printf("%lf feet is the same as %lf centimeters.\n", feet, centimeters);
}

void convertFootToMillimeter(void)
{
	double feet;
	double millimeters = 0;
	printf("How many feet are you converting to millimeters?\n");
	scanf("%lf", &feet);
	millimeters = feet * 304.8;
	printf("%lf feet is the same as %lf millimeters.\n", feet, millimeters);
}

void convertFootToMicrometer(void)
{
	double feet;
	double micrometers = 0;
	printf("How many feet are you converting to micrometers?\n");
	scanf("%lf", &feet);
	micrometers = feet * 304800;
	printf("%lf feet is the same as %lf mircometers.\n", feet, micrometers);
}

void convertFootToNanometer(void)
{
	double feet;
	double nanometers = 0;
	printf("How many feet are you converting to nanometers?\n");
	scanf("%lf", &feet);
	nanometers = feet * 304800000;
	printf("%lf feet is the same as %lf nanometers.\n", feet, nanometers);
}

void convertFootToMile(void)
{
	double feet;
	double miles = 0;
	printf("How many feet are you converting to miles?\n");
	scanf("%lf", &feet);
	miles = feet * 0.000189394;
	printf("%lf feet is the same as %lf miles.\n", feet, miles);
}

void convertFootToYard(void)
{
	double feet;
	double yards = 0;
	printf("How many feet are you converting to yards?\n");
	scanf("%lf", &feet);
	yards = feet * 0.333333;
	printf("%lf feet is the same as %lf yards.\n", feet, yards);
}

void convertFootToFoot(void)
{
	double feet;
	printf("How many feet are you converting to feet?\n");
	scanf("%lf", &feet);
	printf("%lf feet is the same as %lf feet.\n", feet, feet);
}

void convertFootToInch(void)
{
	double feet;
	double inches = 0;
	printf("How many feet are you converting to inches?\n");
	scanf("%lf", &feet);
	inches = feet * 12;
	printf("%lf feet is the same as %lf inches.\n", feet, inches);
}

void convertFootToNauticalMile(void)
{
	double feet;
	double nauticalMiles = 0;
	printf("How many feet are you converting to nautical miles?\n");
	scanf("%lf", &feet);
	nauticalMiles = feet * 0.000164579;
	printf("%lf feet is the same as %lf nautical miles.\n", feet, nauticalMiles);
}

//Convert from Inch

void convertInchToKilometer(void)
{
	double inches;
	double kilometers = 0;
	printf("How many inches are you converting to kilometers?\n");
	scanf("%lf", &inches);
	kilometers = inches * 1.60934;
	printf("%lf inches is the same as %lf kilometers.\n", inches, kilometers);
}

void convertInchToMeter(void)
{
	double inches;
	double meters;
	printf("How many inches are you converting to meters?\n");
	scanf("%lf", &inches);
	meters = inches * 1609.34;
	printf("%lf inches is the same as %lf meters.\n", inches, meters);
}

void convertInchToCentimeter(void)
{
	double inches;
	double centimeters = 0;
	printf("How many inches are you converting to centimeters?\n");
	scanf("%lf", &inches);
	centimeters = inches * 160934;
	printf("%lf inches is the same as %lf centimeters.\n", inches, centimeters);
}

void convertInchToMillimeter(void)
{
	double inches;
	double millimeters = 0;
	printf("How many inches are you converting to millimeters?\n");
	scanf("%lf", &inches);
	millimeters = inches * 1609000;
	printf("%lf inches is the same as %lf millimeters.\n", inches, millimeters);
}

void convertInchToMicrometer(void)
{
	double inches;
	double micrometers = 0;
	printf("How many inches are you converting to micrometers?\n");
	scanf("%lf", &inches);
	micrometers = inches * 1609000000;
	printf("%lf inches is the same as %lf mircometers.\n", inches, micrometers);
}

void convertInchToNanometer(void)
{
	double inches;
	double nanometers = 0;
	printf("How many inches are you converting to nanometers?\n");
	scanf("%lf", &inches);
	nanometers = inches * 1609000000000;
	printf("%lf inches is the same as %lf nanometers.\n", inches, nanometers);
}

void convertInchToMile(void)
{
	double inches;
	double miles = 0;
	printf("How many inches are you converting to miles?\n");
	scanf("%lf", &inches);
	miles = inches * 1;
	printf("%lf inches is the same as %lf miles.\n", inches, miles);
}

void convertInchToYard(void)
{
	double inches;
	double yards = 0;
	printf("How many inches are you converting to yards?\n");
	scanf("%lf", &inches);
	yards = inches * 1760;
	printf("%lf inches is the same as %lf yards.\n", inches, yards);
}

void convertInchToFoot(void)
{
	double inches;
	double feet = 0;
	printf("How many inches are you converting to feet?\n");
	scanf("%lf", &inches);
	feet = inches * 5280;
	printf("%lf inches is the same as %lf feet.\n", inches, feet);
}

void convertInchToInch(void)
{
	double inches;
	printf("How many inches are you converting to inches?\n");
	scanf("%lf", &inches);
	printf("%lf inches is the same as %lf inches.\n", inches, inches);
}

void convertInchToNauticalMile(void)
{
	double inches;
	double nauticalMiles = 0;
	printf("How many inches are you converting to nautical miles?\n");
	scanf("%lf", &inches);
	nauticalMiles = inches * 0.868976;
	printf("%lf inches is the same as %lf nautical miles.\n", inches, nauticalMiles);
}

//Convert from Nautical Mile

void convertNauticalMileToKilometer(void)
{
	double nauticalMiles;
	double kilometers = 0;
	printf("How many nautical miles are you converting to kilometers?\n");
	scanf("%lf", &nauticalMiles);
	kilometers = nauticalMiles * 1.852;
	printf("%lf nautical miles is the same as %lf kilometers.\n", nauticalMiles, kilometers);
}

void convertNauticalMileToMeter(void)
{
	double nauticalMiles;
	double meters;
	printf("How many nautical miles are you converting to meters?\n");
	scanf("%lf", &nauticalMiles);
	meters = nauticalMiles * 1852;
	printf("%lf nautical miles is the same as %lf meters.\n", nauticalMiles, meters);
}

void convertNauticalMileToCentimeter(void)
{
	double nauticalMiles;
	double centimeters = 0;
	printf("How many nautical miles are you converting to centimeters?\n");
	scanf("%lf", &nauticalMiles);
	centimeters = nauticalMiles * 185200;
	printf("%lf nautical miles is the same as %lf centimeters.\n", nauticalMiles, centimeters);
}

void convertNauticalMileToMillimeter(void)
{
	double nauticalMiles;
	double millimeters = 0;
	printf("How many nautical miles are you converting to millimeters?\n");
	scanf("%lf", &nauticalMiles);
	millimeters = nauticalMiles * 1852000;
	printf("%lf nautical miles is the same as %lf millimeters.\n", nauticalMiles, millimeters);
}

void convertNauticalMileToMicrometer(void)
{
	double nauticalMiles;
	double micrometers = 0;
	printf("How many nautical miles are you converting to micrometers?\n");
	scanf("%lf", &nauticalMiles);
	micrometers = nauticalMiles * 1852000000;
	printf("%lf nautical miles is the same as %lf mircometers.\n", nauticalMiles, micrometers);
}

void convertNauticalMileToNanometer(void)
{
	double nauticalMiles;
	double nanometers = 0;
	printf("How many nautical miles are you converting to nanometers?\n");
	scanf("%lf", &nauticalMiles);
	nanometers = nauticalMiles * 1852000000000;
	printf("%lf nautical miles is the same as %lf nanometers.\n", nauticalMiles, nanometers);
}

void convertNauticalMileToMile(void)
{
	double nauticalMiles;
	double miles = 0;
	printf("How many nautical miles are you converting to miles?\n");
	scanf("%lf", &nauticalMiles);
	miles = nauticalMiles * 1.15078;
	printf("%lf nautical miles is the same as %lf miles.\n", nauticalMiles, miles);
}

void convertNauticalMileToYard(void)
{
	double nauticalMiles;
	double yards = 0;
	printf("How many nautical miles are you converting to yards?\n");
	scanf("%lf", &nauticalMiles);
	yards = nauticalMiles * 2025.37;
	printf("%lf nautical miles is the same as %lf yards.\n", nauticalMiles, yards);
}

void convertNauticalMileToFoot(void)
{
	double nauticalMiles;
	double feet = 0;
	printf("How many miles are you converting to feet?\n");
	scanf("%lf", &nauticalMiles);
	feet = nauticalMiles * 6076.12;
	printf("%lf miles is the same as %lf feet.\n", nauticalMiles, feet);
}

void convertNauticalMileToInch(void)
{
	double nauticalMiles;
	double inches = 0;
	printf("How many nautical miles are you converting to inches?\n");
	scanf("%lf", &nauticalMiles);
	inches = nauticalMiles * 72913.4;
	printf("%lf nautical miles is the same as %lf inches.\n", nauticalMiles, inches);
}

void convertNauticalMileToNauticalMile(void)
{
	double nauticalMiles;
	printf("How many nautical miles are you converting to nautical miles?\n");
	scanf("%lf", &nauticalMiles);
	printf("%lf nautical miles is the same as %lf nautical miles.\n", nauticalMiles, nauticalMiles);
}

