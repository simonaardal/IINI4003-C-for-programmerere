#include <iostream>

using namespace std;

int main(){

    int a = 5;
    /*
    int &b; //en variabel må bli definert som kan holde på adressen til en variabel b.

    //For eksempel:
*/
    int b = 7;
    int *adresse_b = &b;

    int *c;
    c = &b;

/*
    *a = *b + *c; //*a og *b må være definerte som pekere. Bruker her navnene "adresse_a og adresse_b"
    // ettersom a og b allerede er definerte. 
*/
    int *adresse_a = &a;
   

    a = b + *c;

    //&b = 2; // kan ikke sette adressen til en variabel lik 2. Dersom man har en peker b, kan man sette 
    // det pekeren peker til lik 2.
    b = 2;

}