#include<iostream>

#include<string>

#include<algorithm>

using namespace std;
bool chkAnagram(string str1, string str2) {
    int str1len = str1.length();
    int str2len = str2.length();
    if (str1len != str2len) {
        return false;
    }
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());
    for (int i = 0; i < str1len; i++) {
        if (str1[i] == str2[i]) {
            return true;
        }
    }

}
int main() {
    string str1 = "abba";
    string str2 = "aabb";
    if (chkAnagram(str1, str2)) {
        cout << "Strings are anagram";
    } else {
        cout << "Strings are not anagram";
    }
}
