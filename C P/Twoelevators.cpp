#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int a, b, c;
        cin>>a>>b>>c;

        // Determine where is the first and second elevator.
        int firstElevator, seconElevator;
        firstElevator = a;
        seconElevator = b;

        // Determine time for first elevator.
        int time1 = abs(firstElevator - 1);

        // Determine time for second elevator.
        int time2 = abs(seconElevator - c) + abs(c - 1);

        if(time1 == time2) cout<<3<<endl;
        else if(time1 > time2) cout<<2<<endl;
        else cout<<1<<endl;
    }

    return 0;
}