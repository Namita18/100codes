#include<iostream>
using namespace std;
int main(){
    int n,rev=0,rem;
    cout<<"enter n"<<endl;
    cin>>n;
    int p=n;
    while(n>0){
        rem= n%10;
        rev= rev*10 +rem;
        n=n/10;
    }
    if(p==rev){
        cout<<"YES"<<endl;

    }
    else{
        cout<<"Not"<<endl;
    }
return 0;
}