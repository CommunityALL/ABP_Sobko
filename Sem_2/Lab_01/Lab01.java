import java.util.Scanner;
public class Lab01{
    public static void main (String[] args){
        Scanner console = new Scanner(System.in);

        System.out.println("Lab_01 var_08");

        System.out.println("What is part of lab_01 (1-5)?");
        int partOfLab = console.nextInt();
        if (partOfLab == 1){

            System.out.println("Lab_01.1\n");

            System.out.println("Enter x:");
            int intx = console.nextInt();
            System.out.println("Enter y:");
            int inty = console.nextInt();
            int cubexint = intx * intx * intx;
            int cubeyint = inty * inty * inty;
            double cubex = cubexint;
            double cubey = cubeyint;
            double arithmeticMean = (cubex + cubey) / 2;
            System.out.println("Arithmetic mean of cubes of numbers:\n" + arithmeticMean);
            int absx = Math.abs(intx);
            int absy = Math.abs(inty);
            int product = absx * absy;
            double geometricMean = Math.sqrt(product);
            System.out.println("Geometric mean modulus of numbers:\n" + geometricMean + "\n");
        }
        else if (partOfLab == 2){

            System.out.println("Lab_01.2\n");

            System.out.println("Enter ineger number from -999 to 999:");
            int integer = console.nextInt();
            if (Math.abs(integer) > 999){
                System.out.println("Incorrect input.");
            }
            else if (integer > 0){
                System.out.print("Positive ");
                if (Math.abs(integer) < 10){
                    System.out.print("single digit ");
                }
                else if (Math.abs(integer) >= 10 && integer < 100){
                    System.out.print("two-digit ");
                }
                else {
                    System.out.print("three-digit ");
                }
                System.out.println("number.");
            }
            else if (integer < 0){
                System.out.print("Negative ");
                if (Math.abs(integer) < 10){
                    System.out.print("single digit ");
                }
                else if (Math.abs(integer) >= 10 && integer < 100){
                    System.out.print("two-digit ");
                }
                else {
                    System.out.print("three-digit ");
                }
                System.out.println("number.");
            }
            else {
                System.out.println("Zero.");
            }
        }
        else if (partOfLab == 3){

            System.out.println("Lab_01.3\n");

            System.out.println("Enter n:");
            int n = console.nextInt();
            double seriesSum = 0;
            double seriesMember;
            int factorial = 1;
            int poweerOfTwo = 1;
            for(int i = 1; i <= n;){
                for(int counter = 1; counter <= i;){
                    factorial *= counter;
                    poweerOfTwo *= 2;
                    counter++;
                }
                if (i % 2 == 1){
                    seriesMember = factorial / poweerOfTwo;
                }
                else {
                    seriesMember = (i * poweerOfTwo) / factorial;
                }
                seriesSum += seriesMember;
                i++;
            }
            System.out.println("The sum of the terms of the series:\n" + seriesSum);
        }
        else if (partOfLab == 4){

            System.out.println("Lab_01.4");

            System.out.println("Enter the number of array elements:");
            int n = console.nextInt();
            int[] arr = new int [n];
            System.out.println("Fill an array with...\n1 - keyboard. \n2 - random numbers in a range from -100 to 100.");
            int input = console.nextInt();
            if (input == 1){
                System.out.println("Enter array elements:");
                for(int i = 0; i < n;){
                    arr[i] = console.nextInt();
                    i++;
                }
            }
            else if (input == 2){
                for(int i = 0; i < n;){
                    arr[i] = (int)(Math.random() * 201 - 100);
                    i++;
                }
            }
            else {
                System.out.println("Incorrect input.");
                System.exit(0);
            }
            System.out.println("Input:");
            for(int i = 0; i < n;){
                System.out.print(arr[i] + " ");
                i++;
            }
            System.out.print("\n");
            int[] arrTimes = new int [n];
            for(int i = 0; i < n;){
                int counterTimes = 0;
                for(int comparableI = 0; comparableI < n;){
                    if (arr[i] == arr[comparableI]) {
                        counterTimes++;
                    }
                    comparableI++;
                }
                arrTimes[i] = counterTimes;
                i++;
            }
            int maxTimes = 0;
            int numberMaxTimes = 0;
            for(int i = 0; i < n;){
                if (maxTimes < arrTimes[i]){
                    maxTimes = arrTimes[i];
                    numberMaxTimes = arr[i];
                }
                i++;
            }
            if (n == 1){
                maxTimes = 1;
                numberMaxTimes = arr[0];
            }
            System.out.println("The most common number in the array is:\n" + numberMaxTimes);
            System.out.println("(number of times is: " + maxTimes + ")");
        }
        else if (partOfLab == 5){

            System.out.println("Lab_01.5");

            System.out.println("Enter point coordinates:");
            int[][] arr = new int[5][2];
            char[] arrayLetters = {'A', 'B', 'C', 'D', 'E'};
            for(int m = 0; m < 5;){
                for(int n = 0; n < 2;){
                    char coordinate = 'x';
                    if (n == 1){
                        coordinate = 'y';
                    }
                    System.out.print(coordinate);
                    System.out.print(m + ": ");
                    arr[m][n] = console.nextInt();
                    System.out.println("(" + arrayLetters[m] + ")");
                    n++;
                }
                m++;
            }
            int numberOfPairs = 0;
            for(int i = 1; i < 5;){
                numberOfPairs += i;
                i++;
            }
            System.out.println(numberOfPairs);
            double[] arrayOfLengths = new double [numberOfPairs];
            char[][] arrayOfLengthsLetters = new char [numberOfPairs][2];
            int counter1 = 0;
            for(int m1 = 0; m1 < 4;){
                for(int m2 = m1 + 1; m2 < 5;){
                    int squarex = (arr[m1][0] - arr[m2][0]) * (arr[m1][0] - arr[m2][0]);
                    int squarey = (arr[m1][1] - arr[m2][1]) * (arr[m1][1] - arr[m2][1]);
                    int sum = squarex + squarey;
                    arrayOfLengths[counter1] = Math.sqrt(sum);
                    arrayOfLengthsLetters[counter1][0] = arrayLetters[m1];
                    arrayOfLengthsLetters[counter1][1] = arrayLetters[m2];
                    counter1++;
                    m2++;
                }
                m1++;
            }
            System.out.println(counter1);
            double maxLength = arrayOfLengths[0];
            char maxLengthLetter1 = 'A', maxLengthLetter2 = 'B';
            for(int i = 0; i < counter1 - 1;){
                if (arrayOfLengths[i] > maxLength){
                    maxLength = arrayOfLengths[i];
                    maxLengthLetter1 = arrayOfLengthsLetters[i][0];
                    maxLengthLetter2 = arrayOfLengthsLetters[i][1];
                }
                i++;
            }
            System.out.println("The greatest distance between points:\n" + maxLengthLetter1 + " and " + maxLengthLetter2);
            System.out.println("(distance: " + maxLength + ")");
        }
        else {
            System.out.println("Incorrect input.");
        }
    }
}