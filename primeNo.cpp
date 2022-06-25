#include<iostream>
using namespace std;
int main(){
    int n,flag=0;
    cout<<"enter number"<<endl;
    cin>>n;
    for(int i=2; i<n/2; i++){
        if (n%i==0){
           flag=-1;
            break;
        }
        else flag =1;
    }
    flag==-1? cout<<"not prime":cout<<"prime";
    return 0;
}