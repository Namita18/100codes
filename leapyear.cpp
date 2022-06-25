#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter year in YYYY format"<<endl;
    cin>>year;
    (year%400==0)? cout<<"leap year\n":
    ((year%4==0)&&(year%100!=0))?cout<<"leap year\n":cout<<"not a leap year\n";
    return 0;
}