/*#include<iostream>
using namespace std;

void findwaitingtime(int process[], int n, int bt[], int wt[], int at[])
{
    int service_time[n];
    service_time[0] = at[0];
    wt[0] = 0;

    for(int i=1;i<n;i++)
    {
        service_time[i] = service_time[i-1] + bt[i-1];
        wt[i] = service_time[i]-at[i];

        if(wt[i] < 0) wt[i] = 0;
    } 
}
void findturnaroundtime(int process[], int n, int bt[], int wt[], int tat[])
{
    for(int i=0;i<n;i++)
    {
        tat[i] = bt[i] + wt[i];
    }
}

// times.
void findavgTime(int processes[], int n, int bt[], int at[])
{
    int wt[n], tat[n];
 
    // Function to find waiting time of all processes
    findwaitingtime(processes, n, bt, wt, at);
 
    // Function to find turn around time for all processes
    findturnaroundtime(processes, n, bt, wt, tat);
 
    // Display processes along with all details
    cout << "Processes " << " Burst Time " << " Arrival Time "
         << " Waiting Time " << " Turn-Around Time "
         << " Completion Time \n";
    int total_wt = 0, total_tat = 0;
    for (int i = 0 ; i < n ; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        int compl_time = tat[i] + at[i];
        cout << " " << i+1 << "\t\t" << bt[i] << "\t\t"
             << at[i] << "\t\t" << wt[i] << "\t\t "
             << tat[i]  <<  "\t\t " << compl_time << endl;
    }
 
    cout << "Average waiting time = "
         << (float)total_wt / (float)n;
    cout << "\nAverage turn around time = "
         << (float)total_tat / (float)n;
}
 
// Driver code
int main()
{
    // Process id's
    int processes[] = {1, 2, 3};
    int n = sizeof processes / sizeof processes[0];
 
    // Burst time of all processes
    int burst_time[] = {5, 9, 6};
 
    // Arrival time of all processes
    int arrival_time[] = {0, 3, 6};
 
    findavgTime(processes, n, burst_time, arrival_time);
 
    return 0;
}*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of processes : ";
    cin>>n;

    int bt[20], ao[20], total_wt = 0, total_tat = 0, wt[20], tat[20], p[20]; 

    for(int i=0;i<n;i++)
    {
        cout<<"Process["<<i+1<<"]"<<endl;
        
        cout<<"Enter the Burst time : ";
        cin>>bt[i];

        cout<<"Enter the arrival order : ";
        cin>>ao[i];

        p[i] = i+1;
    }
    wt[0] = 0;
    x
}