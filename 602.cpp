#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    string n, m;
    cin >> n  >> m;
    
    if(n==m) cout << "YES";   
    else  cout << "NO";
    return 0;
}