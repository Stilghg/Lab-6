#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string n;
    cin >> n;

    for(int i=0; i<n.size(); i++){
        n[i]=toupper(n[i]);
    }

    cout << n;



    return 0;
}