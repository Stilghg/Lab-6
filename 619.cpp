#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++){
        string line;
        cin >> line;
        if(line.size()>10 && line.substr(line.size()-10)=="@gmail.com"){
            cout << line.substr(0, line.size()-10) << endl;
        }
    }
    
    return 0;
}   