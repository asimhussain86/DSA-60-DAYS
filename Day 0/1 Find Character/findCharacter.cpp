#include<iostream>

#include<string>

using namespace std;
bool checkCharacter(char character, string word) {
    for (int i = 0; i < word.length(); i++) {
        if (word[i] == character) {
            return true;
        }

    }
    return false;

}
int main() {
    string word;
    char character;
    cout << "Enter Word ";
    cin >> word;

    cout << "Enter Character You want to search ";
    cin >> character;

    if (checkCharacter(character, word)) {
        cout << "Character found";
    } else
        cout << "Character Not Found";
}