// to take a input in array 
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the Index- "<<i<<"- ";
        cin>>array[i];
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}*/
// To print the maximum or minimum number of an array.
/*#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(array[i]>max){
            max=array[i];
        }
        if(array[i]<min){
            min = array[i];
        }
    }cout<<max<<" "<<min<<endl;
    return 0;
}*/
// Linear Search
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Size of array- ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int k;
    cout<<"Enter the Number you wanna find- ";
    cin>>k;
    int i;
    for(i=0;i<n;i++){
        if(array[i] == k){
            cout<<"Found in Index- "<<i<<endl;
            break;
        }
    }if(i==n){
        cout<<"Not Found"<<endl;
    }
    return 0;
}*/
// Sorting of an array.
/*#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Size of an array- ";
    cin>>n;

    int arr[n];

    for(int i = 0;i < n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++){
        for(int j= i+1;j<=n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";        
    }
    return 0;
}*/

//2d array

/*#include<iostream>
using namespace std;
int main(){

    int n,m;
    cin>>n>>m;

    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Matrix is- \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}*/
// searching an element in the matrix.
/*
#include<iostream>
using namespace std;
int main(){

    int n,m;
    cout<<"Enter the number of rows and columns respectively - ";
    cin>>n>>m;

    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int x;
    cout<<"Enter the element you wanna search - ";
    cin>>x;
    
    int i;
    int j;
    
    bool flag = false;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i][j] == x){
                flag = true;
                cout<<i<<" "<<j<<endl;
            }
        }
    }
    if(flag){
        cout<<"Element Found"<<endl;    
    }
    else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}*/
// WAP a program to print the matrix in the spiral order.

/*#include<iostream>
using namespace std;
int main(){

    int n,m; 
    cin>>n>>m;

    int arr[n][m];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
 
    //spiral order print.

    int col_start = 0 , col_end = m-1 , row_start = 0 , row_end = n-1;
    while(row_start<=row_end && col_start<=col_end){
        
        //For row_start
        for(int col = col_start;col<=col_end;col++){
            cout<<arr[row_start][col]<<" ";
        }row_start++;

        //For colmn_end
        for(int row = row_start;row<=row_end;row++){
            cout<<arr[row][col_end]<<" ";
        }col_end--;

        //For row_end
        for(int col = col_end;col<=col_start;col--){
            cout<<arr[row_end][col]<<" ";
        }row_end--;

        //For col_start
        for(int row = row_end;row<=row_start;row++){
            cout<<arr[row][col_start]<<" ";
            col_start++;
        }

    }   

    return 0;
}*/

// Transpose of a Square matrix.
/*#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Order of the Square matrix- ";
    cin>>n;

    int arr[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            //Swapping Code
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    
    cout<<"Transpose is - "<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}*/


// Multiplication of Matrices.
// No. of Col in first matrix = No. of Rows in Second matrix.

/*#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;

    int m1[n1][n2];
    int m2[n2][n3];

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
            cin>>m1[i][j];
    }

    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n3;j++)
            cin>>m2[i][j];
    }


    int ans[n1][n3];
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
            ans[i][j] = 0;
    }

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            for(int k=0;k<n2;k++){
                ans[i][j] += m1[i][k]*m2[k][j];
            }
        }
    }

    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;    
    }

    return 0;
}*/
//Searching an element in an array.
/*
#include<iostream>
using namespace std;
int main(){
     
    int n,m;
    cin>>n>>m;

    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }    

    int target;
    cin>>target;

    bool found = false;
    int r = 0,c = m-1;
    while(r<n and c>=0){
        if(arr[r][c] == target){
            return true;
        }
        if(arr[r][c]>target){
            c--;
        }
        else{
            r++;
        }
    }

    if(found){
        cout<<"Element Found"<<endl;
    }
    else{
        cout<<"Element Not Found"<<endl;
    }
    return 0;
}*/

// Chracter array
/*#include<iostream> 
using namespace std;
int main(){

    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    // check palindrome.

    bool check = true;
    for(int i=0;i<n;i++){
        if(arr[i] != arr[n-1-i]){
            check = false;
            break;
        }
    }

    if(check){
        cout<<"It is a Palindrome."<<endl;
    }
    else{
        cout<<"It is not a Palindrome."<<endl;
    }

    return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();

    int i = 0;
    int currlen = 0;
    int maxlen = 0;

    while(1){

        if(arr[i] == ' ' || arr[i] == '\0'){
            if(currlen>maxlen){
                maxlen = currlen;   
            }
            currlen = 0;
        }
        
        else{
            currlen++;
        }
        
        if(arr[i] == '\0'){
            break;
        }

        i++;
    }

    cout<<maxlen<<endl;

    return 0;
}*/
