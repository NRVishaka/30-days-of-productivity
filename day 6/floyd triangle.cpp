#include<iostream>
using namespace std;
main(){
    int n,i;
    cout<<"enter no. of lines:";
    cin>>n;
    int counter=1;
    for(i=0;i<n;i++){
       for(int j=0;j<=i;j++){
        cout<<counter++<<" ";
       }
       cout << endl;
    }
}