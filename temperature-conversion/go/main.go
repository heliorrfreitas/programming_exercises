package main

import "fmt"

func main(){
	var option string 
	
	for option != "3" {
		option = "-1"
		fmt.Print("\n\nTemperature converter\n\n")
		fmt.Println("Enter one of the options below then press enter:")
		fmt.Println("Enter 1 to convert from Celsius to Fahrenheit")
		fmt.Println("Enter 2 to convert from  Fahrenheit to Celsius")
		fmt.Println("Enter 3 to exit")
	
		n, nErr := fmt.Scanln(&option)
		
		if nErr != nil {
			fmt.Println(n, nErr)
		}

		if (option == "3") {
			fmt.Println("Bye")	
			break
		}

		if option != "1" && option != "2" {
			fmt.Println("Option not recognized, please select from the following options")
			continue
		}

		fmt.Println("enter the temperature you want to convert then press enter")
		var temperature int
		t, tErr := fmt.Scanln(&temperature)
		
		if tErr != nil {
			fmt.Println(t, tErr)
		} 

		if (option == "1" ){
			result := celsiusToFahrenheit(temperature);
			fmt.Println("RESULT:", temperature, "degrees celsius is equals to", result, "degrees fahrenheit")
		} else if (option == "2") {
			result :=  fahrenheitToCelsius(temperature)
			fmt.Println("RESULT: ", temperature, "degrees fahrenheit is equals to", result, "degrees celsius")
		}
		
		fmt.Print("Press enter to continue...")
		fmt.Scanln()
	}
}

func celsiusToFahrenheit(temp int) float32{
	return ((9.0/5.0) * float32(temp)) + 32.0 
}

func fahrenheitToCelsius(temp int) float32{
	return (5.0/9.0) * (float32(temp) - 32.0)
}

