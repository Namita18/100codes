#include<iostream>
using namespace std;
int main(){
    int n1, n2, n3;
    cout<<"enter 3 values"<<endl;
    cin>>n1>>n2>>n3;
    ((n1>=n2)&&(n1>=n3))?cout<<n1:((n2>=n1)&&(n2>=n3))? cout<<n2: cout<<n3;
    return 0;
}