/*#include<bits/stdc++.h>
using namespace std;

int main(){

    int a; //declaration
    cout<<"Size of a "<<sizeof(a)<<endl;

    float b;
    cout<<"Size of b "<<sizeof(b)<<endl;

    char c;
    cout<<"Size of c "<<sizeof(c)<<endl;
    
    bool d;
    cout<<"Size of d "<<sizeof(d)<<endl;

    short int si;
    cout<<"Size of si "<<sizeof(si)<<endl;

    long int li;
    cout<<"Size of li "<<sizeof(li)<<endl;

    double db;
    cout<<"Size of db"<<sizeof(db)<<endl;

    return 0 ;
}*/


/*#include<iostream>
using namespace std;

int main(){

    int n1;
    cin>>n1;

    int n2;
    cin>>n2;


    cout<<"Sum is - "<<n1+n2<<endl;

    return 0;
}
*/
//to find the maximum from the three given numbers.

/*#include<iostream>
using namespace std;

int main(){

    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<a<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
    else{
        if(b>c){
            cout<<b<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }

    return 0;
}
*/

// to find whether the number is odd or even 

/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    if(n % 2 == 0){
        cout<<"Even Number"<<endl;
    }
    else{
        cout<<"Odd Number\n";
    }
    return 0;
}*/

// Input a number n and tell whether the number is greater , smaller or equal to 10.

/*#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter Your Number - ";
    cin>>n;

    if(n==10){
        cout<<"Equal"<<endl;
    }
    else if(n>10){
        cout<<"Greater"<<endl;
    }
    else{
        cout<<"Smaller"<<endl;
    }
    return 0;
}*/

// WAP to check whether the number is divisible by 2 & 3 or both or none

/*#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter Your Number- ";
    cin>>n;

    if(n%2==0 && n%3==0){
        cout<<"Both"<<endl;
    }
    else if(n%2==0 || n%3==0){
        if(n%2==0){
            cout<<"Divisible by 2"<<endl;
        }
        else{
            cout<<"Divisible by 3"<<endl;
        }
    }
    if(n%2!=0 && n%3!=0){
        cout<<"Divisible by none."<<endl;
    }
    return 0;
}*/
// POINTERS..

/*#include<iostream>
using namespace std;
int main(){

    int a = 50;                  // a = 50..
    int* aptr = &a;              // aptr[POINTER] = location of the storage of a variable..
                                 // *apter = Nothing but clone of a..           
    cout<<a<<endl;               
    cout<<aptr<<endl; 
    cout<<*aptr<<endl;                
    *aptr = 1000;
    cout<<*aptr<<endl;
    cout<<a<<endl;
    
    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;
int main(){

    // Pointer is the data types which stores the address of the other data types.
    int a = 3;
    int* b = &a;
    
    //Address of operator.
    cout<<"Address of the a is "<<b<<endl;
    cout<<"Address of the a is "<<&a<<endl;

    // Dereference of operator.
    cout<<"Value at address b is "<<*b<<endl;

    // Pointer to Pointer operator.
    int**c = &b;

    cout<<"Address of B is "<<c<<endl;
    cout<<"Address of B is "<<&b<<endl;
    cout<<"Value at address c is "<<*c<<endl;
    cout<<"Value at Address b is "<<**c<<endl;


    return 0;
}
*/
    // Pointers and Arrays..................................................................
#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[3] = {21,22,23};
    int *p = arr;                              
    for(int i=0;i<3;i++){                      
        cout<<p<<" "<<*p<<endl;
        p++;
    }     

    return 0;
}
/*#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;i<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"#";
        }
        cout<<endl;
    }
    
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;

void swappointers(int *a , int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a , b;
    cin>>a>>b;
    cout<<"The Value of a is "<<a<<" The Value of b is "<<b<<endl;
    swappointers(&a , &b);
    cout<<"The Value of a is "<<a<<" The Value of b is "<<b<<endl;

    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;

void swapreference(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x,y;
    cin>>x>>y;

    swapreference(x,y);
    cout<<x<<" "<<y;
    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;

int c = 45; // Here c is the global variable.

int main(){

    int a , b; // Here , a and b are the local variables.
    cin>>a>>b;

    int c = a + b;
    cout<<"The sum of "<<a<<" and "<<b<<" is "<<c<<endl;
    cout<<"The global c is "<<::c<<endl; //if we call only c , it will respond as local variable.

    return 0;
}*/
// ****************************Reference variable*************************
/*#include<bits/stdc++.h>
using namespace std;

int main(){

    // int x = 34;
    // int & y = x; // y is the reference variable of x.
    // cout<<x<<endl;
    // cout<<y<<endl;

    int a = 34;
    int & b = a;
    cout<<a<<endl;
    cout<<b<<endl;

    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;

int main(){
    int b = 220;
    cout<<"The value of b is "<<b<<endl;
    b = 440;
    cout<<"The value of b is "<<b<<endl;

    // ****************************Constants*******************
    const int a = 10; // here we cannot change the value of a like we have changed it above.

    // **************************Manipulators*******************
    // 1. endl(ends the line)                2. setw.
   
    int x = 215 , y = 2262 , z = 40;
    
    cout<<"The value of x without setw is "<<x<<endl;
    cout<<"The value of y without setw is "<<y<<endl;
    cout<<"The value of z without setw is "<<z<<endl;
    
    cout<<"The value of x with setw is "<<setw(4)<<x<<endl;
    cout<<"The value of y with setw is "<<setw(4)<<y<<endl;
    cout<<"The value of z with setw is "<<setw(4)<<z<<endl;

    return 0;
}*/
// ****************************CALL using REFERENCE***********************************
/*#include<bits/stdc++.h>
using namespace std;

void swap(int a , int b){
    int temp = a;
    a = b;
    b = temp;
}

void swappointers(int *a , int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main(){
    int x = 4 , y = 5;
    cout<<"without Pointers, The value of x was "<<x<<" and without Pointers, the value of y was "<<y<<endl;
    swap(x,y);
    cout<<"without Pointers, The value of x is "<<x<<" and without Pointers, the value of y is "<<y<<endl;
    
    cout<<"With Pointers , The value of x was "<<x<<" and With Pointers , the value of y was "<<y<<endl;
    swappointers(&x,&y);
    cout<<"With Pointers , The value of x is "<<x<<" and With Pointers , the value of y is "<<y<<endl;


    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;

 void swapreference(int &a , int &b){
        int temp = a;
        a = b;
        b = temp ;
    }

int main(){
    // int a = 3;
    // int *x = &a;  // int *x is the pointer which is storing the address of a only but we write,
    // *x then it will get dereferenced and give the value stored. if we write only x then it
    // also give the address.
    // cout<<x<<endl;
    // cout<<*x<<endl; 
   
//    int x = 4 , y = 5;

//    cout<<x<<" "<<y<<endl;
//    swapreference(x , y );
//    cout<<x<<" "<<y<<endl;

      int x = 3;
      int &y = x;
      cout<<y<<endl;
      cout<<x<<endl;

       = 5;
      cout<<y<<endl;
      cout<<x<<endl;

    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;

int add(int & a , int & b){
    int c = a + b;  // *a is going to dereference the address given.
    return c;
}

int main(){
 
    // int a = 3;
    // int* b = &a;
    // cout<<a<<endl;
    // cout<<b<<endl;

    int x = 3 , y = 5;

    cout<<add(x,y)<<endl;
     

    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Size of the array is - ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    bool flag = true;

    for(int i=2;i<n;i++){
        if(n%i==0){
            flag = false;
        }

    }

    if(flag = true){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Non Prime."<<endl;
    }

    return 0;
}*/
/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin<<n;

    cout<<(n<<2)<<endl;

    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

void PrintPrime(int a, int b)
{
    int i;
    int j;

    for(i=a;i<=b;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i % j == 0)
            {
                break;
            }
        }
        if(j == i+1)
        {
            cout<<i<<" ";
        }
    }
}

int main()
{
    PrintPrime(1, 10);

    return 0;
}*/
/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    /*int a = 5;
    int *x = &a;

    cout<<x<<endl; // address
    cout<<*x<<endl; // value of x

    int **p = &x;
    cout<<p<<endl; // Address of x.
    cout<<**p<<endl; // value of a.
   
    int *x declare pointer krn da syntax
    x - pointer addreess
    *x -> '*' operator jehra pointer nu defernece kr dinda.
    

    // Searching Number in array.
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[n];
    }

    int key;
    cin>>key;

    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i] == key)
        {
            cout<<"Element Found."<<endl;
            break;
        }
    }
    if(i == n)
    {
        cout<<"Element Not Found."<<endl;
    }



    return 0;
}
// pascal Traingle
/*
1                               0c0              icj
1 1                             1c0 1c1
1 2 1                           2c0 2c1 2c2             fact(2)/ fact(2)* fact(2-2)
1 3 3 1                             fact(2)/fact(1)* fact(2-1)
1 4 6 4 1
*/

/*#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int factorial = 1;
    for(int i=1;i<=n;i++)
    {
        factorial = factorial*i;
    }
    return factorial;
}

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }

    return 0;
}*/