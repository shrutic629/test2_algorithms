// Scenario 5:
// Think of a potluck dinner where everyone brings different dishes. To create a complete menu, you combine all
// the dishes from each guest into a single buffet, making sure there are no duplicates.

#include<bits/stdc++.h>
using namespace std;

void union_sort(int arr1[], int arr2[], int l1, int l2)
{
    int arr3[l1+l2];
    int k=0;
    
    for(int i=0; i<l1; i++)
    {
        bool isduplicate=false;
        for(int j=0; j<k; j++)
        {
            if(arr1[i]==arr3[j])
            {
            isduplicate=true;
            break;
            }
        }
        if(!isduplicate)
        {
            arr3[k]=arr1[i];
            k++;
        }
    }
    
    for(int i=0; i<l2; i++)
    {
        bool isduplicate=false;
        for(int j=0; j<k; j++)
        {
            if(arr2[i]==arr3[j])
            {
            isduplicate=true;
            break;
            }
        }
        if(!isduplicate)
        {
            arr3[k]=arr2[i];
            k++;
        }
    }
    
    for(int k=0; k<(l1+l2); k++)
    {
        cout<<arr3[k]<<" ";
    }
}

int main()
{
    int arr1[]={1,2,2,5,5,8};
    int arr2[]={1,4,5,7,7,9,10};
    int l1=(sizeof(arr1)/sizeof(arr1[0]));
    int l2=(sizeof(arr2)/sizeof(arr2[0]));
    
    union_sort(arr1,arr2,l1,l2);
    return 0;
}
