#include <string.h>
#include <iostream>
using namespace std;
void process(char str[],char *outstr){
    // Get the length of string and start with next to last index
    int i=strlen(str)-1;
    while (i>=0){
        *outstr=str[i];
        outstr++;
        i--;
    }
    // Add the end string char with '/0'
    *outstr='\000';
}
int main(){
    char str[] = "this is my school" ;
    char *outstr = new char[strlen(str) + 1];
    process(str, outstr);
    cout << outstr;
}
