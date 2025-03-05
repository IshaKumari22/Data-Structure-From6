//VeECTOR SYNTAX

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>vec={1,2,3};
//     cout<<vec[0]<<endl;
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>vec (5,0);
//     for(int i :vec){
//         cout<<i<<endl;
//     }
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<char>vec ={'a','b','c','d','e'};
//     for(char val :vec){
//         cout<<val<<endl;
//     }
//     return 0;
// }


//VECTOR FUNCTIONS


//  1.SIZE

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<char>vec ={'a','b','c','d','e'};
//     cout<<"Size = "<<vec.size()<<endl;
//     for(char val :vec){
//         cout<<val<<endl;
//     }
//     return 0;
// }


//  2.PUSH_BACK

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>vec;
//     cout<<"Size = "<<vec.size()<<endl;
//     vec.push_back(25);
//     vec.push_back(35);
//     vec.push_back(45);
//     cout<<"After push back Size = "<<vec.size()<<endl;
//      for(int val :vec){
//         cout<<val<<endl;
//     }
//     return 0;
// }


// 3. POP_BACK

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec;
//     vec.push_back(25);
//     vec.push_back(35);
//     vec.push_back(45);
//     cout<<"After push back Size = "<<vec.size()<<endl;
//     vec.pop_back();
//     for(int val :vec){
//         cout<<val<<endl;
//     }
//     return 0;
// }


// 4. FRONT

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec;
//     vec.push_back(25);
//     vec.push_back(35);
//     vec.push_back(45);
//     cout<<"After push back Size = "<<vec.size()<<endl;
//     cout <<vec.front()<<endl;
   
//     return 0;
// }


//5.BACK

//  #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec;
//     vec.push_back(25);
//     vec.push_back(35);
//     vec.push_back(45);
//     cout<<"After push back Size = "<<vec.size()<<endl;
//     cout <<vec.back()<<endl;
   
//     return 0;
// }


//6. At

//  #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> vec;
//     vec.push_back(25);
//     vec.push_back(35);
//     vec.push_back(45);
//     cout<<"After push back Size = "<<vec.size()<<endl;
//     cout <<vec.at(2)<<endl;
   
//     return 0;
// }


//STATIC VS DYNAMIC MEMORY ALLOCATION

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//       vector<int>vec;
//       vec.push_back(0);
//       vec.push_back(1);
//       vec.push_back(2);
//       vec.push_back(3);
//       vec.push_back(4);

//       cout<<vec.size()<<endl;
//       cout<<vec.capacity()<<endl;

//       return 0;

// }



// Single number
#include<iostream>
#include<vector>
using namespace std;

class solution{
      public:
      int singleNumber(vector<int>&nums){
            int ans=0;
            for(int val:nums){
                  ans=ans^val;
            }
         return ans;
      }
};
int main(){
    vector<int> nums = {4, 1, 2, 1, 2}; // Example input
    solution sol;
    cout << "Single number: " << sol.singleNumber(nums) << endl;
    return 0;
}