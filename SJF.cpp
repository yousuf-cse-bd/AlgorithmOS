//@Author: Muhammad Yousuf Ali
//@Since: 20 November 2019

#include <iostream>
using namespace std;

int main(void)
{
    int n,i,j, totalWaitingTime;

    double awt = 0;

    cout<<"Enter Process Number Nth = ";
    cin>>n;

    int burstTime[n];
    int waitingTime[n];
    int turnArroundTime[n];
    int process[n];

    cout<<"\nEnter Processes Below:"<<endl;
    for(i = 0; i<n;i++)
    {
        cout<<"P:";
        cin>>process[i];
    }

    cout<<"\nInput BurstTime Below:"<<endl;
    for(i = 0; i<n; i++)
    {
        cout<<"P"<<i+1<<":";
        cin>>burstTime[i];
    }

    for(i = 0; i<n-1; i++)
    {
        for(j = i+1; j<n; j++)
        {
            if(burstTime[i]>burstTime[j])
            {
                int tmpBurstTime = burstTime[i];
                burstTime[i] = burstTime[j];
                burstTime[j] = tmpBurstTime;

                swap(process[i],process[j]);
            }
        }
    }


    totalWaitingTime = 0;

    cout<<"\n\nProcess\tBurstTime\tWaitingTime"<<endl;
    for(i = 0; i<n ; i++)
    {
        waitingTime[0] = 0;
        waitingTime[i+1] = waitingTime[i] + burstTime[i];
        cout<<"P"<<process[i]<<"\t"<<burstTime[i]<<"\t\t"<<waitingTime[i]<<endl;
       totalWaitingTime = totalWaitingTime + waitingTime[i];
    }

    cout<<"\nTotal Waiting Time = "<<totalWaitingTime<<endl;
    awt = (double)totalWaitingTime / (double)n;
    cout<<"Average Waiting Time = "<<awt<<endl;

    return 0;
}
