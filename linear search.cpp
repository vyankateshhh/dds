#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,2,10,5,9};
    int length = sizeof(arr)/ sizeof(arr[0]);
    int value = 5;  int index =-1;
    for(int i=0; i<length; i++){
        if(arr[i]== value){
            index =i;
            break;
        }
    }
    
     if(index == -1){
                cout<<"not found";
            }
            else{
                cout<<"Found at index "<< index;
            }
}
