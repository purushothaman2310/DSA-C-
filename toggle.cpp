#include<iostream>
#include<vector>
#include<array>
#include<conio.h>
using namespace std;
int logic(int arr[], int n){
    int ans=0;
    for (int i=0;i<n;i++){
        if (arr[i]==0){
            ans+=1;
            for (int j=i;j<n;j++){
                if(arr[j]==1){
                arr[j]-=1;
                }
                else{
                    arr[j]=1;
                }
            }
        }

        
    }
    cout<< ans<<endl;
    //10110(ans=0)
    //11001->pressing 1 index value(ans=1)
    //11110-ans=2
    //11110 ans=2
    //11111 ans =3
    //10110
    //11110
    //11111
   
}
int main()
{
    int arr[] = { 1, 0, 1, 1, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    logic(arr, n) ;
   
    return 0;
}
