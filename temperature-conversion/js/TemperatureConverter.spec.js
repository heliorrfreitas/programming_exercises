import {fahrenheitToCelsius, celsiusToFahrenheit} from './TemperatureConverter'

describe('Fahrenheit to Celcius', () => {
    test('should return zero', () => {
        expect(fahrenheitToCelsius(32).toEqual(0))
    })
})
