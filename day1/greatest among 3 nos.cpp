#include<iostream>
using namespace std;
main(){
    int num1,num2,num3;
    cout<<"Enter the numbers num 1 ,num2  and num3:";
    cin>>num1>>num2>>num3;
    if(num1>num2 &num1>num3){
        cout<<num1<<" is the greatest among the 3 numbers";
    }
    else  if(num2>num1 &num2>num3){
        cout<<num2<<" is the greatest among the 3 numbers";
    }
    else{
        cout<<num3<<" is the greatest among the 3 numbers";
    }
    }
