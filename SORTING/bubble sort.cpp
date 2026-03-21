#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    vector<int> vec={3,7,2,9,0,1};
    int n=vec.size();
    for (int i=1; i< n; i++){
        for(int j=0; j<(n-i); j++){
            if (vec[j]>vec[j+1]){
                int temp=vec[j];
                vec[j] = vec[j+1];
                vec[j+1]=temp;
            }
        }
    }
    for(int i=0; i<vec.size();i++){
        cout << vec[i] << " ";    
    }
}