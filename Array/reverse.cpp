#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number:";
    int n;
    cin>>n;
    int res = 0;
    int m  = n;
    while(m !=0){
        res = res*10 + m%10;
        m/=10;
    }
    cout<<res;
    return 0;
}