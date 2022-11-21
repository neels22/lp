
#include <iostream>

using namespace std;

int main()
{
    cout<<"Hello World";
    
    int i,j,n,qt,count=0,temp,sq=0,bt[30],wt[30],tt[30],rem_bt[20];
    float awt=0,att=0;
    
    cout << "enter the number of process:";
    cin >> n;
    
    
    cout << "\nenter the burst time of the process:\n";
    for (int i = 0; i < n; i++)
    {
       cin >> bt[i];
       rem_bt[i]=bt[i];
    }
    
    
    cout<<"enter quantum time:\n";
    cin>>qt;
    
    
    while(1)
    {
        for(i=0,count=0;i<n;i++)
        {
            temp=qt;
            if(rem_bt[i]==0)
            {
                count++;
                continue;
            }
            if(rem_bt[i]>qt)
            {
                rem_bt[i]=rem_bt[i]-qt;
            }
            else
            {
                if(rem_bt[i]>=0)
                {
                    temp=rem_bt[i];
                    rem_bt[i]=0;
                }
            }
            
                sq=sq+temp;
                tt[i]=sq;
        }
        
        if(n==count)
        break;
    }
    
      cout << "process\t burst time \t turnaround time\t waiting time \n";
     
      for(i=0;i<n;i++)
      {
          wt[i]=tt[i]-bt[i];
          awt=awt+wt[i];
          att=att+tt[i];
          cout<<i+1 <<"\t"<<bt[i] <<"\t\t"<<tt[i] <<"\t\t"<<wt[i]<<"\n";
      }
    awt =awt/n;
    att=att/n;
    cout<<"\naverage waiting time\n"<<awt;
    cout<<"\naverage turnaround time\n"<<att;
    return 0;
}
