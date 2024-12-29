// Interfejs rabatu
interface Discount {
    double applyDiscount(double price);
}

// Regularny rabat (10%)
class RegularDiscount implements Discount {
    public double applyDiscount(double price) {
        return price * 0.90;
    }
}

// Sezonowy rabat (20%)
class SeasonalDiscount implements Discount {
    public double applyDiscount(double price) {
        return price * 0.80;
    }
}

public class Zad2{
    public static void main(String[] args) {
        double originalPrice = 100.0;

        Discount regular = new RegularDiscount();
		double price = regular.applyDiscount(originalPrice);
        System.out.println("Cena po rabacie: " + price);


        Discount seasonal = new SeasonalDiscount();
		price = seasonal.applyDiscount(originalPrice);
        System.out.println("Cena po rabacie sezonowym: " + price);
    }
}

