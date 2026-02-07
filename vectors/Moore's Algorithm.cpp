//moore"s algorithm
//majority element find the freqency of of element greater than size/2
#include<iostream>
#include<vector>
using namespace std;
int main(){
    //let vector given 
    vector <int> vec = {1,2,1,3,1,2,1,3,1};
    int freq = 0 , ans = 0 ;
    for(int i : vec){
        if ( freq == 0) ans = i;

        if (ans == i) freq++ ;
        else freq -- ;
    }

    //check the ans is the majority element or not
    int count = 0 ;
    for(int  val : vec){
        if ( val == ans) {
            count ++ ;
        }
    }
    if (count > vec.size()/2) cout << "majority element is = " << ans ;
    else cout << "there is no majority element is the given vector" ;
    return 0 ;
}