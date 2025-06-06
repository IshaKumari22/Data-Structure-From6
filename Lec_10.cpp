// Maximum subarray sum

// #include<iostream>
// #include<vector>
// using namespace std;
 
// int main(){
//     int n=5;
//     int arr[5]={1,2,3,4,5};
//     for(int st=0;st<n;st++){
//         for(int end=st;end<n;end++)
//         {
//             for(int i=st;i<=end;i++){
//                 cout<<arr[i];
//             }
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
//   }


// Maximum subarray sum using Brute force approach

// #include<iostream>
// #include<vector>
// using namespace std;
 
// int main(){
//     int n=7;
//     int arr[7]={3,-4,5,4,-1,7,-8};
//     int maxSum=INT32_MIN;
//     for(int st=0;st<n;st++){
//         int currSum=0;
//         for(int end=st;end<n;end++)
//         {
//             currSum +=arr[end];
//             maxSum=max(currSum,maxSum);
//             }
//     } 
//     cout<<"Max subarray sum ="<<maxSum<<endl;
//     return 0;
//   }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n=5;
//     int arr[5]={1,2,3,4,5};
//     for(int st=0;st<n;st++){
//         for(int end=st;end<n;end++){
//             for(int i=st;i<=end;i++){
//                 cout<<arr[i];
//             }
//             cout<<" ";
//         }
//         cout<<endl;

//     }
//     return 0;
// }



// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n=5;
//     int arr[5]={1,2,3,4,5};
//     int maxSum=INT32_MIN;

//     for(int st=0;st<n;st++){
//         int currSum=0;
//         for(int end=st;end<n;end++){
//              currSum +=arr[end];
//              maxSum=max(currSum,maxSum);
//             }
//     }
//     cout<<"Max subarray is " <<maxSum<<endl;
//     return 0;
           
// }




// KADANE'S ALGORITHM

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=7;
    int arr[]={3,-4,5,4,-1,7,-8};
    int currSum=0;
    int maxSum=INT32_MIN;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        maxSum=max(currSum,maxSum);
        if(currSum<0){
            currSum=0;
        }
    }
    cout<<maxSum<<endl;
}