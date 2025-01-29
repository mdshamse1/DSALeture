#include <iostream>
using namespace std;
int main(){
    int n;
    int arr[10]={12,23,21,54,23,56,81,89,38,34};
    cout<<"Enter value want to find! "<<endl;
    cin>>n;
    for(int i = 9; i>=0; i--){
        if(arr[i]==n){
            cout<<"Element found at: "<<i<<" Index: "<<endl;
            return 0;
        }
    }
    cout<<"Element not found!"<<endl;
    return 0;
}