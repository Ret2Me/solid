#include <iostream>

// Interfejs rabatu
class Discount {
public:
    virtual double applyDiscount(double price) const = 0;
    virtual ~Discount() = default;
};

// Regularny rabat (10%)
class RegularDiscount : public Discount {
public:
    double applyDiscount(double price) const override {
        return price * 0.90;
    }
};

// Sezonowy rabat (20%)
class SeasonalDiscount : public Discount {
public:
    double applyDiscount(double price) const override {
        return price * 0.80;
    }
};

int main() {
    double originalPrice = 100.0;

    RegularDiscount regular;
	double price = regular.applyDiscount(originalPrice);
    std::cout << "Cena po rabacie: " << price << std::endl;

    SeasonalDiscount seasonal;
	price =  seasonal.applyDiscount(originalPrice);
    std::cout << "Cena po rabacie sezonowym: " <<  price << std::endl;

    return 0;
}

