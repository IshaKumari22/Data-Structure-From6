// Array Syntax

// #include<iostream>
// using namespace std;
// int main(){
//     int marks[5]={99,100,54,36,88};
//     marks[0]=101;               //changing marks of index 0
//     cout<<marks[0]<<endl;
//     cout<<marks[1]<<endl;
//     cout<<marks[2]<<endl;
//     cout<<marks[3]<<endl;
//     cout<<marks[4]<<endl;

//     return 0;
// }


// Loops on Array


// #include<iostream>
// using namespace std;
// int main(){
//     int marks[5]={99,100,54,36,88};
//                                   // cout<<sizeof(marks)/sizeof(int)<<endl;
//      int size=5;
//      for(int i=0;i<size;i++){
//         cout<<marks[i]<<endl;;
//      }                             
// }


//  #include<iostream>
// using namespace std;
// int main(){
//                                   // cout<<sizeof(marks)/sizeof(int)<<endl;
//      int size=5;
//      int marks[size];
//      for(int i=0;i<size;i++){
//         cin>>marks[i];
//      }   
//       for(int i=0;i<size;i++){
//         cout<<marks[i]<<endl;;
//      }                        
// }




// Find smallest / Largest in Array

// #include<iostream>
// using namespace std;
// int main(){
//     int nums[]={5,15,22,1,-15,24};
//     int size=6;
//     int smallest = INT32_MAX;
//     int largest= INT32_MIN;
//     for(int i=0;i<size;i++){
//                           // if(nums[i]<smallest){
//                               //     smallest=nums[i];
//                                  // }
//         smallest=min(nums[i],smallest);
//         largest=max(nums[i],largest);
//     }
//     cout<<"Smallest = "<<smallest<<endl;
//      cout<<"Largest = "<<largest<<endl;

// }


// Print index number of both smallest and largest number.

//  #include<iostream>
// using namespace std;
// int main(){
//     int nums[]={5,15,22,1,-15,24};
//     int size=6;
//     int smallestindex=0,largestindex=0;
//     for(int i=0;i<size;i++){
                          
//         if(nums[i]<nums[smallestindex]){
//             smallestindex=i;
//         }
//         if(nums[i]>nums[largestindex]){
//             largestindex=i;
//         }
//     }
//     cout<<"Smallest = "<<smallestindex<<endl;
//      cout<<"Largest = "<<largestindex<<endl;

// }



// PASS BY REFERENCE

// #include<iostream>
// using namespace std;
// void changeArr(int arr[],int size){
//     cout<<"In function\n";
//     for(int i=0;i<size;i++){
//         arr[i]=2*arr[i];
//     }
// }
// int main(){
//     int arr[]={1,2,3};
//     changeArr(arr,3);
//     cout<<"In main\n";
//     for(int i=0;i<3;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
//  }




// LINEAR SEARCH


// #include<iostream>
// using namespace std;
// int linearsearch(int arr[],int n,int target){
//     for(int i=0;i<n;i++){
//         if(arr[i]==target){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[]={4,2,7,8,1,2,5};
//     int n=7;
//     int target=5;
//     cout<<linearsearch(arr,n,target)<<endl;
// }


// REVERSE AN ARRAY

// #include<iostream>
// using namespace std;
// void reversearray(int arr[],int n){
//     int start=0;int end=n-1;
//           while(start<end)
//           {
//             int temp=arr[start];
//             arr[start]=arr[end];
//             arr[end]=temp;             
//         start++;
//         end--;
//           }
// }
// int main(){
//     int arr[]={4,2,7,8,1,2,5};
//     int n=7;
//    reversearray(arr,n);
//    for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//    }
//    cout<<endl;
// }



// HW  1  WAP TO CALCULATE SUM AND PRODUCT OF ALL NUMBERS IN AN ARRAY

// #include<iostream>
// using namespace std;
// void sum_and_prod(int arr[],int n){
//     int sum=0;
//     int prod=1;
//     for(int i=0;i<n;i++){
//         sum +=arr[i];
//         prod *= arr[i];
//     }
//     cout<<"Sum = " <<sum<<endl;
//     cout<<"Product = " <<prod<<endl;
// }
// int main(){
//     int arr[]={1,2,3,4,5};
//     int n=5;
//     sum_and_prod(arr,n);

// }


HW 2 WAF to swap the max and min number of an array

#include<iostream>
using namespace std;
void maxmin(int arr[],int n){
    int minimum=0;
    int maximum=0;
    for(int i=1;i<n;i++)
    {
        if(arr[minimum]>arr[i]){
            minimum=i;
        }
          if (arr[i] > arr[maximum]) {
            maximum = i;
        }
    }
    cout<<"\nMinimum : "<<arr[minimum]<<endl;
    cout<<"\nMaximum : "<<arr[maximum]<<endl;


    int temp=arr[minimum];
    arr[minimum]=arr[maximum];
    arr[maximum]=temp;

   cout<<"\nAfter swapping array :";
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }

 cout<<endl;
}

int main(){
    int arr[]={4,6,2,9,1};
    int n=5;
     cout<<"\nBefore swapping array :";
    for(int i=0;i<n;i++){
    cout <<arr[i]<<" ";
    }
    maxmin(arr,n);
}



// HW 3 WAF to print all the unique values

