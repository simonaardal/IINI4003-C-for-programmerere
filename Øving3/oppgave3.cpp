#include <iostream> 
#include <string>

using namespace std;

const double sales_tax = 0.25;

class Commodity{
    string name;
    int id;
    double price;

    public:
        Commodity(const string &name_, int id_, double price_);
        const string &get_name() const;
        int get_id() const;
        double get_price(double amount) const;
        void set_price(double new_price);
        double get_price_with_sales_tax(double amount); 
};

Commodity::Commodity(const string &name_, int id_, double price_) : name(name_), id(id_), price(price_) {}

const string &Commodity::get_name() const{
    return name;
}

int Commodity::get_id() const{
    return id;
}

double Commodity::get_price(double amount) const{
    return price * amount;
}

void Commodity::set_price(double new_price){
    price = new_price;
}

double Commodity::get_price_with_sales_tax(double amount){
    return (price + (price*sales_tax)) * amount;
}


int main() {
  const double quantity = 2.5;
  Commodity commodity("Norvegia", 123, 73.50);

  cout << "Varenavn: " << commodity.get_name() << ", varenr: " << commodity.get_id() << " Pris pr enhet: " << commodity.get_price(1) << endl;

  cout << "Kilopris: " << commodity.get_price(1) << endl;
  cout << "Prisen for " << quantity << " kg er " << commodity.get_price(quantity) << " uten moms" << endl;
  cout << "Prisen for " << quantity << " kg er " << commodity.get_price_with_sales_tax(quantity) << " med moms" << endl;

  commodity.set_price(79.60);
  cout << "Ny kilopris: " << commodity.get_price(1) << endl;
  cout << "Prisen for " << quantity << " kg er " << commodity.get_price(quantity) << " uten moms" << endl;
  cout << "Prisen for " << quantity << " kg er " << commodity.get_price_with_sales_tax(quantity) << " med moms" << endl;
}