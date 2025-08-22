#include <iostream>
using namespace std;
int main(){
    int arr[]={10,2,5,4,7};
    int n=sizeof (arr)/sizeof (arr[0]);
    for(int i=0; i<n; i++){
        for(int j=0;j<n-1;j++){
            if (arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
    }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}   
