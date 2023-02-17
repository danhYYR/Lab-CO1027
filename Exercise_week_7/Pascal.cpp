#include <iostream>
using namespace std;
int pascal(int i, int j){
    int pascal_value;
    if (i==j){
        pascal_value=1;
    }
    else if (j==0||i==0){
        pascal_value=1;
    }
    else{
        pascal_value=pascal(i-1,j)+pascal(i-1,j-1);
    }
    return pascal_value;
}
int main(){
    int row=4;
    int col=2;
    cout << pascal(row,col);
    return 0;
}