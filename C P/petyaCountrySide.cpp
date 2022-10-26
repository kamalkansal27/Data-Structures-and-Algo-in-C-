#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i,j,k;
    
    int count,max=0;
    for(i=0;i<n;i++)
    {
        count=1;

        k=i;
        for(j=i-1;j>=0;j--)
        {
            if(a[j]<=a[k])
                count++;
            else
                break;

            k--;
        }

        k=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<=a[k])
                count++;
            else
                break;

            k++;
        }

        if(max<count)
            max=count;

    }

    cout<<max;

    return 0;
}