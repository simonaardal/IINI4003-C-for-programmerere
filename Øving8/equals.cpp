#include <iostream>
#include <vector>

using namespace std;



template<typename Type> bool equals(Type &a, Type &b){
    cout << "Bruker generell utgave." << endl;
    if(a==b){
        return true;
    }else{
        return false;
    }
}

template<>
bool equals(double &a, double &b){
    cout << "Bruker double-utgaven." << endl;
    double TOLERANSE = 0.00001;

    if(a > b){
        if((a - b) > TOLERANSE){
            return false;
        }else{
            return true;
        }
    }else{
        if((b - a) > TOLERANSE){
            return false;
        }else{
            return true;
        }
    }
}


int main(){
    int a = 3;
    int b = 2;

    double d1 = 2.3;
    double d2 = 2.3;

    if(equals(d1, d2)){
        cout << "Tallene er like." << endl;
    }else{
        cout << "Tallene er ikke like.." << endl;
    }

    if(equals(a, b)){
        cout << "Tallene er like" << endl;
    }else{
        cout << "Tallene er ikke like.." << endl;
    }
}
