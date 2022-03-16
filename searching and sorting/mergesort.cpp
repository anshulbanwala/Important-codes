#include<iostream>
using namespace std;

void merge(int arr[],int l , int mid,int r){
    int L1[mid-l+1],L2[r-mid];
    for(int i=0;i<mid-l+1;i++){
        L1[i] = arr[l+i];
    }
    for(int j=0;j<r-mid;j++){
        L2[j] = arr[mid+j+1];
    }
    int i=0,j=0,k=l;
    while(i<mid-l+1 && j<r-mid){
        if(L1[i]<=L2[j]){
            arr[k] = L1[i];
            i++;
        }
        else{
            arr[k] = L2[j];
            j++;
        }
        k++;
    }
    while(i<mid-l+1){
        arr[k] = L1[i];
        k++;
        i++;
    }
    while(j<r-mid){
        arr[k] = L2[j];
        k++;
        j++;
    }

}

void mergesort(int arr[],int l,int r){
    if (l<r){
        int mid = l + (l-r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
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
    mergesort(arr,0,n-1);
    for (int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}