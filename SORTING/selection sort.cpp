#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec={3,6,2,5,0,1};
    int n=vec.size();
    for (int i=0; i<n-1 ; i++){
        int si= i;                      //smallest index
        for(int j=i+1 ; j<n ; j++){
            if ( vec[j] < vec[si]) si=j;
        }
        swap(vec[i],vec[si]);
    }
    for(int i=0; i<vec.size();i++){
        cout << vec[i] << " ";    
    }
}
