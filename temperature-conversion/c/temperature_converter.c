/*
	In this software we can convert from celsius to fahrenheit and vice versa. 
*/

#include <stdio.h>
#include <string.h>

#define FROM_CELSIUS 1
#define FROM_FAHRENHEIT 2

float celsius_to_fahrenheit(float temp){
	return ((9.0 / 5.0) * temp) + 32;	
}

float fahrenheit_to_celsius(float temp){
	return (temp - 32) * (5.0 / 9.0);
}

int is_celsius(int temp_scale){
	return temp_scale == FROM_CELSIUS ? 1 : 0;
}

int is_fahrenheit(int temp_scale){
	return temp_scale == FROM_FAHRENHEIT ? 1 : 0;
}

int main(){
	int option = FROM_CELSIUS;
	float temp = 0.0;
	float converted_temp = 0.0;
	char unit_from[2] = "";
	char unit_to[2] = "";

	while(is_celsius(option) || is_fahrenheit(option)){

		printf("Hello, enter the number of one of the options below:\n1 - Convert from Celsius to Fahrenheit\n2 - Convert from Fahrenheit to Celsius\n Or any other NUMBER to quit application\nEnter you option now: ");

		scanf("%i", &option);

		if(is_celsius(option) || is_fahrenheit(option)){
				printf("\nEnter the temperature: ");
				scanf("%f", &temp);		

				converted_temp = is_celsius(option) ? celsius_to_fahrenheit(temp) : fahrenheit_to_celsius(temp);

				is_celsius(option) ? strcpy(unit_from, "C") : strcpy(unit_from, "F");
				is_celsius(option) ? strcpy(unit_to, "F") : strcpy(unit_to, "C");

				printf("\nResult: %3.1f %s = %3.1f %s\n\n", temp, unit_from, converted_temp, unit_to);
		}

	}

	return 0;
}

