// to print all the unique values in an array
#include<iostream>
using namespace std;
int main(){
    int n , i , j ;
    cout << "enter the length of an array : " ;
    cin >> n;
    int nums[n];
    //input data in an array
    cout << "enter the elements of an array" << endl ;
    for(i=0;i<n;i++){
        cin >> nums[i] ;
    }
    //printing the unique values
    cout << "All the unique elemnts in tha array :" << endl ;
    for(i=0 ; i<n ;i++){
        int x = 0;
        for(j=0 ; j<n ; j++){
            if (j!=i){
                if (nums[j]==nums[i]){
                    x=1;
                    break;
                }
            }
        }
        if(x==0){
            cout << nums[i] << " ";
        }
    }
}
/* Example-
arr = [1,2,1,3,2,1]
output = 3 */


