#include <string.h>
#include <iostream>
using namespace std;
// Remove double blank
string cutString(string s,int i){
    string sub_s;
    sub_s=s.substr(i,s.length()-i);
    cout<< sub_s;
    return sub_s;
}
int main(){
    string s = "Truong Dai Hoc Bach Khoa.";
    cout <<  cutString(s, s.length());
    return 0;
}

