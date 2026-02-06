//reversing an array without using swap function
#include<iostream>
using namespace std ;
int reversing(int arr[] , int size){
    for(int i=0; i<size/2; i++){
        arr[i] = arr[i] + arr[size-i-1];
        arr[size-i-1] = arr[i] - arr[size-i-1];
        arr[i] = arr[i] - arr[size-i-1];
    }
}

int main(){
    // given an array
    int arr[6] = {1,2,3,4,5,6};
    reversing( arr , 6 );

    //print the reversed array
    for(int i=0; i< 6; i++){
        cout << arr[i] << " " ;
    }
    return 0;
}
