#include<bits/stdc++.h>
using namespace std;

class kamal
{
    int n, m, sum;
    public:
    int SumDiagonal()
    {
        cout<<"No. of Rows - ";
        cin>>n;
        cout<<"No. of Columns - ";
        cin>>m;
        
        int arr[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }

        sum = 0;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==j)
                {
                    sum += arr[i][j];
                }
            }
        }
        return sum;
    }
};

int main()
{
    kamal k1;
    cout<<k1.SumDiagonal()<<endl;

    return 0;
}