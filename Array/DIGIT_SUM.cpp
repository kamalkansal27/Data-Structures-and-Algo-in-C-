#include<iostream>
using namespace std;

class kamal{
    long int k;
    public:
    int sum(long int n){
    k = 0;
    while(n>0){
        int lastdigit = n % 10;
        k += lastdigit;
        n = n/10;
    }    
    cout<<k<<endl;
    return k;
    }
};

int main(){

    kamal k1;
    k1.sum(6565);
    k1.sum(97793);

    return 0;
}