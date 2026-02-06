// concatenation of an array
    #include<iostream>
    using namespace std;
    int main(){
        int n , i ;
        cout << "enter the length of an array : " ;
        cin >> n;
        int nums[n];
        //input data in an array
        cout << "enter the elements of an array" << endl ;
        for(i=0;i<n;i++){
            cin >> nums[i] ;
        }
        cout << endl;
        //create new array
        int ans[2*n];
        for(i=0;i<2*n;i++){
            if (i<n){
                ans[i]=nums[i];
            }
            else{
                ans[i]=nums[i-n] ;
            }
        }
        //print the new array
        for(i=0;i<2*n;i++){
            cout << ans[i] << " ";
        }
        return 0;   
    }

/* example -
Input: nums = [1,2,1]
Output: [1,2,1,1,2,1]
Explanation: The array ans is formed as follows:
- ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]
- ans = [1,2,1,1,2,1]*/
