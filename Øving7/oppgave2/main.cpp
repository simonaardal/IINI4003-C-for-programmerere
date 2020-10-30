#include "set.hpp"

int main(){
    Set s1;
    s1 + 1;
    s1.skrivUtMengde();

    vector<int> vec2 = {1,2,3};
    vector<int> vec3 = {2,3,6,4};
    const Set s3(vec3);
    Set s2(vec2);
    s2.skrivUtMengde();
    s1 = s2;
    s1.skrivUtMengde();
    s2 += s3;
    s2.skrivUtMengde();
}