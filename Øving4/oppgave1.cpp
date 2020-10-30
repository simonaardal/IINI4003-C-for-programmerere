#include <iostream>
#include <vector> 
#include <algorithm>

using namespace std;

int main(){
    vector<double> numbers = {1,2,3,4,5};

    cout << "Første element: " << numbers.front() << endl;
    cout << "Siste element: " << numbers.back() << endl;

    numbers.emplace(numbers.begin() + 1, 3304);

    for(auto &x : numbers){
        cout << x << endl;
    }

    auto it = std::find(numbers.begin(), numbers.end(), 9);
    if(it==numbers.end()){
        cout << "tall ikke funnet.";
    }else{
        cout << "tall funnet!";
    }

}