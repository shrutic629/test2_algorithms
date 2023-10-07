// Scenario 1:
// Think of sorting a deck of playing cards in your hand. You pick up one card at a time and
// insert it into the correct position among the cards you're already holding. You repeat this
// process until all cards are in order.

#include<bits/stdc++.h>
using namespace std;

void sort_playingcards(int arr[])
{
    for(int i=1; i<7; i++)
    {
        for(int j=i-1; j>=0; j--)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0; i<7; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[7]={23,56,87,42,27,84,29};
    
    sort_playingcards(arr);
    return 0;
}