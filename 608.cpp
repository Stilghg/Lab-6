#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string n, m, g;
    cin >> n;
    m=n+n[0];
    g=m;
    reverse(m.begin(), m.end());
    if(m==g) cout << "YES" << endl;
    else cout << "NO" << endl;  


    return 0;
}

