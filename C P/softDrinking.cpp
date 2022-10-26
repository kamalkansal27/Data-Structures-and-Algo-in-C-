#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, bottle, litre, limes, slices, salt, reqlitre, reqsalt;
    cin>>n>>bottle>>litre>>limes>>slices>>salt>>reqlitre>>reqsalt;

    int totalLitre = bottle * litre;
    int toastLitre = totalLitre/reqlitre;

    int toastslice = (limes* slices);

    int toastSalt = salt / reqsalt;

    int ans = min(toastLitre, min(toastslice, toastSalt));
    cout<<ans/n<<endl;

    return 0;
}