#include <iostream>

using namespace std;

int main(){
    double number = 4;
    double *peker = &number;

    double &ref = number;

    *peker = 3; // 1
    ref = 9; // 2
    number = 19; // 3


}