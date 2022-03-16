#include<iostream>
using namespace std;

void insertionsort(int arr[],int n){
    for(int i =1;i<n;i++){//traversing the whole array from second as we compare backwards towards the sorted part
        int j,key= arr[i];
        j=i;
        while(j>0 && arr[j-1]>key){
                arr[j]=arr[j-1];       //overwriting arr[j] as arr[j-1] is > than that so to put the smaller element in the sorted part
                j--;

            }
        arr[j] = key;
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
    insertionsort(arr,n);
    for (int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}