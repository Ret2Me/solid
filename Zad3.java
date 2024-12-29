// Klasa Rectangle
class Rectangle {
    protected double width;
    protected double height;

    public void setWidth(double width) {
        this.width = width;
    }

    public void setHeight(double height) {
        this.height = height;
    }

    public double getArea() {
        return height * width;
    }
}

// Klasa Square, dziedziczy po Rectangle i przestrzega LSP
class Square extends Rectangle {
    @Override
    public void setWidth(double width) {
        super.setHeight(width);
        super.setWidth(width);
    }

    @Override
    public void setHeight(double height) {
        super.setHeight(height);
        super.setWidth(height);
    }
}

public class Zad3 {
    public static void main(String[] args) {
        Rectangle rect = new Rectangle();
        rect.setWidth(5);
        rect.setHeight(10);
        System.out.println("Prostokąt: " + rect.getArea());

        Rectangle square = new Square();
        square.setWidth(5);
        System.out.println("Kwadrat: " + square.getArea());
    }
}

