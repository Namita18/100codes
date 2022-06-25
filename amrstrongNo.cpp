#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int a=n;
    int rem=1, rev=0;
    while(n>0){
     rem=n%10;
     rev+=(rem*rem*rem);
     n=n/10;
    }
    if(rev==a){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"Not"<<endl;
    }
    return 0;
}