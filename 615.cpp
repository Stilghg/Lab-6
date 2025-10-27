#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    string n;
    getline(cin, n);

    for(int i=0; i<n.size(); i++){
        char c=n[i];
        char t=tolower(c);
        if(t=='a' || t=='e' || t=='i' || t=='o' || t=='u'){
            continue;
        }
        cout << c;
    }
    
    return 0;
}   