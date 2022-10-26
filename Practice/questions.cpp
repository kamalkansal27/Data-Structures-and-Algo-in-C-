// Q1
/*#include<iostream>
using namespace std;

int main(){

    int r,c;
    cout<<"Enter the No. of Rows- ";
    cin>>r;
    cout<<"Enter the No. of Columns- ";
    cin>>c;
    
    int i,j;
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}*/

// Q2
/*#include<iostream>
using namespace std;

int main(){

    
    int r,c;
    cout<<"Enter the No. of Rows- ";
    cin>>r;
    cout<<"Enter the No. of Columns- ";
    cin>>c;

    int i,j;
    for(i=1;i<=r;i++){
        for(j=1;j<=c;j++){
            if(i==1 || i==r){
                cout<<"* ";
            }
            else if(j==1 || j==c){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }   


    return 0;
}*/
// Q3
// WAP to print number divisible by 2 and 3 in range from a to b

/*#include<iostream>
using namespace std;
int main(){

    int a,b;
    cout<<"Enter the Upper Limit- ";
    cin>>a;
    cout<<"Enter the Lower Limit- ";
    cin>>b;
    int i,j;
    for(i=a;i<=b;i++){
        if(i%2==0 && i%3==0){
            cout<<i<<" ";
        }
    }
    return 0;
}*/
// Q4
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Given Number- ";
    cin>>n;

    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }


    return 0;
}*/

// Q5
/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }


    return 0;
}*/

// Q6
/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }

    return 0;
}*/

// Q7
/*#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}*/

// Q8
/*#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count = count + 1;
        }cout<<endl;
    }

    return 0;
}*/

// Q9
// to check whether the given number is prime or not.

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool isit = 0;
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"Non Prime"<<endl;
            isit = 1;
            break;
        }
    }if(isit==0){
        cout<<"Prime"<<endl;
    }
    return 0;
}*/

// Q10
// to reverse a given number.

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number- ";
    cin>>n;
    int reverse = 0;
    while(n>0){
        int lastdigit;
        lastdigit=n%10;
        reverse = reverse*10 + lastdigit;
        n=n/10;
    }cout<<"Reversed Number- ";
    cout<<reverse<<endl;
    return 0;
}*/

// Q11
// To Check whether the given number is armstrong or not.

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number- ";
    cin>>n;
    int k=n;
    int sum = 0; 
    while(n>0){
        int remainder;
        remainder=n%10;
        sum = sum + remainder*remainder*remainder;
        n=n/10;
    }if(sum == k){
        cout<<"Yes,It is a Armstrong number."<<endl;
    }else{
        cout<<"No, It is not a Armstrong number"<<endl;
    }
    return 0;
}*/

// Q12
// To find the factorial of the given number.
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number-";
    cin>>n;
    int factorial=1;
    for(int i=n;i>=2;i--){
        
        factorial=factorial*i;
    }cout<<factorial<<endl;
    return 0;
}*/

// Q13
// WAP to program to check the give number contain six or not.
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number- ";
    cin>>n;
    
    int lastdigit;
    while(n>0){
        lastdigit = n%10;
        if(lastdigit == 6){
            cout<<"Yes"<<endl;
            break;
        }
        n = n/10;
    }if(lastdigit != 6){
        cout<<"No"<<endl;
    }
    return 0;
}*/

// Q14
//To check whether the given two numbers contain 6 or not.
/*#include<iostream>
using namespace std;

bool find(int a){
    int lastdigit;
    while(a>0){
        lastdigit = a%10;
        if(lastdigit == 6){
            return true;
            break;
        }
        a = a/10;
    }if(lastdigit != 6){
        return false;
    }
}
 
int main(){
    int a,b;
    cout<<"Enter the Two numbers.- ";
    cin>>a>>b;
    
    if(find(a) && find(b)){
        cout<<"Yes , Present in both numbers."<<endl;
    }
    else{
        cout<<"Not Present in Both the Numbers."<<endl;
    }
    return 0;
}*/

// Q15
// Choclate problem.
/*#include<iostream>
using namespace std;
int main(){

    int ruppees;
    cout<<"Enter the Amount- ";
    cin>>ruppees;
    
    int choc_count = 0;

    for(int i=1;i<=ruppees;i++){
        choc_count = choc_count + 1;
        if(i%3==0){
            choc_count = choc_count + 1;
        } 
    }cout<<"Choclates , You get will be - "<<choc_count<<endl;

    return 0;
}*/

// Q16
// mx till i
/*#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int n;
    cout<<"Size of Array- ";
    cin>>n;

    int arr[n];
    for( int i=0; i<n ; i++){
        cin>>arr[i];
    }

    int mx = -19999;
    for(int i=0; i<n; i++){
        mx = max(mx,arr[i]);
        cout<<mx<<" ";
    }

    return 0;
}*/

// Q17
//WAP to Obtain the sum of all subarrays in an array.

/*#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Size of Array- ";
    cin>>n;
 
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum = 0;
  
    for(int i=0;i<n;i++){
        sum = 0;
        for(int j=i;j<n;j++){
            sum += arr[j];
            cout<<sum<<endl;
        }
    }

    return 0;
}*/

// Q18
/*#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"No. of Days- ";
    cin>>n;

    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                continue;
            }
        }
    }

    return 0;
}*/

// Q19
/*#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

    // Convert into the Uppercase.
    // string k;
    // getline(cin,k);

    // for(int i=0;i<k.size();i++){
    //     if(k[i]>='a' && k[i]<='z'){
    //         k[i] = k[i] - 32;
    //     }
    // }
    // cout<<k<<endl;   

    // Convert into the lower case
    string k;
    getline(cin,k);

    for(int i=0;i<=k.size();i++){
        if(k[i]>='A'&& k[i]<='Z'){
            k[i] = k[i] + 32;
        }
    }
    cout<<k<<endl;

    return 0;
}*/

// Q20
/*#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string k;
    getline(cin,k);

    sort(k.begin(),k.end(),greater<int>());

    cout<<k<<endl;

    return 0;
}*/
// Seive of Eratosthenes.

// Q21
/*#include<iostream>
using namespace std;

void primesieve(int n){
    int prime[100] = {0};
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]==1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }cout<<endl;
}

int main(){

    int n;
    cin>>n;

    primesieve(n);

    return 0;
}*/

// Q22
// How many numbers are divisible by 5 or 7 between the given range.
/*#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int count5 = 0 , count7 = 0 , countboth = 0;

    for(int i = 1 ; i <= n ; i++){
        if(i % 5 == 0){
            count5 += 1;
        }
    }

    for(int i = 1 ; i <= n ; i++){
        if(i % 7 == 0){
            count7 += 1;
        }
    }

    for(int i = 1 ; i <= n ; i++){
        if(i % 5 == 0 && i % 7 == 0){
            countboth += 1;
        }
    }

    int ans = count5 + count7 - countboth;
    cout<<ans<<endl;

    return 0;
}*/

// Q23
// To find the Greatest common factor of the given numbers.[H.c.f]
/*#include<iostream>
using namespace std;

int hcf(int a , int b){
    while(b != 0){
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main(){

    int a;
    cin>>a;

    int b;
    cin>>b;

    int t = hcf(a,b);
    cout<<t<<endl;
    return 0;
}*/
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2 
// 1

// Q24
/*#include<iostream>
using namespace std;
int main(){
 
    int n;
    cin>>n;

    for(int i = 0 ; i < n ; i++){
        for(int j = 1 ; j <= n - i  ; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}*/
// 1
// 0 1 
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

// Q25
/*#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    for(int i = 1 ; i <=n ; i++){
        for(int j = 1 ; j <=i ; j++){
            if((i+j) % 2 == 0){
                cout<<"1"<<" ";
            }
            else{
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}*/

// Q26
// To print the Rhombus pattern.
/*#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n-i ; j++){
            cout<<" "<<" ";
        }
        for(int k = 1 ; k <= n ; k++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    return 0;
}*/
// Q27
// Number pattern.
/*#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n; 

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1; j <= n-i ; j++){
            cout<<" ";
        }
        for(int k = 1; k <= i ; k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }

    return 0;
}*/

// Q28 - To print the star pattern.
/*#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}*/
//Q29- To print the ZIG - ZAG pattern.
/*#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    for(int i=1;i<=3;i++){
        for(int j=1;j<=n;j++){
            if( (i+j)%4 == 0){
                cout<<"*";
            }
            if( i == 2 && j % 4 == 0){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}*/
// Q30- To convert the decimal number into binary number.
/*#include<iostream>
using namespace std;

int decimalTobinary(int n){
    int ans = 0;
    while(n/2 > 0){
        int remainder = n%2;
        ans = ans*10 + remainder;
        n = n/2; 
    }
    return ans; 
}

int main(){

    int n;
    cin>>n;

    cout<<decimalTobinary(n)<<endl;

    return 0;
}*/
// Q31 - To convert the Binary numbers to Decimal.
#include<iostream>
using namespace std;

int BinaryToDecimal(int n){
    int k = 1;
    int ans = 0;
    while(n>0){
        int lastdigit = n%10;
        int y = lastdigit*k;
        k = k*2;
        ans = ans + y;
        n = n/10;
    }
    return ans;
}

int main(){
    
    // int n;
    // cin>>n;

    string s = "1";

    cout<<BinaryToDecimal(to_string(atoi()))<<endl;

    return 0;
}
// Q32 - Convert Octal to Decimal.
/*#include<iostream>
using namespace std;

int OctalToDecimal(int n){
    int k = 1;
    int ans = 0;
    while(n>0){
        int lastdigit = n%10;
        int y = lastdigit*k;
        k = k*8;
        ans = ans + y;
        n = n/10;
    }
    return ans;
}

int main(){
    
    int n;
    cin>>n;

    cout<<OctalToDecimal(n)<<endl;

    return 0;
}*/
// #include<bits/stdc++.h> - It consists of all the header file.
// Q33- Factorial of a number using recursion.
/*#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==1){
        return 1;
    }

    return n*fact(n-1);
}

int main(){

    int n;
    cin>>n;

    cout<<fact(n)<<endl;

    return 0;
}*/

// Q34 - To find Max till i.
/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            arr[i] = arr[i-1];
        }
        
        
    }

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    cout<<endl;
    
    return 0;
}*/

// Q35 - To Reverse an array.

// #include<iostream>
// using namespace std;

// int main()
// {

    // 1st Approach
    /*int n;
    cin>>n;
    
    int arr[n];
    int num = 0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        num = num*10 + arr[i];
    }

    int idx = 0;
    while(num > 0)
    {
        int lastdigit = num % 10;
        arr[idx] = lastdigit;

        idx ++;
        num = num / 10;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;*/

    // 2nd Approach
    /*int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int s = 0, e = n-1;
    while(s<e)
    {
        // swapping
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;

        s++;
        e--;
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;*/

    // return 0;
// }

//Ques36-  To merge two sorted arrays.

/*#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr1[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }

    int m;
    cin>>m;

    int arr2[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }

    int arr3[m+n];
    int s1 = 0, s2 = 0, idx = 0;

    while(s1 < n && s2 < m)
    {
        if(arr1[s1] < arr2[s2])
        {
            arr3[idx] = arr1[s1];
            s1++ ;
            idx++ ;
        }      
        else
        {
            arr3[idx] = arr2[s2];
            s2++ ;
            idx ++ ;
        } 
    }
    while(s1 < n)
    {
        arr3[idx] = arr1[s1];
        s1++ ;
        idx++ ;
    }
    while(s2 < m)
    {
        arr3[idx] = arr2[s2];
        s2++;
        idx ++;
    }

    for(int i=0;i<m+n;i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;

    return 0;
}*/

// Ques37 - To move all zeros to the rightmost side of the array.
/*#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int i = 0;
    for(int j=0;j<n;j++)
    {
        if(arr[j] != 0)
        {
            // swap
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;

            i++;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
*/
// Ques38 - To rotate the array - to move the every element of array k times.
/*#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans[n];

    int k;
    cin>>k;

    for(int i=0;i<n;i++)
    {
        int j = (i+k) % n;
        ans[j] = arr[i];        
    }
    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}*/
// Ques39  - To Add Arrays
// {1,2,3,4}
    //   {6}
// {1,2,4,0}      

/*#include<iostream>
using namespace std;
 
int main()
{
    int n,m;
    cin>>n>>m;

    int arr1[n], arr2[m];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }

    int i=n-1, j=m-1, ans;
    while(i > 0 || j > 0)
    {
        
    }

    return 0;
}*/

/*

// Ques 40- To chech how many digit of the interger can divide the same number.

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int num = n;
    int count = 0;

    while(n>0)
    {
        int lastdigit = n%10;
        if(lastdigit != 0 && num % lastdigit == 0)
        {
            count ++;
        }
        n = n/10;
    }
    
    cout<<count<<endl;

    return 0;
}*/