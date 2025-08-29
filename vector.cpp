#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr={10,6,2};
    
    arr.push_back(6);
    arr.push_back(16);
    arr.push_back(5);
    arr.push_back(9);
    arr.push_back(1);


    arr.pop_back();
    arr.pop_back();

cout<<"size of array = :"<<arr.size()<<endl;
for(int val:arr){
    cout<<val<<" ";
}
}
