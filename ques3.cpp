// Scenario 3:
// Imagine you have a deck of playing cards, and you're looking for a specific card, like the Ace of Spades. You start
// from the top of the deck and go through each card one by one until you find the Ace of Spades.

#include<bits/stdc++.h>
using namespace std;

void linear_search(int arr[], int key)
{
   int flag=0, index=-1;
   
   for(int i=0; i<7; i++)
   {
       if(arr[i]==key)
       {
           flag=1;
           index=i;
           break;
       }
   }
   if(flag==1)
   {
       cout<<"Position of ace of spade is:"<<index;
   }
}

int main()
{
    int arr[7]={20,45,83,19,55,37,70};
    int key=83;
    
    linear_search(arr,key);
    return 0;
}
