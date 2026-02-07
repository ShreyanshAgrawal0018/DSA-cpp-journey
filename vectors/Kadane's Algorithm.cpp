//kadaden's Algorithm
// find the subarray with the largest sum
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec ={-2,1,-3,4,-1,2,1,-5,4};
    int max_sum = INT8_MIN;
    for(int i =0 ; i< vec.size() ; i++){
        int sum = 0 ;
        for( int j = i; j< vec.size(); j++){
            sum += vec.at(j);
            max_sum=max(max_sum , sum);
            if(max_sum < 0){
                max_sum = 0 ;
            }
        }
    }
    cout <<"the largest sum of the subarray is " << max_sum ;
    return 0;
}
