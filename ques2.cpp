// Scenario 2:

// Imagine you're doing laundry, and you want to sort a pile of colorful socks by color. You
// pick up pairs of socks and compare their colors. If they're not in the right order, you swap
// their positions. You continue this process until all the socks are sorted by color.

#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[])
{
    for(int i=0; i<6-1; i++)
    {
        for(int j=0; j<6-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    
    for(int i=0; i<6; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[6]={25,67,55,38,29,64};
    
    bubble_sort(arr);
    return 0;
}
