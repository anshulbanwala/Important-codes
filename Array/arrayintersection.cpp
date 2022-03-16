#include<iostream>
using namespace std;

void arrayintersection(int arr1[],int n1,int arr2[],int n2){
    for (int i =0;i<n1;i++){
        for(int j =0;j<n2;j++){
            if (arr1[i] == arr2[j]){
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }
}


int main(){
    cout<<"Enter the lenght of array1";
    int n1,n2;
    cin>>n1;
    cout<<"Enter the array1";
    int arr1[n1];
    for (int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter the lenght of array2";
    cin>>n2;
    cout<<"enter the array2";
    int arr2[n2];
    for (int i = 0 ; i<n2;i++){
        cin>>arr2[i];
    }
    arrayintersection(arr1,n1,arr2,n2);
    return 0;

}