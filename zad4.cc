#include <iostream>
#include <string>

// Interfejs odpowiedzialny za drukowanie
class Printer {
public:
    virtual void print(const std::string& document) = 0;
};

// Interfejs odpowiedzialny za skanowanie
class Scanner {
public:
    virtual void scan(const std::string& document) = 0;
};

// Klasa implementująca oba interfejsy (drukowanie i skanowanie)
class MultiFunctionMachine : public Printer, public Scanner {
public:
    void print(const std::string& document) override {
        std::cout << "Printing: " << document << std::endl;
    }

    void scan(const std::string& document) override {
        std::cout << "Scanning: " << document << std::endl;
    }
};

int main() {
    MultiFunctionMachine machine;
    
    // Testowanie funkcji maszyny
    machine.print("Wypracowanie");
    machine.scan("Dowod");

    return 0;
}

