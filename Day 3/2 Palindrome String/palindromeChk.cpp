#include<iostream>

#include<string>

using namespace std;
bool palindromeChk(string word) {
    int start = 0;
    int end = word.length() - 1;
    while (start < end) {
        if (word[start] != word[end]) {
            return false;
        }
        start++;
        end--;

    }
    return true;


}
int main() {
    string word = "maham";
    if (palindromeChk(word)) {
        cout << "The word is palindrome";
    } else {
        cout << "The word is not a palindrome";
    }
}
