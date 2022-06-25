#include<iostream>
using namespace std;
int main(){
    int n,rem, rev=0;
    cout<<"enter number"<<endl;
    cin>>n;
    while(n>9){
        rem= n%10;
        rev= rev*10+rem;
        n=n/10;
    }
    cout<<rev<<endl;
    return 0;

}