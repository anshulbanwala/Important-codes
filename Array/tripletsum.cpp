#include<iostream>
using namespace std;

int tripletsum(int arr[],int n,int key){
    int  count =0;
    for(int i=0;i<=n-3;i++){
        for(int j =i+1;j<=n-2;j++){
            for(int k = j+1;k<=n-1;k++){
                if (arr[i]+arr[j]+arr[k] == key){
                    count++;
                }
            }
        }
    }
    return count;
}

int main(){
    cout<<"Enter the size of array:";
    int n;
    cin>>n;
    cout<<"Enter the array:";
    int arr[n];
    for (int i=0 ; i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the triplet sum:";
    int key;
    cin>>key;
    cout<<tripletsum(arr,n,key);

}