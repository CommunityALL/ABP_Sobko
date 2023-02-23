import java.util.Scanner;
public class Lab03 {
    public static void main(String[] args) {
        Lab03 programm = new Lab03();
        programm.start();
    }
    public void start(){
        Scanner console = new Scanner(System.in);

        System.out.println("Lab_03 var_08");

        System.out.println("Mashine class element:");
        Mashine car = new Mashine();
        car.InputSpeed();
        car.InputWeight();
        car.InputNumberOfPassengers();
        car.InputNumberOfWheels();
        car.NameOutput();
        System.out.println("Tractor class element:");
        Tractor tractor = new Tractor();
        tractor.InputSpeed();
        tractor.InputWeight();
        tractor.InputNumberOfPassengers();
        System.out.println("WheeledTractor class element:");
        WheeledTractor wheeledTractor = new WheeledTractor();
        wheeledTractor.InputSpeed();
        wheeledTractor.InputWeight();
        wheeledTractor.InputNumberOfPassengers();
        wheeledTractor.InputNumberOfWheels();
        wheeledTractor.NameOutput();
        System.out.println("CaterpillarTractor class element:");
        CaterpillarTractor caterpillarTractor = new CaterpillarTractor();
        caterpillarTractor.InputSpeed();
        caterpillarTractor.InputWeight();
        caterpillarTractor.InputNumberOfPassengers();
        caterpillarTractor.InputNumberOfWheels();
        caterpillarTractor.NameOutput();
    }
    interface Run{
        Scanner console = new Scanner(System.in);
        void NameOutput();
        double InputSpeed();
        double InputWeight();
        int InputNumberOfPassengers();
        int InputNumberOfWheels();
    }
    class Mashine implements Run{
        Scanner console = new Scanner(System.in);
        final double maxSpeed = 300000000;
        final double minSpeed = 0;
        final int minNumberOfPassengers = 0;
        String name;
        double speed;
        public Mashine(){
            System.out.println("Enter vehicle name:");
            name = console.nextLine();
            System.out.println("Enter vehicle speed:");
            speed = console.nextInt();
        }
        public void NameOutput(){
            System.out.println("Vehicle name:\n" + name);
        }
        public double InputSpeed(){
            System.out.println("Enter speed of vehicle:");
            double speed = console.nextDouble();
            return speed;
        }
        public double InputWeight(){
            System.out.println("Enter weight of vehicle:");
            double weight = console.nextDouble();
            return weight;
        }
        public int InputNumberOfPassengers(){
            System.out.println("Enter number of passengers of vehicle:");
            int numberOfPassengers = console.nextInt();
            return numberOfPassengers;
        }
        public int InputNumberOfWheels(){
            System.out.println("Enter number of wheels of vehicle:");
            int numberOfWheels = console.nextInt();
            return numberOfWheels;
        }
    }
    class Tractor{
        Scanner console = new Scanner(System.in);
        final double maxSpeed = 300000000;
        final double minSpeed = 0;
        final int minNumberOfPassengers = 0;
        String name;
        Tractor(){
            System.out.println("Enter tractor name:");
            name = console.nextLine();
        }
        public double InputSpeed(){
            System.out.println("Enter speed of tractor:");
            double speed = console.nextDouble();
            return speed;
        }
        public double InputWeight(){
            System.out.println("Enter weight of tractor:");
            double weight = console.nextDouble();
            return weight;
        }
        public int InputNumberOfPassengers(){
            System.out.println("Enter number of passengers of tractor:");
            int numberOfPassengers = console.nextInt();
            return numberOfPassengers;
        }
    }
    class WheeledTractor extends Tractor{
        Scanner console = new Scanner(System.in);
        public WheeledTractor(){
            super();
        }
        public int InputNumberOfWheels(){
            System.out.println("Enter number of wheels of vehicle:");
            int numberOfWheels = console.nextInt();
            return numberOfWheels;
        }
        public void NameOutput(){
            System.out.println("Tractor name:\n" + name);
        }
    }
    class CaterpillarTractor extends Tractor{
        Scanner console = new Scanner(System.in);
        public CaterpillarTractor(){
            super();
        }
        public int InputNumberOfWheels(){
            System.out.println("Enter number of wheels of vehicle:");
            int numberOfWheels = console.nextInt();
            return numberOfWheels;
        }
        public void NameOutput(){
            System.out.println("Tractor name:\n" + name);
        }
    }
}