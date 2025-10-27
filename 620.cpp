#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string n;
    cin >> n;

    int pluspos = n.find('+');
    string a = n.substr(0, pluspos);
    string b = n.substr(pluspos + 1);
    
    string A="", B="";
    for(int i=0; i<a.size(); i+=3){
        if(a.substr(i, 3)=="ONE"){ A+="1";}
        else if(a.substr(i, 3)=="TWO"){A+="2";}
        else if(a.substr(i, 3)=="THR"){A+="3";}
        else if(a.substr(i, 3)=="FOU"){A+="4";}
        else if(a.substr(i, 3)=="FIV"){A+="5";}
        else if(a.substr(i, 3)=="SIX"){A+="6";}
        else if(a.substr(i, 3)=="SEV"){A+="7";}
        else if(a.substr(i, 3)=="EIG"){A+="8";}
        else if(a.substr(i, 3)=="NIN"){A+="9";}
        else if(a.substr(i, 3)=="ZER"){A+="0";}
    }

    for(int i=0; i<b.size(); i+=3){
        if(b.substr(i, 3)=="ONE"){ B+="1";}
        else if(b.substr(i, 3)=="TWO"){B+="2";}
        else if(b.substr(i, 3)=="THR"){B+="3";}
        else if(b.substr(i, 3)=="FOU"){B+="4";}
        else if(b.substr(i, 3)=="FIV"){B+="5";}
        else if(b.substr(i, 3)=="SIX"){B+="6";}
        else if(b.substr(i, 3)=="SEV"){B+="7";}
        else if(b.substr(i, 3)=="EIG"){B+="8";}
        else if(b.substr(i, 3)=="NIN"){B+="9";}
        else if(b.substr(i, 3)=="ZER"){B+="0";}
    }
    
    long long u;
    long long v;
    stringstream(A) >> u;
    stringstream(B) >> v;
    long long sum = u + v;

    stringstream ss;
    ss << sum;
    string str = ss.str();

    string result="";
    for(int i=0; i<str.size(); i++){
        if(str[i]=='1'){result+="ONE";}
        else if(str[i]=='2'){result+="TWO";}
        else if(str[i]=='3'){result+="THR";}
        else if(str[i]=='4'){result+="FOU";}
        else if(str[i]=='5'){result+="FIV";}
        else if(str[i]=='6'){result+="SIX";}
        else if(str[i]=='7'){result+="SEV";}
        else if(str[i]=='8'){result+="EIG";}
        else if(str[i]=='9'){result+="NIN";}
        else if(str[i]=='0'){result+="ZER";}
    }

    cout << result << endl;
    return 0;
}   