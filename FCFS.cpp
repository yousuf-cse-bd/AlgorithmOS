//@Author: Muhammad Yousuf Ali
//@Since: 16 November 2019

#include <iostream>
using namespace std;

int main(void)
{

    int n,i;
    double awt = 0;
    cout<<"Enter Process Number Here: ";
    cin>>n;

    int burstTime[n];
    int arrivalTime[n];
    int waittingTime[n];
    int ganttChart[n];

    cout<<"Process:\tBurstTime:\tArrivalTime:"<<endl;
    for(i = 0;i<n;i++)
    {
        cout<<i+1<<"\t";
        cin>>burstTime[i];
        cin>>arrivalTime[i];
    }

    cout<<"\n"<<"Pro:BurstTime:ArrivalTime:WaitingTime"<<endl;
    for(i = 0;i<n;i++)
    {
        ganttChart[0] = 0;
        ganttChart[i+1] = ganttChart[i]  +  burstTime[i];
        ///cout<<"GanntChart["<<i<<"]"<<ganttChart[i]<<endl;
        waittingTime[i] = ganttChart[i] - arrivalTime[i];
        cout<<i+1<<"\t"<<burstTime[i]<<"\t"<<arrivalTime[i]<<"\t"<<waittingTime[i]<<endl;
        awt = awt + waittingTime[i];
    }

    cout<<"Total Waiting Time: "<<awt<<endl;
    cout<<"Average Waiting Time: "<<awt/n<<endl;

    return 0;
}
