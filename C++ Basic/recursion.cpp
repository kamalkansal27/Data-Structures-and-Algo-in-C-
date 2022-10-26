// To find the sum of number in range 1 to n.
/*#include<iostream>
using namespace std;

int sum(int n){

    if(n == 0){
        return 0;
    }

    int prevsum = sum(n-1);
    return n + prevsum;
}

int main(){

    int n;
    cin>>n;
    cout<<sum(n)<<endl;

    return 0;
}*/
// To find multiply n , p times.

/*#include<iostream>
using namespace std;

int power(int n,int p)
{
    if(p==0)
    {
        return 1;
    }

    int prevpower = power(n,p-1);
    return n*prevpower;
}

int main()
{
    int n;
    int p;
    cin>>n>>p;

    cout<<power(n,p)<<endl;

    return 0;
}*/
// to find the factorial of a given number.
/*#include<iostream>
using namespace std;

int fact(int n){
   
    if(n == 0){
        return 1;
    }

    int kamal = fact(n-1);
    return n*kamal;
}

int main()
{
    int n;
    cin>>n;

    cout<<fact(n)<<endl;

    return 0;
}*/

// To find the nth fibonacci number.
#include<iostream>
using namespace std;

int fib(int n){

    if(n==0){
        return 0;
    }
    
    if(n==1){
        return 1;
    }

    return fib(n-1) + fib(n-2);
}

int main()
{
    int n;
    cin>>n;

    cout<<fib(n)<<endl;

    return 0;
}
// To check whether the given array is sorted or not.
/*#include<iostream>
using namespace std;

bool sort(int arr[] , int n)
{
    if(n == 1)
    {
        return true;                       // 1 2 3 4 5
    }
    
    bool nxtarray = sort(arr+1 , n-1);
    return arr[0] < arr[1] && nxtarray;
}

int main()
{

    int n;
    cin>>n;

    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    if(sort(arr , n)){
        cout<<"Sorted"<<endl;
    }
    else{
        cout<<"Not Sorted"<<endl;
    }

    return 0;
}*/

// To Print the numbers till n.

/*#include<iostream>
using namespace std;

// Decreasing order.

// int print(int n)
// {
//     if(n == 1){
//         return 1;
//     }

//     cout<<n<<" ";
//     int prevnum = print(n-1);
//     return prevnum;
// }

// Increasing order.

int print(int n){
    
    if(n == 1){
        return 1;
    }
    
    print(n-1);
    return n;
}

int main(){

    int n;
    cin>>n;

    cout<<print(n)<<endl;

    return 0;
}*/

// to check the sorted array.

/*#include<iostream>
using namespace std;

bool sort(int arr[] , int n ){
    
    if(n == 1){
        return true;
    }
    else{
        if(arr[0]<arr[1]){
            return sort(arr+1 , n-1);
        }
    }
    return false;
}

int main(){
    
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    if(sort(arr , n)){
        cout<<"Sorted"<<endl;
    }
    else{
        cout<<"Not Sorted"<<endl;
    } 


    return 0;
}*/

// To determine the first and last occurence of the number in the array.
/*#include<iostream>
using namespace std;

int firstocc(int arr[] , int n , int key , int i){
    if(i==n){
        return -1;
    }
    if(arr[i] == key){
        return i;
    }
    return firstocc(arr , n , key , i+1);
}

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<<firstocc(arr , n , key , 0)<<endl;

    return 0;
}*/
// To Reverse a String.
/*#include<iostream>
using namespace std;

void reverse(string kamal){
    if(kamal.length() == 0){
        return;
    }
    string ros = kamal.substr(1);
    reverse(ros);
    cout<<kamal[0];
}

int main(){

    reverse("Kamal");
    cout<<endl;

    return 0;
}*/
// To Replace pi with 3.14.
/*#include<iostream>
using namespace std;

void replace(string s){
    if(s.length() == 0){
        return;
    }
    if(s[0] == 'p' && s[1] == 'i'){
        cout<<"3.14";
        replace(s.substr(2));
    }
    if(s[0] != 'p' || s[1] != 'i'){
        cout<<s[0];
        replace(s.substr(1));
    }
    
}


int main(){

    string k;
    cin>>k;

    replace(k);

    return 0;
}*/
// To remove the duplicates from the string.
/*#include<iostream>
using namespace std;

string duplicate(string s){
    if(s.length() == 0){
        return "";
    }
    char ch = s[0];
    string k = duplicate(s.substr(1));

    if(ch == k[0]){
        return k;
    }
    else{
        return ch+k;
    }
}

int main(){

    string k;
    cin>>k;

    cout<<duplicate(k)<<endl;

    return 0;
}*/
// To move the X to the end of the string.
/*#include<iostream>
using namespace std;

string move(string s){
    if(s.length() == 0){
        return "";
    }
    char ch = s[0];
    string ans = move(s.substr(1));

    if(ch == 'x'){
        return ans+ch;
    }
    return ch+ans;
}

int main(){

    string s;
    cin>>s;

    cout<<move(s)<<endl;

    return 0;
}*/
// To Generate a substrings from the string(2^n).
/*#include<iostream>
using namespace std;

void subseq(string s , string ans){

    if(s.length() == 0){
        cout<<ans<<endl;
        return ;
    }

    char ch = s[0];
    string ros = s.substr(1);

    subseq(ros,ans);
    subseq(ros,ans+ch);
}

int main(){

    string k;
    cin>>k;

    subseq(k,"");

    return 0;
}*/
// To Generate the substrings from the string with the asciii code.
/*#include<iostream>
using namespace std;

void subseq(string s , string ans){
    if(s.length() == 0){
        cout<<ans<<endl;
        return ;
    }
    char ch = s[0];
    string ros = s.substr(1);
    int code = ch;

    subseq(ros , ans);
    subseq(ros , ans + ch);
    subseq(ros , ans + to_string(code));
}

int main(){

    subseq("AB" , "");

    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;

int Add(int n)
{
    if(n==6)
    {
        return 0;
    }
    return n+Add(n+1);
}
int substraction(int n)
{
    static int temp = n-2;
    if(n == temp)
    {
        return 0;
    }
    return n - substraction(n-1);
}

int main()
{
    cout<<Add(1)<<endl;
    cout<<substraction(100)<<endl;

    return 0;
}*/