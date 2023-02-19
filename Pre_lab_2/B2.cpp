#include <string.h>
#include <iostream>
using namespace std;
// Remove double blank
void findAllIndex(string s1, string s2){
    int found =s1.find(s2);
    string index="";
    int tmp=found;
    while (found!=-1) {
        index.insert(index.length(),to_string(tmp));
        index.insert(index.length()," ");
        s1=s1.substr(found+1,s1.length()-(found+1));
        found=s1.find(s2);
        tmp=tmp+found+1;
    } 
    if (index.length()>1){
        index.pop_back();    
    }
    else{
        index.insert(0,"-1");
    }
    cout << index;
}
int main(){
    string s1 = "Truong Dai Hoc Bach Khoa.";
    string s2 = "a";
    findAllIndex(s1,s2);
}


