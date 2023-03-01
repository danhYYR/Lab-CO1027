#include <string.h>
#include <iostream>
using namespace std;

void printFirstRepeatedWord(char str[]) {
    char* tmp;
    strncpy(tmp,str,strlen(str)-4);
    char *word=strtok(tmp," ");
    char *pos;
    while (word != NULL)
    {
        pos=strstr(str,word);
        printf ("%s\n",pos);
        word = strtok (NULL, " ,.-");
    }
    if (pos==NULL)
    {
        cout<<"No Repetition";
    }

}    
int main()
{
    char str[] = "car taxi bike bike car taxi" ;
    printFirstRepeatedWord(str);    
}