#include <iostream>

using namespace std; 

const double pi = 3.141592;

class Circle{
    public: 
        Circle(double radius_);
        int get_area() const;
        double get_circumference() const; 
    private:
        double radius;
};

Circle::Circle(double radius_) : radius(radius_) {}

int Circle::get_area() const{
    return pi * radius * radius;
}

double Circle::get_circumference() const{
    return 2.0 * pi * radius;
}

int main(){

    // OPPGAVE 2

    Circle c(3.0);

    double area = c.get_area();
    double circumference = c.get_circumference();

    cout << "Sirkelen har et areal på " << area << " cm² og omkrets på " << circumference << " cm." << endl;


}