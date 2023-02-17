#include <iostream>
using namespace std;
int sum(int arr[],int l){
    int total=0;
    if (l>1){
        int sub_arr[l-1];
        for (int i=0;i<l-1;i++){
            sub_arr[i]=*arr;
            arr++;
        }
        total=*arr+sum(sub_arr,l-1);
    }
    else{
        total=*arr;
    }
    return total;
}
int main(){
    int dayso[]={1,1,1};
    int length=sizeof(dayso)/sizeof(dayso[0]);
    cout << sum(dayso,length);
    return 0;
}