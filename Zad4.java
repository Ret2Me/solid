// Interfejs odpowiedzialny za drukowanie
interface Printer {
    void print(String document);
}

// Interfejs odpowiedzialny za skanowanie
interface Scanner {
    void scan(String document);
}

// Klasa implementująca oba interfejsy (drukowanie i skanowanie)
class MultiFunctionMachine implements Printer, Scanner {

    @Override
    public void print(String document) {
        System.out.println("Printing: " + document);
    }

    @Override
    public void scan(String document) {
        System.out.println("Scanning: " + document);
    }
}

public class Zad4 {
    public static void main(String[] args) {
        MultiFunctionMachine machine = new MultiFunctionMachine();
        
        // Testowanie funkcji maszyny
        machine.print("Wypracowanie");
        machine.scan("Dowod");
    }
}

