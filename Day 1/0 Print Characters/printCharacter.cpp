#include<iostream>
#include <string>
using namespace std;
void printCharacter(string str){
    for(int i=0;i<str.size();i++){
        cout<<str[i];
    }
}
int main(){
    string str="Rana Asim Hussain";
    printCharacter(str);
}