
#include <iostream>

using namespace std;

int main()
{
    cout<<"Hello World";
    
    int i,j,n,pos,count=0,temp,bt[30],wt[30],tt[30],pr[20];
    float awt=0,att=0 ;
    
    cout << "enter the number of process:";
    cin >> n;
    
    
    
    cout << "\nenter the burst time of the process:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> bt[i];
    }
    
    
    cout << "\nenter the priority of the process:\n";
    for (int i = 0; i < n; i++)
    {
       cin >> pr[i];
    }
    
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(pr[j]<pr[pos])
            {
                pos=j;
            }
        }
        
        temp=pr[i];
        pr[i]=pr[pos];
        pr[pos]=temp;
        
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
    }
        cout << "process\t burst time \t priority \t waiting time \t turnaround time \n";
        
        for(i=0;i<n;i++)
        {
            wt[i]=0;
            tt[i]=0;
            for(j=0;j<i;j++)
            {
                wt[i]=wt[i]+bt[j];
            }
            tt[i]=wt[i]+bt[i];
            
            awt=awt+wt[i];
            
            att=att+tt[i];
            
            cout<<i+1 <<"\t"<<bt[i]<<"\t\t"<<pr[i]<<"\t\t"<<wt[i] <<"\t\t"<<tt[i]<<"\n";
            

            
            
        }
          
   
    awt =awt/n;
    
    
    att=att/n;
    
    cout<<"\naverage waiting time\n"<<awt;
    
    cout<<"\naverage turnaround time\n"<<att;
    

    return 0;
}
