#include <iostream>
#include <cctype>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string n;
    getline(cin, n);

    stringstream ss(n);
    string word;

    while ( ss >> word)
    {
        bool test=true;
        for(int i=0; i<word.size(); i++){
            if(!isalpha(word[i])){
                test=false;
                break;
            }
        }
        if(test) cout << word << endl;
    }
    
    return 0;
}   