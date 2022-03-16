#include<iostream>
using namespace std;

void sort01(int arr[],int n){
    for(int i = 0,j = n-1;i<=j;){
        if (arr[i] == 0){
            i++;
        }
        else{
            if(arr[j]==1){
                j--;
            }
            else{
                arr[i] = 0;
                arr[j] = 1;
                i++;
                j--;
            }
        }
    }
    for (int k =0;k<n;k++){
        cout<<arr[k]<<" ";
    }
}

int main(){
    cout<<"Enter the length of array:";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort01(arr,n);

    return 0;
}