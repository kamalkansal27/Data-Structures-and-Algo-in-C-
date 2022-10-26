/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int sum;
    sum = 0;

    int i;
    for(i=1;i<=n;i++){
        sum = sum + i;
    }
    cout<<sum<<endl;
    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){

    for(int i=1;i<=10;i++){
        cout<<"Kamal Kansal"<<endl;
    }

    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    while(n>0){
        cout<<n<<endl;
        cin>>n;
    }
    
    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    do{
        cout<<n<<endl;
        cin>>n;
    }while(n>0);

    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){

    int date;
    int pocketmoney;
    pocketmoney = 1000;

    for(date=1;date<=30;date++){
        if(date%2 == 0){
            continue;
        }
        if(pocketmoney==0){
            break;
        }
        cout<<"GO OUT TOday!"<<endl;
        pocketmoney = pocketmoney - 100;
        
    }

    return 0;
}*/

/*#include<iostream>
using namespace std;

int main(){

    int n;
    for(n=1;n<=100;n++){
        if(n%3==0){
            continue;
        }
        cout<<n<<endl;
    }


    return 0;
}*/

// to check whether the given number is prime or not.

/*#include<iostream>
using namespace std;

int main(){
 
    int n;
    cin>>n;

    int i;

    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"Non Prime."<<endl;
            break;
        }
    }
    if(i==n){
        cout<<"Prime."<<endl;
    }
    return 0;
}*/
// To print all the prime numbers between a and b.

/*#include<iostream>
using namespace std;

int main(){

    int a,b;
    cin>>a>>b;

    int i;
    int j;
    for(i=a;i<=b;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            cout<<i<<endl;
        }
    }

    return 0;
}*/


