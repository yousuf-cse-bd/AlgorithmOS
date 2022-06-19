#include <bits/stdc++.h>
#include <sys/types.h>
#include <unistd.h>
using namespace std;

int main(int argc, char const *argv[])
{
    
    int pid = fork();

    if(pid < 0)
    {
        cout<<"Process Faild!"<<endl;
    }
    else if(pid == 0)
    {
        cout<<"Child Process"<<endl;
        int id;
        id = getpid();
        cout<<"ID = "<<id<<endl;
    }
    else
    {
        cout<<"\nParent Process"<<endl;
        int id;
        cout<<"ID = "<<id<<endl;
    }
    
    return 0;
}
