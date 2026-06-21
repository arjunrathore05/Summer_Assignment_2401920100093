import java.util.Random;

// Abstract class
abstract class Compartment {
    public abstract String notice();
}

// FirstClass compartment
class FirstClass extends Compartment {
    @Override
    public String notice() {
        return "First Class Compartment - Please maintain silence and comfort.";
    }
}

// Ladies compartment
class Ladies extends Compartment {
    @Override
    public String notice() {
        return "Ladies Compartment - Reserved for women passengers only.";
    }
}

// General compartment
class General extends Compartment {
    @Override
    public String notice() {
        return "General Compartment - Please cooperate with fellow passengers.";
    }
}

// Luggage compartment
class Luggage extends Compartment {
    @Override
    public String notice() {
        return "Luggage Compartment - Goods and luggage only.";
    }
}

// Test class
public class TestCompartment {
    public static void main(String[] args) {
        Compartment[] compartments = new Compartment[10];
        Random rand = new Random();

        // Create random compartments
        for (int i = 0; i < compartments.length; i++) {
            int choice = rand.nextInt(4) + 1; // Random number 1-4

            switch (choice) {
                case 1:
                    compartments[i] = new FirstClass();
                    break;
                case 2:
                    compartments[i] = new Ladies();
                    break;
                case 3:
                    compartments[i] = new General();
                    break;
                case 4:
                    compartments[i] = new Luggage();
                    break;
            }
        }

        // Demonstrate polymorphism
        System.out.println("Compartment Notices:");
        for (int i = 0; i < compartments.length; i++) {
            System.out.println("Compartment " + (i + 1) + ": "
                    + compartments[i].notice());
        }
    }
}
