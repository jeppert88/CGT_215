// Lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

char translate(string text, vector<char> code) {

    for (int i = 0; i = text.size(); i++) {
        if (text[i] >= 65 && text[i] <= 90) {
            return code[text[i] - 65];
            
        }
        else if (text[i] >= 97 && text[i] <= 122) {
            text[i] = text[i] - 32;
            code[i] = text[i] - 65;
            return code[i] + 32;
            
        }
        else {
            return text[i];
        }
    }
}

int main()
{
    vector<char> code({ 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' });

    string text;
    cout << "Input text to cypher: ";
    getline(cin, text);

    cout << "Encoded Message: ";
    cout << translate(text, code);
 

}

