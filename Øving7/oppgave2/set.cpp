#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "set.hpp"

using namespace std;

Set::Set() : vect{} {}
Set::Set(vector<int> vector){
    vect = vector;
}


Set Set::operator+(int a){
 vect.emplace_back(a);
 return *this;
}

Set &Set::operator+=(const Set &sett){


    for(auto x : sett.vect){
        bool funnet = false;
        for(auto s : vect){
            if(x == s){
                funnet = true;

            }
        }
        if(!funnet){
            cout << x << endl;
            vect.emplace_back(x);
        }
    }
    return *this;
}

Set Set::operator=(const Set &set){
    vect = set.vect;
    return *this;
}

void Set::skrivUtMengde() {
    cout << "{";
    for(auto x : vect){
        cout << x << ",";
    }
    cout << "}" << endl;
}








