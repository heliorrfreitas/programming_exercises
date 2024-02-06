package tempconverter

import (
	"testing"
)

func TestConversionCToF(t *testing.T) {
  var actual = CelsiusToFahrenheit(0)
	if actual != 32 {
		t.Errorf("fail converting from Celsius to Fahrenheit")
	}
}

func TestConversionFToC(t *testing.T) {
	var actual = FahrenheitToCelsius(32)
	if actual != 0 {
		t.Errorf("fail converting from Fahrenheit to Celsius")
	}
}

