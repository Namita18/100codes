#include<iostream>
using namespace std;
int main(){
    int n1, n2;
    cout<<"enter two numbers"<<endl;
    cin>>n1>>n2;
    if(n1==n2){cout<<"euqals";}
    else
    n1>n2?cout<<n1:cout<<n2;
    return 0;
}