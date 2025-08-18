#include<iostream>
using namespace std;
int main(){
   int arr[]= {10,20,40,80,100};
   int val = 80;
   int index = -1;
   int n= sizeof(arr)/sizeof(arr[0]);
   int low=0;
   int high = n-1;
   while(low<=high){
       int mid = low + ((val - arr[low]) * (high - low))  / (arr[high] - arr [low]);
       
   if(arr[mid]== val){
       index = mid;
       break;
   }
   else if(arr[mid]< val){
       low = mid+1;
   }
   else {
       high = mid-1;
   }
   }
   if(index == -1){
       cout << "not found";
   }
   else{
       cout << "found at index:"<<index;
   }
}
       
       
