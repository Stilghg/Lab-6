#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;

    
    char max=n[0];
    for(int i=1;i<n.length();i++){
        if(n[i]>max){
            max=n[i];
        }
    }
    
    cout << max << endl;


    return 0;
}   