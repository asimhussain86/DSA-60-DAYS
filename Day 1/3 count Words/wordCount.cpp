#include <iostream>
#include<string>
using namespace std;
void wordCount(string str){
    int count=0;
    for(int i=0; i<str.length();i++){
        if(str[i] ==' ' || i == str.length()-1 ){
count++;
        }
    }
    cout<<"there are "<<count<<" words in "<<endl<<str<<endl;
}
int main(){
    string str="My name is Rana Asim Hussain";
    wordCount(str);

}