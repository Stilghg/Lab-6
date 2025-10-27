#include <iostream>
#include <cctype>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string n;
    cin >> n;

    int sum=0;
    for(int i=0; i<n.size(); i++){
        sum+=n[i];
    }
    if(sum>300) cout << "It is tasty!";
    else cout << "Oh, no!";
    
    return 0;
}   