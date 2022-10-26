#include<iostream>
using namespace std;

int main()
{
    int bt[20], p[20], wt[20], tat[20], total_wt = 0, total_tat = 0, avg_wt, avg_tat, n, pr[20], pos, temp;

    // Input
    cout<<"Enter the number of processes : ";
    cin>>n;

    cout<<"Enter the Burst time and Priority : "<<endl;;
    for(int i=0;i<n;i++)
    {
        cout<<"Process["<<i+1<<"]"<<endl;
        cout<<"Burst Time : ";
        cin>>bt[i];

        cout<<"Priority : ";
        cin>>pr[i];

        p[i] = i+1;
    }    

    // Sorting
    for(int i=0;i<n;i++)
    {
        pos = i;
        for(int j=i+1;j<n;j++)
        {
            if(pr[j] < pr[pos]) pos = j;
        }
        temp = pr[pos];
        pr[pos] = pr[i];
        pr[i] = temp;

        temp = bt[pos];
        bt[pos] = bt[i];
        bt[i] = temp;

        temp = p[pos];
        p[pos] = p[i];
        p[i] = temp;
    }
    // waiting time
    wt[0] = 0;
    for(int i=1;i<n;i++)
    {
        wt[i] = 0;
        for(int j=0;j<i;j++)
        {
            wt[i] += bt[i];
            total_wt += wt[i];
        }
    }

    // turnaround time
    cout<<"Process "<<" Burst time "<<" waiting time "<< " Priority "<<" turnaround time "<<endl;
    for(int i=0;i<n;i++)
    {
        tat[i] = bt[i] + wt[i];
        cout<<p[i]<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<pr[i]<<"\t\t"<<tat[i]<<endl;

        total_tat += tat[i];
    }

    avg_wt = float(total_wt)/float(n);
    avg_tat = float(total_tat)/float(n);

    cout<<"Average waiting time : "<< avg_wt<<endl;
    cout<<"Average turnaround time : "<<avg_tat<<endl;

    return 0;
}