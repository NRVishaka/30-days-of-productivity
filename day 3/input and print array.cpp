#include<iostream>
using namespace std;
main(){
    
    int n;
    cout<<"enter no. of elements in array:";
    cin>>n;
    int arr[n];
    cout<<"input the array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i]; }
    cout<<"Printing the array:";
for(int i=0;i<n;i++){
        cout<<arr[i]; }

}