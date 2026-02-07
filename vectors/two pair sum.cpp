//sum of two numbers in an array is equal targetted sum
//solving usin two pointer approach
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    //let the vector given
    vector <int> vec = {2,6,3,9,11,4,15};
    int sum = 14;

    //sort array
    sort(vec.begin() , vec.end()) ;

    int i = 0;
    int j = vec.size() -1 ;

    while(i<j){
        int ans = vec.at(i) + vec.at(j) ;
        if ( ans > sum) j-- ;
        else if (ans < sum) i++ ;
        else {
            cout << "sum of " << vec.at(i) << " and " << vec.at(j) << " is equal to targeted sum" ;
            break;
        }
    }
    return 0 ;
}