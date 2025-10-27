#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string n;
    char m;
    int f;
    cin >> n >> m >> f;

    int sum=0;
     for(int i=0; i<n.size(); i++){
        if(n[i]==m){
            sum++;
        }
     }
     if(sum==f){
        cout << "YES";
     }
     else{
        cout << "NO";
     }


    return 0;
}