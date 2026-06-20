import java.util.Random;

// Abstract base class
abstract class Compartment {
    public abstract String notice();
}

// First Class compartment
class FirstClass extends Compartment {
    @Override
    public String notice() {
        return "[FIRST CLASS] Reserved for First Class ticket holders only. " ;
    }
}

// Ladies compartment
class Ladies extends Compartment {
    @Override
    public String notice() {
        return "[LADIES COMPARTMENT] This compartment is reserved exclusively for female passengers. " +
               "Male passengers are strictly prohibited from entering. " ;
    }
}

// General compartment
class General extends Compartment {
    @Override
    public String notice() {
        return "[GENERAL COMPARTMENT] Open to all passengers. " +
               "No reservation required. " ;
    }
}

// Luggage compartment
class Luggage extends Compartment {
    @Override
    public String notice() {
        return "[LUGGAGE / PARCEL VAN] This compartment is designated for luggage, " +
               "parcels, and cargo only. Passengers are NOT permitted to travel here. " ;
    }
}

// Main test class
public class TestCompartment {
    public static void main(String[] args) {

        Compartment[] train = new Compartment[10];
        Random rand = new Random();

        // Assign a random compartment type (1–4) to each slot
        for (int i = 0; i < train.length; i++) {
            int type = rand.nextInt(4) + 1;
            switch (type) {
                case 1 -> train[i] = new FirstClass();
                case 2 -> train[i] = new Ladies();
                case 3 -> train[i] = new General();
                case 4 -> train[i] = new Luggage();
            }
        }

        // Polymorphic call to notice()
        System.out.println("=".repeat(65));
        System.out.println("       INDIAN RAILWAYS - TRAIN COMPARTMENT NOTICES");
        System.out.println("=".repeat(65));

        for (int i = 0; i < train.length; i++) {
            System.out.printf("%nCoach %2d | Type: %s%n", i + 1, train[i].getClass().getSimpleName());
            System.out.println("Notice  : " + train[i].notice());
        }
    }
}