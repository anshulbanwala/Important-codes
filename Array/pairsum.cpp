#include<iostream>
using namespace std;

int pairsum(int arr[],int n,int key){
        int count = 0;
        for (int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if (arr[i]+arr[j] == key){
                    count++;
                }

            }
        }
        return count;
}


int main(){
    cout<<"Enter the size of the array:";
    int n;
    cin>>n;
    cout<<"Enter your array:";
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter the sum to be searched:";
    cin>>key;
    cout<<pairsum(arr,n,key);

    return 0;
}