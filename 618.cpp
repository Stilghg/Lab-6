#include <iostream>
#include <cctype>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string n;
    cin >> n;

    bool flag = true;
    for(int i=0; i<n.size()-1; i++){
        if(n[i]>n[i+1]){
            flag = false;
            break;
        }
    }
    if(flag){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}   