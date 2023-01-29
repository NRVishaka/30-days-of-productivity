#include<iostream>
using namespace std;
main(){
    
    int n,sum=0;
    cout<<"enter no. of elements in array:";
    cin>>n;
    int arr[n];
    cout<<"input the array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i]; 
        sum+=arr[i];}
        cout<<"sum:"<<sum<<endl;
   

}