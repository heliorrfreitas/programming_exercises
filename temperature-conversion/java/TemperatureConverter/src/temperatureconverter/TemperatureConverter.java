package temperatureconverter;

public class TemperatureConverter {

	public static double convertCelsiusToFahrenheit(double temp) { 
		return ((9 / 5) * temp) + 32;
	}

	public static double converterFahrenheitToCelsius(double temp) {		
		return (temp - 32) * (5 / 9);
	}

	
	
}
