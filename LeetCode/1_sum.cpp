#include<bits/stdc++.h>
using namespace std;

// class TwoSum{
//     public:
//     vector<int>twoSum(vector<int>&nums, int target){
//         unordered_map<int, int> visited;
//         int len = nums.size();

//         for(int i = 0; i<len; i++){
//             int n = nums[i];

//             int complement = target - n;
//             if(visited.count(complement)){
//                 return {
//                     visited[complement], i
//                 };
//             }
//             visited[n]=i;
//         }
//         return{

//         };
//     }
// };


class TwoSum{
    public:
    vector<int>twoSum(vector<int>&nums, int target){

        map<int, int>map;
        vector<int>arr;
        int len = nums.size();

        for(int i = 0; i<len; i++){

            int diff = target - nums[i];

            if(map.find(diff)!=map.end()){
                
                auto p = map.find(diff);
                arr.push_back(p->second);
                arr.push_back(i);

            }
            map.insert(make_pair(nums[i], i));
        }
        return arr;
    }
};
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    TwoSum s;
    vector<int>arr;
    arr={2,7,11,15};
    
  vector<int>result = s.twoSum(arr, 18);

    for(int i : result){
        cout<<i<<" ";
    }
    cout<<"\n";
    return 0;
}