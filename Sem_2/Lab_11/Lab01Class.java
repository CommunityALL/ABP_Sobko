package Sem_2.Lab_11;


public class Lab01Class {
        public static double[] part1(int intx, int inty){
                System.out.println("Lab_01.1 var_8");

                System.out.println("x:\n" + intx);
                System.out.println("y:\n" + inty);
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
                return new double[] {arithmeticMean, geometricMean};
        }

        public static String part2(int integer){
                System.out.println("Lab_01.2 var_8");

                String result = "";
                if (Math.abs(integer) > 999){
                        result += "Incorrect input.";
                }
                else if (integer > 0){
                        result += "Positive ";
                        if (Math.abs(integer) < 10){
                                result += "single digit ";
                        }
                        else if (integer >= 10 && integer < 100){
                                result += "two-digit ";
                        }
                        else {
                                result += "three-digit ";
                        }
                        result += "number.";
                }
                else if (integer < 0){
                        result += "Negative ";
                        if (Math.abs(integer) < 10){
                                result += "single digit ";
                        }
                        else if (Math.abs(integer) >= 10 && Math.abs(integer) < 100){
                                result += "two-digit ";
                        }
                        else {
                                result += "three-digit ";
                        }
                        result += "number.";
                }
                else {
                        result += "Zero.";
                }
                System.out.println(result);
                return result;
        }

        public static double part3(int n){
                System.out.println("Lab_01.3 var_8");

                System.out.println("n:\n" + n);
                if (n <= 8 && n >= 0) {
                        double seriesSum = 0;
                        double seriesMember;
                        int factorial = 1;
                        int poweerOfTwo = 1;
                        for (int i = 1; i <= n; ) {
                                for (int counter = 1; counter <= i; ) {
                                        factorial *= counter;
                                        poweerOfTwo *= 2;
                                        counter++;
                                }
                                if (i % 2 == 1) {
                                        seriesMember = factorial / poweerOfTwo;
                                } else {
                                        seriesMember = (i * poweerOfTwo) / factorial;
                                }
                                seriesSum += seriesMember;
                                i++;
                        }
                        System.out.println("The sum of the terms of the series:\n" + seriesSum);
                        return seriesSum;
                }
                else {
                        System.out.println("Error.");
                }
                return 0;
        }

        public static int[] part4(int n){
                System.out.println("Lab_01.4 var_8");

                System.out.println("The number of array elements:\n" + n);
                int[] arr = new int [n];
                System.out.println("Fill an array with random numbers in a range from -100 to 100.");
                for(int i = 0; i < n;){
                        arr[i] = (i * 4658) % 201 - 100;
                        i++;
                }
                System.out.println("Input:");
                for(int i = 0; i < n; i++){
                        System.out.print(arr[i] + " ");
                        if (i % 30 == 29){
                                System.out.println();
                        }
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
                return new int[] {numberMaxTimes, maxTimes};
        }

        public static String[] part5(int[] x, int[] y){
                System.out.println("Lab_01.5 var_8");

                System.out.println("Point coordinates:");
                int[][] arr = new int[5][2];
                char[] arrayLetters = {'A', 'B', 'C', 'D', 'E'};
                for(int m = 0; m < 5;){
                        for(int n = 0; n < 2;){
                                char coordinate = '1';
                                if (n == 0) {
                                        coordinate = 'x';
                                        arr[m][n] = x[m];
                                }
                                if (n == 1){
                                        coordinate = 'y';
                                        arr[m][n] = y[m];
                                }
                                System.out.print(coordinate);
                                System.out.print(m + ": ");
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
                return new String[] {Character.toString(maxLengthLetter1), Character.toString(maxLengthLetter2), Double.toString(maxLength)};
        }
}