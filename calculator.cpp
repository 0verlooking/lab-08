#include<iostream>

class Rectangle
{
private:
    double width, height;

public:
    Rectangle(double w = 1.0, double h = 1.0) : width(w), height(h) {}
    
    // Отримання значень висоти та ширини
    double getWidth() const { return width; }
    double getHeight() const { return height; }

    // Встановлення значень висоти та ширини
    void setWidth(double w) { width = w; }
    void setHeight(double h) { height = h; }

    // Перевантаження оператора () для обчислення площі прямокутника
    double operator()() const {
        return width * height;
    }
};

int main()
{
    Rectangle rect(4.0, 5.0);
    std::cout << "Area: " << rect() << std::endl;
    
    return 0;
}