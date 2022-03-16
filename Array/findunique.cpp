#include<iostream>
using namespace std;

int findunique(int array[],int n){
    int unique = 0;
    for (int i = 0;i<n;i++){
        unique = unique^array[i];
    }
return unique;
}
int main(){
    cout<<"Enter the length of the array:";
    int n;
    cin>>n;
    cout<<"enter the array:";
    int array[n];
    for(int i = 0;i<n;i++){
        cin>>array[i];
    }
    cout<<findunique(array,n);
}
