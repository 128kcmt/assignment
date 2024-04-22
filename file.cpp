#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

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
    for(char ch : FileData){
        if (vowels.find(ch) != string::npos){
            vowelcount++;
        }
    }
}
cout << "nubmer of vowesls in FileData is : " << vowelcount << endl;
cout <<" the capitalized second letter is as follows: " << CapitalizeSecondLetter(FileData); << endl; 
Reverse(FileData);
cout << "the reversed text: " << Reverse(FileData); << endl;

return 0;
}
