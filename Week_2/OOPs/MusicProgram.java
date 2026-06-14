//  Playable interface + Veena + Saxophone + Test

// -- package music --
interface Playable {
    void play();
}

// -- package music.string -- 
class Veena implements Playable {
    @Override
    public void play() {
        System.out.println("Veena is playing a classical raaga...");
    }
}

// -- package music.wind -- 
class Saxophone implements Playable {
    @Override
    public void play() {
        System.out.println("Saxophone is playing a smooth jazz tune...");
    }
}

// -- package live -- 
public class MusicProgram {               

    public static void main(String[] args) {

        System.out.println(" == OOP Music Program == \n");

        // (a) Create an instance of Veena and call play()
        System.out.println("==> (a) Veena instance ");
        Veena veena = new Veena();
        veena.play();

        // (b) Create an instance of Saxophone and call play()
        System.out.println("\n==> (b) Saxophone instance -->");
        Saxophone saxophone = new Saxophone();
        saxophone.play();

        // (c) Store in Playable reference and call play() 
        System.out.println("\n==> (c) Playable reference");

        Playable instrument;

        instrument = new Veena();       // Playable ref -> Veena object
        instrument.play();              // calls Veena's play()

        instrument = new Saxophone();   // same ref -> Saxophone object
        instrument.play();              // calls Saxophone's play()

        System.out.println("\n == Program Ends == ");
    }
}
