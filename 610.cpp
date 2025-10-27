#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    string n, m;
    cin >> n >> m;

    string x="";
    while(x.size()<m.size()) x+=n;
    
    if (x==m) cout << "YES";
    else cout << "NO";
    
    return 0;
}   