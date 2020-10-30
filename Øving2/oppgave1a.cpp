#include <iostream>

using namespace std;

int main(){
    int i = 3;
    int j = 5; 
    int *p = &i;
    int *q = &j;

    cout << "Adresser:\n" << endl;
    cout << "i: " << &i << ", j: " << &j << ", *p: " << &p << ", *q: " << &q << "\n" << endl;

    cout << "Verdier:\n" << endl;
    cout << "i: " << i << ", j: " << j << ", *p: " << p << ", *q: " << q << "\n" << endl;

}