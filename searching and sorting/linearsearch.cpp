#include<iostream>
using namespace std;
int linearsearch(int array[],int n,int key){
    for(int i = 0;i<n;i++){
        if (key == array[i]){
            return i;
        }
    }
    return -1;
}
int main(){
    cout<<"Enter the size of array:";
    int n,key;
    cin>>n;
    cout<<"Enter the array:";
    int array[n];
    for (int i = 0;i<n;i++){
        cin>>array[i];
    }
    cout<<"Enter the element to be searched: ";
    cin>>key;
    if (linearsearch(array,n,key)== -1){
        cout<<"Element is not present";
    }
    else{
        cout<<"Element is present at index: "<<linearsearch(array,n,key);

    }
    return 0;
}