#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;
    char m;
    cin >> m;

    
    int sum=0;
    for(int i=0; i<n.length(); i++){
        if(n[i]==m) sum++;
    }

    if(sum>1){
        for(int i=0; i<n.length(); i++){
            if(n[i]==m){
                cout << i << " ";
                break;
            }
        }
        for (int i = n.size(); i > 0; i--) {
            if(n[i]==m){
                cout << i << " ";
                break;
            }
        }
    }
    else{
        for(int i=0; i<n.length(); i++){
            if(n[i]==m){
                cout << i << " ";
            }
    }
    
    }

    return 0;
}   