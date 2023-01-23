#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    int mul=a*b;
    int add=a+b;
    int sub=a-b;
    int div=a/b;
    int remainder=a%b;

    cout<<"sum= "<<add<< endl;
    cout<<"product="<<mul<<endl;
    cout<<"difference="<<sub<<endl;
    cout<<"modulus value="<<remainder<<endl;
    cout<<"quotient="<<div<<endl;
}
