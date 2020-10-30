#include <iostream>

using namespace std;

int main(){

    int under = 0;
    int mellom = 0;
    int over = 0;

    string tempLest = "";

    const int length = 5;

    cout << "Du skal skrive inn " << length << " temperaturer.";

    for(int i = 0; i < length; i++){
        cin >> tempLest;
        cout << "Temperatur nr " << (i+1) << ": " << tempLest << endl;;
        double temp = std::stod(tempLest);
        if(temp < 10){
            under++;
        }else if(temp >= 10 && temp <= 20){
            mellom++;
        }else{
            over++;
        }

    }

    cout << "Antall under: " << under << endl;
    cout << "Antall mellom: " << mellom << endl; 
    cout << "Antall over: " << over << endl;

}