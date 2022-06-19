#include <iostream>
using namespace std;

int main(void)
{
    int n,i,j;
    double awt = 0;
    cout<<"Enter Process Number: ";
    cin>>n;
    int burstTime[n];
    int priority[n];
    int process[n];
    int waitingTime[n];
    cout<<"\nEnter Processes Below:"<<endl;
    for(i = 0; i<n;i++)
    {
        cout<<"P:";
        cin>>process[i];
    }
    cout<<endl;
    for(i = 0; i<n;i++)
    {
        cout<<"Enter BurstTime for P"<<(i+1)<<": ";
        cin>>burstTime[i];
    }
    cout<<endl;
    for(i = 0; i<n;i++)
    {
        cout<<"Enter Priority for P"<<(i+1)<<": ";
        cin>>priority[i];
    }

    for(i = 0; i<n-1;i++)
    {
        for(j = i+1; j<n;j++)
        {
            if(priority[i]>priority[j])
            {
                swap(priority[i],priority[j]);
                swap(burstTime[i],burstTime[j]);
                swap(process[i],process[j]);
            }
        }
    }
    cout<<"\n\nProcess\tBurstTime\tPriority\tWaitingTime"<<endl;
    for(i = 0 ;i<n;i++)
    {
        waitingTime[0] = 0;
        waitingTime[i+1] = waitingTime[i] + burstTime[i];
        cout<<"P"<<process[i]<<"\t"<<burstTime[i]<<"\t\t"<<priority[i]<<"\t\t"<<waitingTime[i]<<endl;

        awt = awt + waitingTime[i];
    }

    cout<<"\nTotal Waiting Time: "<<awt<<endl;
    cout<<"Average Waiting Time: "<<(awt/n)<<endl;



    return 0;
}
