#include<iostream>
using namespace std;

void arrangenumarray(int n){
    int array[n],i;
    int j = n/2;
    for(i=0;i<n;i++){
        if (i<=n/2){
        array[i] = 2*i + 1;
        cout<<array[i]<<" ";
        }
        else{
            array[i] = 2*j;
            j = j-1;
            cout<<array[i]<<" ";         
        }
    }
}
int main(){
    cout<<"Enter the number:";
    int n;
    cin>>n;
    arrangenumarray(n);
    return 0;
}