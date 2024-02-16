// Lab5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

char translate_letter(char in, vector<char> code) {
    if ((in >= 'A') && (in <= 'Z') ){
        return code[in-'A'];
    }
    else if ((in >= 'a') && (in <= 'z')) {
        int numToUpper = 'a'-'A';
        int upper = in-numToUpper;
        int codenum = code[upper-'A'];
        return codenum+numToUpper;
    }
    else {
       return in;
    }
}

void  translate(string text, vector<char> code, vector<char>& output) {
    for (int i = 0; i < text.size();  i++) {
        output.push_back(translate_letter(text[i], code));
    }
}

int main()
{
    vector<char> code({ 'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' });
    vector<char> output({});

    string text;
    cout << "Input text to cypher: ";
    getline(cin, text);

    cout << "Encoded Message: ";
    translate(text, code, output);

    for (int i = 0; i < output.size(); i++) {
        cout << output[i];
    }
    cout << endl;
   

}

