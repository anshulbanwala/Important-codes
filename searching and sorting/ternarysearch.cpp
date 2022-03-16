#include<iostream>
using namespace std;

int ternarysearch(int arr[],int n,int key){
    int low = 0,high = n-1;
    while (low<=high){
        int mid1 = low + (high-low)/3;
        int mid2 = high - (high - low)/3;

        if (arr[mid1] == key){
            return mid1;

        }
        else if(arr[mid2]==key){
            return mid2;
        }
        else if(key<arr[mid1]){
            high = mid1 -1;
        }
        else if(key>arr[mid2]){
            low = mid2 +1;
        }
        else{
            high = mid2 -1;
            low = mid1 + 1;
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
    cout<<ternarysearch(arr,n,key);
}