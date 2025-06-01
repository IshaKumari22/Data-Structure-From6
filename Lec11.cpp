// PAIR SUM WITH TARGET(BRUTE-FORCE)


// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int>pairSum(vector<int>nums , int target){
//     vector<int>ans;
//     int n=nums.size();

//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//            if(nums[i]+nums[j]==target){
//             ans.push_back(i);
//             ans.push_back(j);
//             return ans;
//            }  
//         }
//     }
//     return ans;
// }
// int main(){
//     vector<int> nums={2,7,11,15};
//     int target=13;
//     vector<int>ans=pairSum(nums,target);
//     cout<<ans[0]<< ", "<<ans[1]<<endl;
//     return 0;
// }



// PAIR SUM(OPTIMAL)


// #include<iostream>
// #include<vector>
// using namespace std;
// vector <int>pairSum(vector<int>nums,int target){
//     vector<int>ans;
//     int n=nums.size();
//     int i=0,j=n-1;
//     while(i<j){
//         int pairSum=nums[i]+nums[j];
//         if(pairSum>target){
//             j--;
//         }
//         else if(pairSum<target){
//             i++;
//         }
//         else{
//             ans.push_back(i);
//             ans.push_back(j);
//             return ans;
//         }
//     }
//     return ans;
// }
// int main(){
//     vector <int>nums={2,7,11,15};
//     int target=26;
//     vector<int>ans=pairSum(nums,target);
//     cout<<ans[0]<<" ,"<<ans[1]<<endl;
//     return 0;
// }




// MAJORITY ELEMENT(brute force)--O(N^2)



// #include<iostream>
// #include<vector>
// using namespace std;
// int majorityElement(vector<int>&nums){
//     int n=nums.size();
//     for(int val:nums){
//         int freq=0;
//         for(int el:nums){
//             if(el==val){
//                 freq++;
//             }
//         }
//         if(freq>n/2){
//             return val;
//         }

//     }
//     return -1;
// }
// int main(){
//     vector<int>nums={1,2,2,2,2,1};
//     int val=majorityElement(nums);
//     if(val != -1){
//         cout<<"Majority element is :"<<val<<endl;
//     }
//     else{
//                 cout<<"No Majority element ";

//     }
// }




//Optimize( O(nlogn)) 



// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int majorityElement(vector<int> nums){
//           int n=nums.size();
//           sort(nums.begin(),nums.end());
//           int freq=1,ans=nums[0];
//           for(int i=1;i<n;i++){
//             if(nums[i]==nums[i-1]){
//                 freq ++;
//             }
//             else{
//                 freq=1;
//                 ans=nums[i];
//             }
//             if(freq>n/2){
//                 return ans;
//             }
//           }
//           return -1;
// }
// int main(){
//     vector<int>nums={1,2,2,2,1};
//     int ans=majorityElement(nums);
//     if(ans !=-1){
//         cout<<"Majority element is :" <<ans<<endl;
//     }
//     else{

//     cout<<"No majority element";
//     }
// }



//Moore's algorithm

#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int>nums)
{
    int freq=0;int ans=0;
    for(int i=0;i<nums.size();i++)
    {
        if(freq==0){
            ans=nums[i];
        }
        if(ans=nums[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    return ans;
}
int main(){
    vector<int>nums={3,2,3};
    int ans=majorityElement(nums);
    cout<<ans<<endl;
}