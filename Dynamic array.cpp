#include<iostream>

int main(){
    using namespace std;
    
    int n; //5
    cout <<"enter the size of Array: ";
    cin>>n;
    
    int  *arr = new int[n];
    for(int i = 0;i< n;i++){
        cout<<" enter the value of arr["<<i<<"]index :";
        cin>> arr[i];
    }
    cout<<endl<<"entered elements are : "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
   
}
