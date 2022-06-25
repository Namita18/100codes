#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter range"<<endl;
    cin>>a>>b;
    for(int i=a; i<=b;i++)
    {   int temp=i;int rem=1, rev=0;
        while(temp>0){
            rem=temp%10;
          rev= (rem*rem*rem)+rev;
          temp/=10;

        }
        if(i==rev){
            cout<<i<<" ";
        }

    }
    return 0;
}