#include<iostream>
#include <string>
#include<vector>

using namespace std;

void numberOfCharacter(char character, string word){
    vector <char> indexes;
      
 for(int i = 0; i < word.length(); i++){
  if(word[i] == character){
  indexes.push_back(i);
       cout<<i;
  }
 }
    
}

int main(){
    string word;
    char character;
    
    cout<<"Enter the word ";
    cin>>word;
    cout<<"Enter the character";
    cin>>character;
    numberOfCharacter(character,word);
return 0;

}