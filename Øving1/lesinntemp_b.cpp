#include <fstream>
#include <iostream>

using namespace std;

void read_temperatures(double temperatures[], int length);

int main(){

    int length = 10;
    double temperatures[length];

    read_temperatures(temperatures, length);

    int under = 0;
    int mellom = 0; 
    int over = 0;

    for(int i = 0; i < length; i++){
        double temp = temperatures[i];
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

void read_temperatures(double temperatures[], int length){

    int indeks = 0;

    const char filename[] = "data.dat";
    std::ifstream file;
    file.open(filename);
    if(!file){
        cout <<"Feil ved åpning av innfil." << endl;
        exit(EXIT_FAILURE);
    }

    int number = 0;

    while(file >> number){
        if(indeks < length){
            temperatures[indeks] = number;
            indeks++;
        }
    }

    file.close();

    for(int i = 0; i < indeks; i++){
        
        cout << "Tall " << (i+1) << ": " << temperatures[i] << endl;

    }
}