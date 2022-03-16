#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int key){
    int low = 0,high = n-1;
    while (low<=high){
        int mid = (low + high)/2;
        if (arr[mid] == key){
            return mid;

        }
        else if(key>arr[mid]){
            low = mid +1;
        }
        else{
            high = mid -1;

        }
    }
    return -1;
}
















int main(){
    cout<<"Enter the size of your array:";
    int n ;
    cin>>n;
    cout<<"Enter the array :";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];    
    }
    int key;
    cout<<"Enter the element to be searched:";
    cin>>key;
    cout<<binarysearch(arr,n,key);
}