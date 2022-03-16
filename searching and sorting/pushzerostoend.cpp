#include<iostream>
using namespace std;

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void pushbackzero(int arr[],int n){
    int i=0,k=0;
    while(i<n){
        if (arr[i] == 0){
            i++;
        }
        else{
            swap(arr[i],arr[k]);
            k++;
            i++;    
        }
    }

}
int main(){
    cout<<"Enter the lenght of the array:";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    pushbackzero(arr,n);
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }

}