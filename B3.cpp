#include <string.h>
#include <iostream>
using namespace std;
// Function caculate the power operator
int exponentiation(int base,int deg)
{   int pow=0;
    if (deg>0){
        pow=base*exponentiation(base,deg-1);
    }
    else{
        pow=1;
    }
    return pow; 
}
int calc(char str[])
{
    //Get the length of  string;
    int l = strlen(str)-1;
    int i = 0;
    int str_decimal = 0;
    while (str[i] != '\000')
    // l-i to reverer the order of string
    {
        if (str[i] == '0')
            {
                str_decimal = str_decimal + 0 * exponentiation(2,l-i);
            }
        if (str[i] == '1')
            {
                str_decimal = str_decimal + 1 * exponentiation(2,l-i);
            }
        i++;
    }
    return str_decimal;
}
int main()
{
    char str[] = "000011";
    cout << calc(str);
}
