#include<iostream>

using namespace std;

int main(){
    int n ,current,previous;
    cout<<"Enter the desired number:";
    cin>>n;
    cout<<"Enter your sequence";
    cin>>previous;
    bool dec = true;
    for(int i =1;i<n;i++){
        cin>>current;
        if (current > previous){
            if (dec == true){
                dec = false;    
            }
        }
        else if (current<previous){
                if (dec == false){
                    cout<<"false";
                    return 0;
            }
        }
        else{
            cout<<"false";
            return 0;
        }
        previous = current;
    }
    cout<<"true";
    return 0;
}