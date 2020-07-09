package unittest;

import static org.junit.jupiter.api.Assertions.assertEquals;
import org.junit.jupiter.api.Test;
import temperatureconverter.TemperatureConverter;

class TemperatureConverterTest {

	@Test
	void testConversionFromCelsiusToFahrenheit() {
		double result = TemperatureConverter.convertCelsiusToFahrenheit(0);
		assertEquals(32, result);
	}

	@Test
	void testConversionFromFahrenheitToCelsius() {
		double result = TemperatureConverter.converterFahrenheitToCelsius(32);
		assertEquals(0, result);
	}
	
}
