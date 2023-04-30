#include<iostream>
#include<vector>
#include<algorithm>
#include<conio.h>
using namespace std;
int  rearrange(int arr[],int d,int n){



    while(d < n)
    {
        swap(arr[d], arr[n]);
        d++;
        n--;
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[] = {10,9,8,7,6,5,4,3,2,1};//10,9,8,7,6,5,4,1,2,3
                //4,5,6,7,8,9,10,1,2,3
                //10,9,8,7,6,5,4,3,2,1//reversed whole array(d=0,n=n)
                //4,5,6,7,8,9,10,3,2,1//reverse n-k element(d=0,n=n-k)
                //4,5,6,7,8,9,10,1,2,3//reverse k element (d=n-k,n=n)
     
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
     
    rearrange(arr, 0, n-1);
    //rearrange(arr,0,n-k-1);
    //rearrange(arr,n-k,n);

    
    printArray(arr, n);
 
    return 0;
}
