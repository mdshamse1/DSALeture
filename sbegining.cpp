#include <iostream>
using namespace std;
int main(){
    int n;
    int arr[10]={12,23,21,54,23,56,81,89,38,34};
    cout<<"Enter a value you want to find!"<<endl;
    cin>>n;
    for(int i = 0; i<10; i++){
        if(arr[i]==n){
            cout<<"Element found at: "<<i<<endl;
            return 0;
        }
    }
    cout<<"Elenent not found"<<endl;
    return 0;
}
