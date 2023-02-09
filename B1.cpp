#include <string.h>
#include <iostream>
using namespace std;
// Remove double blank
void remove_blank(char str[], char *outstr){
    int i=0;
    while(str[i]!='\000'){
        // Get The next to element
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
    // Add the last char of the string array (Remove the ? allocation in heap)
    *outstr='\000';
}
void process(char str[], char *outstr) {
    remove_blank(str,outstr);
    // Move the  char pointer 
    // Detect first element
   if (*outstr==' '){
        memmove(outstr, outstr+1, strlen(outstr));
   };
   //get length of string
   int l=strlen(outstr);
    // Get the next to last element <=> l-1
    outstr+=l-1;
    char tmp=*outstr;
    outstr-=l-1;
    if (tmp==' '){
        memmove(outstr, outstr-1, strlen(outstr));
    } 
}
int main(){
    char str[]= "abc  def  ghi  " ;
    char *outstr = new char[strlen(str) + 1];
    process(str, outstr);
    cout << outstr;
    return 0;
}

