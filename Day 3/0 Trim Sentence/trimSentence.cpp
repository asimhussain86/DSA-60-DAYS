#include<iostream>

#include <string>

using namespace std;

void trimSentence(string sentence) {
    //Left Trim 
    int start = 0, end = sentence.length() - 1;
    for (int i = 0; i <= end; i++) {
        if (sentence[i] != ' ') {
            start = i;
            break;
        }
    }

    //Right Trim 

    for (int i = end; i >= start; i--) {
        if (sentence[i] != ' ') {
            end = i;
            break;
        }
    }
    //Final string
    string strng = "";
    for (int i = start; i <= end; i++) {
        strng += sentence[i];
    }
    cout << "String Before :" << sentence << endl;
    cout << "String After  :" << strng;
}


int main() {
    string str = " String With spaces ";
    trimSentence(str);

}