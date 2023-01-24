#include <iostream>
using namespace std;
main(){
    int n,sum=0;
    cout<<"enter the no. of integers you wish to add:";
    cin>>n;
    for(int i=0;i<n;i++){
        sum=sum+i;
    }
    cout<<"Sum:"<<sum<<endl; 
    
    /*for n=5...
    i=0 n-0 sum-0
    i=1 n=1 sum=1 
    i=2 n=2 sum=3
    i=3 n=3 sum=6
    i=4 n=4 sum=10
    i=5 n=5 sum=15*/
}