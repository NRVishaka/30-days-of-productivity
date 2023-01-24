#include <iostream>
using namespace std;
main(){
    int n,sum=0;
    cout<<"enter the no. of integers you wish to add:";
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cout<<"enter integer to add:";
        cin>>a;
        sum=sum+a;
    }
    cout<<"Sum:"<<sum<<endl; 
}