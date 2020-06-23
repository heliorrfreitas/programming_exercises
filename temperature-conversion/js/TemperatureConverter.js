

const celsiusToFahrenheit = (temp) => ((9 / 5) * temp) + 32;

const fahrenheitToCelsius = (temp) => (temp - 32) * (5 / 9);

console.log(celsiusToFahrenheit(32));

export default {
    celsiusToFahrenheit,
    fahrenheitToCelsius
};