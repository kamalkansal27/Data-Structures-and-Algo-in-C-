/*#include<iostream>
using namespace std;

int prime(int a,int b){
    int i,j;
    for(i=a;i<=b;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            cout<<i<<" ";
        }
    }return i;
}

int main(){
    int a,b;
    cout<<"Enter the Upper Limit- ";
    cin>>a;
    cout<<"Enter the lower Limit- ";
    cin>>b;    
    prime(a,b);
    return 0;
}*/

// To print the fibonacci series upto n terms.
/*#include<iostream>
using namespace std;

void fib(int n){
    int t1 = 0;
    int t2 = 1;
    for(int i=1;i<=n;i++){
        cout<<t1<<endl;
        int nxtterm = t1+t2;
        t1=t2;
        t2=nxtterm;
    }return;
}

int main(){
    int n;
    cin>>n;
    fib(n);
    return 0;
}*/

/*//To find the nCr of the given variables.
#include<iostream>
using namespace std;

int fact(int n){
    int factorial=1;
    for(int i=n;i>=2;i--){
        factorial = factorial * i;
    }return factorial;
}

int main(){
       int n,r;
       cin>>n>>r;
       int ans = fact(n)/(fact(r)*fact(n-r));
       cout<<ans<<endl;
    return 0;
}*/

// WAP to make a pascal traingle.
/*#include<iostream>
using namespace std;

int fact(int n){
    int factorial=1;
    for(int i=n;i>=2;i--){
        factorial = factorial * i;
    }return factorial;
}

int main(){
    int n;
    cin>>n;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            int pattern = fact(i)/(fact(j)*fact(i-j));
            cout<<pattern<<" ";
        }cout<<endl;
    }
    return 0;
}*/
// to print sum of first n natural numbers..
/*#include<iostream>
using namespace std;

int natural(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum = sum +i;
    }return sum;
}

int main(){
    int n;
    cout<<"Enter the number- ";
    cin>>n;
    cout<<natural(n)<<endl;
    return 0;
}*/

// to check whther a,b,c is a pythagorean triplet or not.

/*#include<iostream>
#include<algorithm>
using namespace std;

bool triplet(int a, int b, int c){
    int x = max(a,max(b,c));
    int y,z;
    if(x==a){
        y=b;
        z=c;
    }
    if(x==b){
        y=a;
        z=c;
    }
    if(x==c){
        y=b;
        z=a;
    }
    if(x*x == y*y + z*z){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if(triplet(a,b,c)){
        cout<<"Yes, it is a pythagorean triplet"<<endl;   
    }
    else{
        cout<<"No, it is not a pythagorean triplet"<<endl;
    }
   
    return 0;
}*/
