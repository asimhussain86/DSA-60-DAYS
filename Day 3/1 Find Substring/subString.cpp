#include<iostream>
#include<string>

using namespace std;
void findSubString(string sentence,string subStr){
    int chrFound=0,wordStartIndex=-1;
    int subStrLength=subStr.length();
    for(int i=0;i<sentence.length()-subStrLength+1;i++){

        if(sentence[i]==subStr[0]){

            int j=i;
            for(j=i;j<i+subStrLength;j++){
                if(sentence[j]==subStr[j-i]){
                    chrFound++;

                }
                if(chrFound==subStrLength){
                    wordStartIndex=i;
                    break;
                }

            }
        }
    }

    if (wordStartIndex != -1) {
    cout << "Found '" << subStr << "' at index " << wordStartIndex << "." << endl;
  } else {
    cout << "Could not find '" << subStr << "' in the input." << endl;
  }
}

int main(){
    string sentence="My name is asim";
    string subStr="asim";
    findSubString(sentence,subStr);
}
