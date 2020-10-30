#include <iostream>
#include <string>

using namespace std;

int main(){
    string word1;
    string word2;
    string word3;

    cin >> word1;
    cin >> word2;
    cin >> word3;

    string sentence = word1 + " " + word2 + " " + word3 + ".";
    cout << "sentence: " << sentence << endl;

    cout << "Lengde til ord 1: " << word1.length() << endl;
    cout << "Lengde til ord 2: " << word2.length() << endl;
    cout << "Lengde til ord 3: " << word3.length() << endl;

    cout << "Lengde til setning: " << sentence.length() << endl;

    string sentence2 = sentence;
    for(int i = 0; i < sentence2.length(); i++){
        if(i == 9 || i == 11){
            sentence2[i] = 'x';
        }
    }

    cout << "sentence: " << sentence << endl;
    cout << "sentence 2: " << sentence2 << endl;

    char temp[5];
    for(int i = 0; i < sentence.length(); i++){
        if(i < 5){
            temp[i] = sentence[i];
        }
    }

    string sentence_start = temp;

    if(sentence.find("hallo") == string::npos){
        cout << "'hallo' finnes ikke i sentence.";
    }else{
        cout << "'hallo' finnes i sentence.";
    }

    size_t pos = sentence.find("er");
    int occurences = 0;
    while(pos != string::npos){
        occurences++;
        pos = sentence.find("er", pos + 2);
    }

    cout << "'er' dukket opp i ordet " << occurences << " ganger";

}