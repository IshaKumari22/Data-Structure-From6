// DECIMAL TO BINARY

// #include<iostream>
// using namespace std;
// int decToBinary(int decN){
//     int ans=0;
//     int pow=1;
//     while(decN>0){
//        int rem=decN % 2;
//        decN = decN/2;
//        ans += (rem * pow );
//        pow =pow*10;
//     }
//         return ans;
// }
// int main(){
//     int decN=50;
//     for(int i=1;i<=10;i++){

//     cout<<decToBinary(i)<<endl;
//     }
//     return 0;

// }


// BINARY TO DECIMAL

#include<iostream>
using namespace std;
int binTodec(int binN){
    int ans=0;
    int pow=1;
    while(binN>0){
        int rem=binN%10;
        binN/=10;
        ans += pow * rem;
        pow*=2;
        
    }
    return ans;
}
int main(){
    int binN=1010;
    cout<<binTodec(binN)<<endl;
    return 0;
}