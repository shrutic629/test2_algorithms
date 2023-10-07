// Scenario 6:
// Imagine you're a student in a class, and you want to find out who scored the highest on the last exam. You
// check the scores of all your classmates, and the student with the highest score is declared the top scorer.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,max;
    cin>>n;
    int arr[n];
    int index=-1;
    
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    max=arr[0];
    for(int i=0; i<n; i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
            index=i;
        }
    }
    cout<<"maximum score is:"<<max<<endl;
    cout<<"student with the highest score is: "<<index;
    return 0;
}