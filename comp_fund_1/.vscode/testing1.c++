// #include<stdio.h>
// #include<bits/stdc++.h>
// using namespace std;
//  int main()
// {
//     int bt[20],p[20],wt[20],tat[20],i,j,n,total=0,pos,temp;
//     float avg_wt,avg_tat;
//     cout<<"Enter number of process:";
//     cin>>n;
 
//     cout<<"Enter Burst Time:";
//     for(i=0;i<n;i++)
//     {
//         cout<<i+1<<" ";
//         cin>>bt[i];
//         p[i]=i+1;         
//     }
 
//    //sorting of burst times
//     for(i=0;i<n;i++)
//     {
//         pos=i;
//         for(j=i+1;j<n;j++)
//         {
//             if(bt[j]<bt[pos])
//                 pos=j;
//         }
 
//         temp=bt[i];
//         bt[i]=bt[pos];
//         bt[pos]=temp;
 
//         temp=p[i];
//         p[i]=p[pos];
//         p[pos]=temp;
//     }
  
//     wt[0]=0;            
 
  
//     for(i=1;i<n;i++)
//     {
//         wt[i]=0;
//         for(j=0;j<i;j++)
//             wt[i]+=bt[j];
 
//         total+=wt[i];
//     }
 
//     avg_wt=(float)total/n;      
//     total=0;
 
//    for(i=0;i<n;i++)
//     {
//         tat[i]=bt[i]+wt[i];   
//         total+=tat[i];
//         cout<< "process time for "<<i<<" is " << p[i]<<" ";
//         cout<< "burst time for "<<i<<" is " << bt[i]<<" ";
//         cout<< "waiting time for "<<i<<" is " << wt[i]<<" ";
//         cout<< "turnAround time for "<<i<<" is " << tat[i]<<" ";
        
//         cout<<endl;
//     }
 
//     avg_tat=(float)total/n;    
//     cout<<"Average Waiting Time ="<<avg_wt<<" ";
//     cout<<"Average Turnaround Time ="<< avg_tat<<" ";
// }
#include <bits/stdc++.h>
using namespace std;
//structure for every process
struct Process {
   int pid; // Process ID
   int bt; // Burst Time
   int art; // Arrival Time
};
void findTurnAroundTime(Process proc[], int n, int wt[], int tat[]) {
   for (int i = 0; i < n; i++)
   tat[i] = proc[i].bt + wt[i];
}
//waiting time of all process
void findWaitingTime(Process proc[], int n, int wt[]) {
   int rt[n];
   for (int i = 0; i < n; i++)
   rt[i] = proc[i].bt;
   int complete = 0, t = 0, minm = INT_MAX;
   int shortest = 0, finish_time;
   bool check = false;
   while (complete != n) {
      for (int j = 0; j < n; j++) {
         if ((proc[j].art <= t) && (rt[j] < minm) && rt[j] > 0) {
            minm = rt[j];
            shortest = j;
            check = true;
         }
      }
      if (check == false) {
         t++;
         continue;
      }
      // decrementing the remaining time
      rt[shortest]--;
      minm = rt[shortest];
      if (minm == 0)
         minm = INT_MAX;
         // If a process gets completely
         // executed
         if (rt[shortest] == 0) {
            complete++;
            check = false;
            finish_time = t + 1;
            // Calculate waiting time
            wt[shortest] = finish_time -
            proc[shortest].bt -
            proc[shortest].art;
            if (wt[shortest] < 0)
               wt[shortest] = 0;
         }
         // Increment time
         t++;
   }
}
// Function to calculate average time
void findavgTime(Process proc[], int n) {
   int wt[n], tat[n], total_wt = 0,
   total_tat = 0;
   // Function to find waiting time of all
   // processes
   findWaitingTime(proc, n, wt);
   // Function to find turn around time for
   // all processes
   findTurnAroundTime(vector<int>pid,vector<int>bt,vector<int>art,int n, wt, tat);
   cout << "Processes " << " Burst time " << " Waiting time " << " Turn around time\n";
   for (int i = 0; i < n; i++) {
      total_wt = total_wt + wt[i];
      total_tat = total_tat + tat[i];
      cout << " " << proc[i].pid << "\t\t" << proc[i].bt << "\t\t " << wt[i] << "\t\t " << tat[i] << endl;
   }
   cout << "\nAverage waiting time = " << (float)total_wt / (float)n; cout << "\nAverage turn around time = " << (float)total_tat / (float)n;
}
// main function
int main() {
    //pid bt art
    vector<int>pid;
    vector<int>bt;
    vector<int>art;
   
   pid={1,2,3,4};
   bt={5,3,6,5};
   art={1,1,2,3};

   int n = pid.size();
   findavgTime(pid,bt,art, n);
   return 0;
}