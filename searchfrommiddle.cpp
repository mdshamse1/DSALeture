#include<iostream>
using namespace std;

int main(){
    int arr[10] ={23,21,45,43,65,76,78,98,78,50};
    int n;
    cout << "Enter the number you want to find index: ";
    cin >> n;
    
    int sizeofarr = sizeof(arr)/sizeof(arr[0]);
    int mid = sizeofarr / 2;
    int found = -1;


    for(int i = 0; i <= mid; i++){
        if(arr[mid + i] == n){  
            cout << "Element found at: " << (mid + i) << endl;
            found = mid + i;
            break;
        }
        if(mid - i >= 0 && arr[mid - i] == n){ 
            cout << "Element found at: " << (mid - i) << endl;
            found = mid - i;
            break;
        }
    }

    if(found == -1)
        cout << "Element not found" << endl;

    return 0;
}
