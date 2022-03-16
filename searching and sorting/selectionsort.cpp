#include<iostream>
using namespace std;

void selectionsort(int arr[],int n){
    for (int i =0;i<n;i++){
        int min_index = i,min = arr[i];
        //minimum index
        for(int j =i+1;j<n;j++){
            if (min>arr[j]){
                min_index = j;
                min = arr[i];
            }
        }
        //Swapping
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
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
    selectionsort(arr,n);
    for (int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }













    return 0;
}
