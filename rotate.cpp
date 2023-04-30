#include<iostream>
#include<vector>
#include<array>
#include<conio.h>
using  namespace std;
class solution {
    public:
    void reverse(int arr[],int start,int end)
    {
        while (start<=end)
        {
            swap(arr[start],arr[end]);
            start+=1;
            end-=1;

        }
    }
    void rotate(int arr[],int d, int n)
    {
        reverse(arr,0,n-1);
        reverse(arr,0,n-d-1);
        reverse(arr,n-d,n-1);
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    }
};
int main()
    {
    int arr[] = { 1, 2, 3, 10, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int d =2;
    d=d%n;
    solution s;
    s.rotate(arr,d,n);

    return 0;
}
