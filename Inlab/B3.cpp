#include <string.h>
#include <iostream>
using namespace std;

void replaceString(string s, string s1, string s2){
    string substring;
    int pos=s.find(s1);
    while (pos!=-1)
    {
        s.replace(pos,s1.length(),s2);
        pos=s.find(s1);
    }
    cout<<s;
}
void deleteWord(string s, string s1){
    string sub_s;
    int pos=s.find(s1);
    while(pos!=-1)
    {
        s.erase(pos,s1.length());
        pos=s.find(s1);
    }
    cout<<s;
}
int count_character(string s,string c)
{
    string s2;
    int count=0;
    int pos=s.find(c);
    while (pos!=-1)
    {
        s=s.substr(pos+1,s.length()-1);
        count++;
        pos=s.find(c);
    } 
    return count;  
}
int main()
{
    string s = "aabb";
    string s1;
    int* count;
    for(int i=0;i<s.length();i++)
    {
        for (int j=1;j<s.length();j++)
        {
            s1=s.substr(i,j);
            *(count+i)=count_character(s,s1);
        }
    }
    cout<<s;
}