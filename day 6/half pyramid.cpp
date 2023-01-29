#include<iostream>
using namespace std;
main(){
    int n,i;
    cout<<"enter no. of lines:";
    cin>>n;
    for(i=0;i<n;i++){
       for(int j=0;j<=i;j++){
        cout<<"*";
       }
       cout << endl;
    }
}