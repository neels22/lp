
#include <iostream>
using namespace std;
#define max 30


int main()
{
    cout<<"Hello World";
    int i,j,n,bt[max],wt[max],tt[max];
    float awt=0 ,att=0;//avg wainting and turnaround time
    cout<<"enter the number of process:";
    cin>>n;
    cout<<"\nenter the burst time of the process:\n";
    for(int i=0;i<n;i++){
        cin>>bt[i];
    }
    cout<<"process\t burst time \t waiting time\t turnaround time \n";
    
    for(int i=0;i<n;i++){
        wt[i]=0;
        tt[i]=0;
        for(int j=0;j<i;j++ ){
            wt[i]=wt[i]+bt[j];
        }
        tt[i]=wt[i]+bt[i];
        awt = awt +wt[i];
        att =att + tt[i];
        cout<<i+1 <<"\t"<<bt[i] <<"\t\t"<<wt[i] <<"\t\t"<<tt[i]<<"\n";
    }
    awt =awt/n;
    att=att/n;
    cout<<"\naverage waiting time\n"<<awt;
    cout<<"\naverage turnaround time\n"<<att;
    return 0;
}






