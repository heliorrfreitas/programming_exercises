package stats;

import java.text.DecimalFormat;
import java.text.NumberFormat;
import java.util.Arrays;
import java.util.Scanner;


public class Stats {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int numberOfElements = scan.nextInt();
        int numbers[] = new int[numberOfElements];

        for(int i = 0; i < numberOfElements; i++){
            numbers[i] = scan.nextInt();            
        }

        NumberFormat formatter = new DecimalFormat("#0.0");

        System.out.println("Mean: " + formatter.format(mean(numbers)));
        System.out.println("Median: " + formatter.format(median(numbers)));
        System.out.println("Mode: " + mode(numbers));

        scan.close();


    }

    public static double mean(int[] numbers){
        double result = 0;

        for(int i = 0; i < numbers.length; i++){
            result += numbers[i];
        }

        return result / numbers.length;
    }

    public static double median(int[] numbers){
        Arrays.sort(numbers);
        int numberOfElements = numbers.length;
        int indexHalf = numberOfElements / 2;
        double result = (numbers[indexHalf - 1] + numbers[indexHalf]) / 2.0;
        
        return result;
    }

    public static int mode(int[] numbers){        
        int index = 0;        
        int maxCount = 0;
        int count = 0;

        for(int i = 0; i < numbers.length; i++){
            for(int j = 0; j < numbers.length -1; j++){
                if(numbers[i] == numbers[j]){
                    count += 1;
                }
            }

            if(maxCount < count){
                index = i;
                maxCount = count;
            }

            count = 0;
        }
        
        return numbers[index];
    }
    


	
	
}
