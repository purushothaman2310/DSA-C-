#include<iostream>
#include<vector>
#include<array>
#include<conio.h>
using  namespace std;
int  equlibrium(int arr[],int n)
{   //const int k;
    int leftsum[10];
    int rightsum[10];
    if(n<3)
    {
    for (int i = 1; i < n; i++) {
         leftsum[i] = leftsum[i - 1] + arr[i];
        
    }
    for (int i = n-2; i >=0; i--) {
            rightsum[i] = rightsum[i + 1] + arr[i];
        
    }
    }
    for (int i = 0; i < n; i++) {
        if (leftsum[i] == rightsum[i]) {
            return i;
        }
    }
    return -1;

}
int main()
{
    int arr[] = { -7, 1, 5, 2, -4, 3, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "First Point of equilibrium is at index "<<endl;
      cout   << equlibrium(arr, n) << "\n";
    return 0;
}
