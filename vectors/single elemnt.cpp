//single element
#include<iostream>
#include<vector>
using namespace std;
int single_element(vector <int> vec){
    int a = 0;
    for(int i : vec){
        a = a^vec.at(i);
    }
    return a;
}
int main(){
    vector <int> vec = {1,2,1,3,4,2,3,};
    cout << "single element is " << single_element(vec); ;
    return 0;
}
