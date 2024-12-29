#include <iostream>

// Klasa Rectangle
class Rectangle {
protected:
    double width;
    double height;

public:
    virtual void setWidth(double w) { this->width = w; }
    virtual void setHeight(double h) { this->height = h; }
    double getArea() const { return this->width * this->height; }
};


// Klasa Square, dziedziczy po Rectangle i przestrzega LSP
class Square : public Rectangle {
public:
    void setWidth(double width) override {
        this->width = this->height = width;
    }
    void setHeight(double height) override {
        this->height = this->width = height;
    }
};

int main() {
    Rectangle rect;
    rect.setWidth(5);
    rect.setHeight(10);
    std::cout << "Prostokąt: " << rect.getArea() << std::endl;

    Rectangle* square = new Square();
    square->setWidth(5);
    std::cout << "Kwadrat: " << square->getArea() << std::endl;

    delete square;
    return 0;
}

