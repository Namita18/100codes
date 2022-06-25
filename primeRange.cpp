#include<iostream>
using namespace std;
int main(){
    int a,b,flag=0;
    cout<<"enter range"<<endl;
    cin>>a>>b;
    for(int j=a; j<=b;j++){
   for(int i=2; i<a/2; i++){
        if (j%i==0){
            flag=-1;
            break;
        }
     
        else {
            flag=1;
             }
    }
    if(flag==1)cout<<j<<" ";}
    return 0;
}