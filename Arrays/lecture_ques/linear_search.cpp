#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int key = 20;
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr)/sizeof(arr[0]);
    bool found = false;
    
    // logic
    for(int i=0; i<size; i++){
        if(arr[i] == key){
            found = true;
        }
    }

    // output
    if(found){
        cout<<"Key: "<<key<<" is fount in the array."<<endl;
    }else{
        cout<<"Key not found."<<endl;
    }

    return 0;
}
