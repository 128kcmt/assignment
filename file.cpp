#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

//function to count number of vowels
int countvowel(const string& vowel){
    int vowelcount = 0;
    string vowels = "AEIOUaeiou";
    for(char ch : vowel){
        if(vowels.find(ch) != string::npos){
            vowelcount++;
        }
    }
    return vowelcount;
}
//function to capitialize second letter in FileData
void CapitalizeSecondLetter(string& str) {
    bool newWord = true; // Flag to track word boundaries
    for (size_t i = 0; i < str.length(); ++i) {
        if (newWord && islower(str[i])) {
            str[i] = toupper(str[i]); // Capitalize the second letter
            newWord = false;
        }

        if (str[i] == ' ') {
            newWord = true; // Next character starts a new word
        }
    }
}

//Function reverse a string
void Reverse(string& str){
    reverse (str.begin(), str.end());
}
int main (){
    string second;
    int vowelcount=0;
    string vowels = "AEIOUaeiuo";

ifstream text("code.txt");
   string FileData;

if (text.is_open()){
    string line;
    while (getline(text,line)){
        FileData += line;
    }
    text.close();
    cout << FileData << endl;
int vowelcount = countvowel(FileData);
cout << vowelcount << endl;

CapitalizeSecondLetter(FileData);
cout << FileData << endl;

Reverse(FileData);
cout << FileData << endl;
}
return 0;
}
