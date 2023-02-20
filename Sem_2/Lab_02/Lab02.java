import java.util.Scanner;
public class Lab02{
    public static void main(String[] args){
        Scanner console = new Scanner(System.in);

        System.out.println("Lab_02 var_08");

        class Equations{
            int a;
            int b;
            int c;
            int NumberOfRootsOfEquation(){
                int numberOfRoots;
                double D = b * b - 4 * a * c;
                if (D > 0){
                    numberOfRoots = 2;
                } else if (D == 0){
                    numberOfRoots = 1;
                } else {
                    numberOfRoots = 0;
                }
                return numberOfRoots;
            }
            double []EquationRoots12(int numberOfRoots){
                double []arr = new double [numberOfRoots];
                switch(numberOfRoots){
                    case 2:{
                        double D = b * b - 4 * a * c;
                        arr[0] = (0 - b + Math.sqrt(D)) / (2 * a);
                        arr[1] = (0 - b - Math.sqrt(D)) / (2 * a);
                        break;
                    }
                    case 1: {
                        arr[0] = (0 - b) / (2 * a);
                        break;
                    }
                }
                return arr;
            }
        }
        Equations equation = new Equations();
        System.out.println("Enter a:");
        equation.a = console.nextInt();
        System.out.println("Enter b:");
        equation.b = console.nextInt();
        System.out.println("Enter c:");
        equation.c = console.nextInt();
        System.out.println("Input:");
        System.out.println("(" + equation.a + ")x^2 + (" + equation.b + ")x + (" + equation.c + ") = 0;");
        System.out.println("Number of roots of the equation:");
        int numberOfRoots = equation.NumberOfRootsOfEquation();
        System.out.println(numberOfRoots);
        System.out.println("Equation roots:");
        double []arr = equation.EquationRoots12(numberOfRoots);
        String emptiness = "";
        if (numberOfRoots == 0){
            emptiness = "NULL";
        }
        switch (numberOfRoots) {
            case 2: {
                System.out.println(arr[0] + " and " + arr[1]);
                break;
            }
            case 1: {
                System.out.println(arr[0]);
                break;
            }
            case 0: {
                System.out.println(emptiness);
                break;
            }
        }
    }
}