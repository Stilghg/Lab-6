#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;

    

    for(int i=0; i<n.size(); i++){
        n[i] = n[i]+1;
    }
    for(int i=0; i<n.size(); i++){
        if(n[i]=='{'){
            n[i]='a';
        }
    }
    
    cout << n << endl;


    return 0;
}   