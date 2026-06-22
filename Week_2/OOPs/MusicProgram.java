//  Playable interface + Veena + Saxophone + Test

// -- package music --
interface Playable {
    void play();
}
class Veena implements Playable {
    @Override
    public void play() {
        System.out.println("Veena is playing a classical raaga...");
    }
}
class Saxophone implements Playable {
    @Override
    public void play() {
        System.out.println("Saxophone is playing a smooth jazz tune...");
    }
}

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

        instrument = new Veena();       
        instrument.play();              

        instrument = new Saxophone();  
        instrument.play();             

        System.out.println("\n == Program Ends == ");
    }
}
