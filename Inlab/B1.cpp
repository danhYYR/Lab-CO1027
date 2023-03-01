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
void check_case(char *outstr)
{
    int pos;
    int length=strlen(outstr);
    if (!isupper(outstr[0]))
    {
        *outstr=toupper(outstr[0]);
    }
    for (int i=1;i<length;i++)
    {
        if ((outstr[i-1]==' ') && (!isupper(outstr[i])) )
        {
            outstr[i]=toupper(outstr[i]);
        }
        else if ((outstr[i-1]!=' ')&&(isupper(outstr[i])))
        {
            outstr[i]=tolower(outstr[i]);
        }
    }
}
void remove_character(char *str, char *outstr)
{
    int length =strlen(str);
    int pos;
    for (int i=0;i<length;i++)
    {
        if((str[i] >= 'a' && str[i] <= 'z') 
        || (str[i] >= 'A' && str[i] <= 'Z')
        ||(str[i]==' '))
        {
            *outstr=str[i];
            outstr++;
        }
    }
    *outstr='\000';
}
void remove_blank_first_last(char* outstr)
{
   if (outstr[0]==' '){
        memmove(outstr, outstr+1, strlen(outstr));
   };

   int l=strlen(outstr);
   char *pos=strchr(outstr,'\000');
   if (outstr[pos-1]==' ')
   {
        outstr[pos-1]='\000';
   }
   
}
void process(char *name, char *outstr) {
    remove_character(name,outstr);
    check_case(outstr);
}
int main()
{
    const int MAX_SIZE = 100;
    char str[] = "doAn VAN *(()hau @!#$";
    char outstr[MAX_SIZE];
    process(str, outstr);    
    cout << outstr;
}