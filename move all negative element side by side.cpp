#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={-1, 3, -4, -6, 8, -9, 1};   // array size = 7
    int r = sizeof(arr)/sizeof(arr[0]);
    int l=0;
    
    while(l<=r)
    {
        if(arr[l] < 0 && arr[r] >0) //  left negative     right   positive
        {
            l++;
            r--;
            
        }
        
        else if(arr[l]>0 && arr[r]<0)  // left positive    right negative
        {
            int temp;
            temp=arr[l];
            arr[l]=arr[r];
            arr[r]=temp;
            l++;
            r--;
            
        }
        
        else if(arr[l]<0 && arr[r]<0)  // left negative     right negative 
        {
            l++;
        }
        
        else                         // left positive    right positive
        {
            l--;
        }
        
    }
        for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
        {
            cout << arr[i] << " ";
        
        }
    
    return 0;
}
