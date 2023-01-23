#include<iostream>
using namespace std;
main(){
    int num1,num2;
    cout<<"Enter the numbers num 1 and num2:";
    cin>>num1>>num2;
    int temp=num1;
    num1=num2;
    num2=temp;
    cout<<"after swapping"<<endl;
     cout<<"num1:"<<num1<<endl;
     cout<<"num2:"<<num2;
}