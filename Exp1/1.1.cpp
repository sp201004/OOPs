#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter three numbers"<<endl;
    cin>>a>>b>>c;
    cout<<"The largest number among the three numbers is: ";
    if(a>b&&a>c){
        cout<<a<<endl;
    } else if(b>a&&b>c){
        cout<<b<<endl;
    } else{
        cout<<c<<endl;
    }
}