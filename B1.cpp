#include <string.h>
#include <iostream>
using namespace std;
// Student may implement another function as need
void remove_blank(char str[], char *outstr){
    int i=0;
    while(str[i]!='\000'){
        // The next to element
        i++;
        char tmp=str[i];
        i--;
        if (str[i]==' ' && tmp ==' '){
            i++;
        }        
        else{
            *outstr=str[i];
            outstr++;
            i++;
        }
    }
    *outstr='\000';
}
void process(char str[], char *outstr) {
    remove_blank(str,outstr);
    memmove(outstr, outstr-1, strlen(outstr));
    memmove(outstr, outstr+2, strlen(outstr));
}
int main(){
    char str[]= "  abc  def  ghi  " ;
    char *outstr = new char[strlen(str) + 1];
    process(str, outstr);
    cout << outstr;
    return 0;
}

