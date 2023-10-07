// Scenario 7:
// Think of a group of friends deciding who has the least amount of change in their pockets. Each friend
// counts their change, and the one with the fewest coins or smallest amount is identified as having the
// minimum change.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,min;
    cin>>n;
    int arr[n];
    int index=-1;
    
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    min=arr[0];
    for(int i=0; i<n; i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
            index=i;
        }
    }
    cout<<"least amount of change is:"<<min<<endl;
    cout<<"friend with minimum change is: "<<index;
    return 0;
}