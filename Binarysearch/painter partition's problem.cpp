// Question
// Given are N boards of length of each given in the form of array, and M painters, such that each painter takes 1 unit of time to paint 1 unit of the board.
// The task is to find the minimum time to paint all boards under the constraints that any painter will only paint continuous sections of boards

#include<iostream>
#include<vector>
using namespace std;
int isvalid(vector<int> vec,int k,int mid){
    int painter=1, boards=0;
    for(int i=0; i<vec.size(); i++){
        if(vec[i]>mid) return 0;

        if ((boards+vec[i]) <= mid){
            boards+=vec[i];
        }
        else{
            painter++;
            boards=vec[i];
        }
    }
    if (painter > k) return 0;
    else return 1;
}
// explanation - the time taken by the painters to paint all the boards is in between the range 0 to time required to paint all the boards by one painter. so we perform a binary search by taking initial point 0 and ending point sum of time required to paint all the boards. now, if the given no. of painters paint the in the mid time then we will search for the time before mid else after the mid and the maximum time required by a painter to paint the assigned number of boards is the output

int splitboard(vector <int> arr,int m){
    int min=0, max=0, ans=0;

    for(int i=0; i<arr.size(); i++){
            max+=arr[i];
        }
        while(min <= max){
            int mid=min + (max-min)/2;
            if (isvalid(arr, m, mid)==1){
                ans=mid;
                max=mid-1;
            }
            else min=mid+1;
        }
        return ans;
}
int main(){
    int n,m,x;
    cout << "enter no. of painters :";
    cin >> m;
    cout << "enter no. of boards :";
    cin >> n;
    vector <int> arr;
    cout << "enter lentgth for each board" << endl;
    for(int i=0;i<n;i++){
        cin >> x;
        arr.push_back(x);
    }
    if(m>arr.size()) cout << "NP. of painters is greater than number of boards"; 
    else cout << "Minimum time required to paint all the boards is " << splitboard(arr,m) <<endl;

    return 0;
}

