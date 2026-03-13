#include<iostream>
#include<vector>
using namespace std;

int binaryrecursion(vector<int>vec,int target,int srt,int end){
    if (srt <= end){
        int mid=srt+((end-srt)/2);
        if(target<vec[mid]) return binaryrecursion(vec,target,srt,mid-1);
        else if (target>vec[mid]) return binaryrecursion(vec,target,mid+1,end);
        else return mid;
    }
    return -1;
}

int main(){
    vector<int> arr={-1,0,3,4,7,11,13,18,25};
    int target=18;

    cout<<"the target is at index "<< binaryrecursion(arr,target,0,arr.size()-1) << endl;
    return 0;
}