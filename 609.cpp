#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string n;
    cin >> n;
    
    
    for(int i=0; i<n.size(); i++){
        if(i%2==0){
            n[i]=toupper(n[i]);
        }
    }
    cout << n << endl;


    return 0;
}
