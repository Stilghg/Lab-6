#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;
     
    char bestChar=n[0];
    int bestLen=1;

    char currentChar=n[0];
    int currentLen=1;

    for(int i=1; i<n.size(); i++){
        if(n[i]==currentChar){
            currentLen++;
        }
        else {
            if(currentLen>bestLen){
                bestLen=currentLen;
                bestChar=currentChar;
            }
            currentChar=n[i];
            currentLen=1;
        }
    }
    if(currentLen>bestLen){
        bestLen=currentLen;
        bestChar=currentChar;
    }
    cout << bestChar << " " << bestLen << endl;
    
    return 0;
}   