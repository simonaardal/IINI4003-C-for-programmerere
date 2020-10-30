#pragma once
#include <vector>

using namespace std;

class Set{
public:
    vector<int> vect;

    Set();
    Set(vector<int> vector);
    Set &operator+=(Set &other);
    Set operator+(int a);
    void skrivUtMengde();
    Set operator=(const Set &set);
    Set &operator+=(const Set &set);

};