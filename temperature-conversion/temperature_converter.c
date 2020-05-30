#include <stdio.h>

float celsius_to_fahrenheit(float temp){
	return ((9.0 / 5.0) * temp) + 32;	
}

float fahrenheit_to_celsius(float temp){
	return (temp - 32) * (5.0 / 9.0);
}

int main(){
	float celsius_temp = 0.0;
	float fahrenheit_temp = 0.0;
	float c = 0.0;

	printf("Enter the temperature in Celsius to convert to Fahrenheit: ");
	scanf("%f", &celsius_temp);
	
	fahrenheit_temp = celsius_to_fahrenheit(celsius_temp);	
	c = fahrenheit_to_celsius(fahrenheit_temp);
	printf("\n %5.1f in Celsius is equal to %5.1f Fahrenheit, and back to c %5.1f  \n", celsius_temp, fahrenheit_temp, c);

	
	return 0;
}


