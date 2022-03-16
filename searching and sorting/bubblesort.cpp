#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){
    for(int i =0;i<n;i++){//traversing the whole array
        for(int j =0;j<n-i-1;j++){//swaping the required elements
            if (arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;

            }
        }
    }
}

int main(){

    cout<<"Enter the lenght of Array:";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter your array to be sorted:";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubblesort(arr,n);
    for (int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}