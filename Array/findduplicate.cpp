#include<iostream>
using namespace std;

int findduplicate(int array[],int n){
    int dupl = 0;
    for (int i = 0;i<n;i++){
        dupl = dupl^array[i];
    }
    for (int i =0 ; i<n;i++){
        dupl = dupl^i;
    }
return dupl;
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
    cout<<findduplicate(array,n);
}
