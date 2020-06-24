import {celsiusToFahrenheit, fahrenheitToCelsius } from './TemperatureConverter';

describe('Fahrenheit to Celcius', () => {
    test('should return zero', () => {
        expect(fahrenheitToCelsius(32)).toEqual(0)
    })
})


describe('Celcius to Fahrenheit', () => {
    test('should return 32', () => {
        expect(celsiusToFahrenheit(0)).toEqual(32)
    })
})
