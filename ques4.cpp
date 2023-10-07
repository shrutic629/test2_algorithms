// Scenario 4:
// Think of searching for a phone number in a phone book. Instead of starting from the beginning and looking at
// each page, you open the book in the middle and check the name there. Depending on whether the name you're
// looking for is before or after the middle, you repeat the process by dividing the phone book in half until you find
// the number.

#include<bits/stdc++.h>
using namespace std;

void binary_search(int arr[], int key,int start, int end)
{
    int flag=0, index=-1;
    while(start<=end)
    {
        
        int mid= (start+end)/2;
        if(arr[mid]==key)
        {
            flag=1;
            index=mid;
            break;
        }
        else if(arr[mid]<key)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
        if(flag==1)
        {
           cout<<index; 
        }
}

int main()
{
    int arr[8]={12,23,34,45,56,67,78,89};
    int key=78;
    int start=0, end=8-1;
    
    binary_search(arr,key,start,end);
    return 0;
}
