// &(AND) operator

// #include<iostream>
// using namespace std;
// int main(){
//     int a=6,b=10;
//     cout<<(a & b)<<endl;
//     return 0;
// }

// | (OR) operator


// #include<iostream>
// using namespace std;
// int main(){
//     int a=6,b=10;
//     cout<<(a | b)<<endl;
//     return 0;
// }

//  ^ (XOR) Operator


// #include<iostream>
// using namespace std;
// int main(){
//     int a=6,b=10;
//     cout<<(a ^ b)<<endl;
//     return 0;
// }


//  Bitwise << (Left shift operator)

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<(10<<2)<<endl;
//     return 0;
// }


// Bitwise >> (Right shift operator)

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<(10>>1)<<endl;
//     return 0;
// }


// Operator Precendence

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<((5-2)*6)<<endl;
//     return 0;
// }


// GLOBAL SCOPE

// #include<iostream>
// using namespace std;
// int x=10;
// int fun(){
//     cout<<x<<endl;

// }
// int main(){
//     fun();
//     cout<<x<<endl;
// }

// Data Type modifiers

// #include<iostream>
// using namespace std;
// int main(){
//         cout<<sizeof(short int)<<endl;
//     cout<<sizeof(int)<<endl;
//     cout<<sizeof(long int)<<endl;
//         cout<<sizeof(long long )<<endl;

//     return 0;
// }


// HW Figure out how to find if a number is power of 2 with any loop




// #include <iostream>
// using namespace std;

// int main() {
//     int n = 32;  

//     bool isPowerOfTwo = true;  

//     while (n > 1) {
//         if (n % 2 != 0) {  
//             isPowerOfTwo = false;
//             break;
//         }
//         n /= 2;  
//     }

//     if (isPowerOfTwo)
//         cout << "32 is a power of 2" << endl;
//     else
//         cout << "32 is NOT a power of 2" << endl;

//     return 0;
// }


// WAP to reverse an Integer n


// #include<iostream>
// using namespace std;
// int main(){
//     int sum=0;
//      int n=125;
//      while(n>0){
//        int rem=n%10;
//         n=n/10;
//        sum = sum*10+rem;
//      }
// cout<< sum;
        
// }
