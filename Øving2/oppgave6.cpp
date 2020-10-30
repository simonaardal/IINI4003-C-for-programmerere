#include <iostream>

using namespace std;

int find_sum(const int *table, int length){
    int sum = 0;
    for(int i = 0; i < length; i++){
        sum += table[i];
    }
    return sum;
}

int main(){
    
    int elements[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

    int sum = find_sum(elements, 10);
    cout << "De 10 første: " << sum << endl;
    sum = find_sum(&elements[10], 5);
    cout << "De 5 neste: " << sum << endl;
    sum = find_sum(&elements[15], 5);
    cout << "De 5 siste: " << sum << endl;

}