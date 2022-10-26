/*#include<bits/stdc++.h>
using namespace std;

int main(){

    // Bitwise And operator(&) - Multiplication .
    int a = 5 , b = 10; // 5 - 101 , 10 - 1010
    int c = a & b;      // 1 0 1
    cout<<c<<endl;      // 1 0 1 0 
                        // 0 0 0 0

    // Bitwise OR operator(|) - Addition.
    int h = 5 , d = 10;
    int e = a | b;
    cout<<e<<endl;

    // Bitwise XOR operator(^)
    int n1 = 5 , n2 = 20;
    int n3 = n1 ^ n2;
    cout<<n3<<endl;

    // Right Shift Bitwise Opertor(>>)
    int n4 = 212;
    for(int i=0;i<3;i++){
        cout<<"212 >>"<<i<<" == "<<(212>>i)<<endl;
    }

    // Bitwise Left shift operator(<<)
    cout<<(565<<1)<<endl;

    return 0;


    
}*/

#include<iostream>
using namespace std;

int main(){

    int a = 4, b = 6;

    cout<<"a AND b ->"<<(a&b)<<endl;
    cout<<"a OR b ->"<<(a|b)<<endl;
    cout<<"a NOT b ->"<<(~a)<<endl;
    cout<<"a XOR b ->"<<(a^b)<<endl;

    // left shift means multiply by 2 that number of times.
    cout<<"Left shift - "<<(17<<1)<<endl;

    // Right shift means divide by 2 that number of times.
    cout<<"Right shift - "<<(19>>2)<<endl;

    return 0;
}