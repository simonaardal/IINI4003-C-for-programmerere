#include <iostream>

using namespace std;

int main(){
    int i = 3;
    int j = 5; 
    int *p = &i;
    int *q = &j;

    *p = 7;
    cout << i << endl;
    *q += 4;
    cout << j << endl;
    *q = *p + 1;
    cout << j << endl;
    p = q;
    cout << *p << " " << *q << endl;
}
