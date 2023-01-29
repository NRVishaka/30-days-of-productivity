#include<iostream>
using namespace std;
main(){
    
    int n,smallest,largest;
    cout<<"enter no. of elements in array:";
    cin>>n;
    int arr[n];
    cout<<"input the array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i]; 
        if(smallest>arr[i]){ 
            smallest=arr[i];}
        if(largest<arr[i]){ 
            largest=arr[i];}
    } 
    cout<<"smallest element:"<<smallest<<endl;
    cout<<"largest  element:"<<largest<<endl;
}