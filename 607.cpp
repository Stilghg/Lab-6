#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string n, m;
    cin >> n;
    m=n;
    reverse(n.begin(), n.end());
    if(n==m){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}

