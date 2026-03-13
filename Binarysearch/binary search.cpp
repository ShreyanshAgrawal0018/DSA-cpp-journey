#include <iostream>
#include <vector>
using namespace std;

int binarysearch(vector<int>vec, int target){
    int srt=0, end= vec.size()-1;
    while(srt <= end){
        int mid=srt+((end-srt)/2);
        if(target<vec[mid]) end= mid-1;
        else if (target>vec[mid]) srt= mid+1;
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> arr={-1,0,3,4,7,9,13,18,25};
    int target=30;

    cout<<"the target is at index "<< binarysearch(arr,target) << endl;
    return 0;
}
