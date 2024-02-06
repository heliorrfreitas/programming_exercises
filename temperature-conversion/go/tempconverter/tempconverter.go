package tempconverter

func CelsiusToFahrenheit(temp int) float32{
        return ((9.0/5.0) * float32(temp)) + 32.0
}

func FahrenheitToCelsius(temp int) float32{
        return (5.0/9.0) * (float32(temp) - 32.0)
}
