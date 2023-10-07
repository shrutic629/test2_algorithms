// Scenario 8:
// Suppose you're saving money in a piggy bank, and every week you add some money to it. To find out
// how much you've saved in total, you add up all the money you've put into the piggy bank over time.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)
    {
        sum=sum+arr[i];
    }
    
    cout<<sum;
    
    return 0;
}
