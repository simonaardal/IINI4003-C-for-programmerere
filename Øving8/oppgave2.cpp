#include <iostream>
#include <vector>

using namespace std;

template<typename Type, typename Type2>
class Par{
public:
    Type a, b;

    Par(Type a, Type b) : a(a), b(b) {}

    Par operator+(const Par &etPar){
        Par par = *this;
        par.a += etPar.a;
        par.b += etPar.b;
        return par;
    }

    bool operator>(const Par &etPar){
        Par p = *this;
        if((p.a + p.b) > (etPar.a + etPar.b)){
            return true;
        }else{
            return false;
        }
    }

    friend ostream &operator<<(ostream &os, const Par &par) {
        return os << "(" << par.a << ", " << par.b << ")" << endl;
    }

};

int main(){
    /*
    double d1 = 2.3;
    double d2 = 51.4;

    double d3 = 8.5;
    double d4 = 9.4;

    Par<double> par1(d1, d2);
    Par<double> par2(d3, d4);

    cout << "Summen av par1 og par2: " << (par1 + par2) << endl;
    if(par1 > par2){
        cout << "Par1 er størst." << endl;
    }else{
        cout << "Par2 er størst." << endl;
    }
    */

    Par<double, int> p1(3.5, 14);
    Par<double, int> p2(2.1, 7);
    cout << "p1: " << p1.a << ", " << p1.b << endl;
    cout << "p2: " << p2.a << ", " << p2.b << endl;

    if (p1 > p2)
        cout << "p1 er størst" << endl;
    else
        cout << "p2 er størst" << endl;

    auto sum = p1 + p2;
    cout << "Sum: " << sum.a << ", " << sum.b << endl;

}