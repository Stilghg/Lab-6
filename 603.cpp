#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string n;
    cin >> n;
    int sumB = 0, sumS = 0;
    for(int i=0; i<n.size(); i++){
        if(n[i]==toupper(n[i])){
            sumS ++;
        }
        else{
            sumB ++;
        }
    }

    cout << sumB << " " << sumS;



    return 0;
}

// 2 variant

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string n;
    cin >> n;
    int sumB = 0, sumS = 0;
    for(int i=0; i<n.size(); i++){
        if(isupper(n[i])){
            sumS ++;
        }
        else{
            sumB ++;
        }
    }

    cout << sumB << " " << sumS;



    return 0;
}

