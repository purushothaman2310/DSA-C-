#include<iostream>
#include<vector>
#include<array>
#include<conio.h>
#include<string>
using namespace std;
int CountAGpair(char arr[],int n){
    int ans=0;
    int a_count=0;
    for(int i=0;i<n;i++){
        if(arr[i]=='a'){
            a_count=a_count+1;
        }
        if(arr[i]=='g'){
            ans=a_count+1;
        }

    }
    return ans;
}
int main(){
    char arr[] = { 'a', 'g', 'a', 'g', 'a' };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << CountAGpair(arr, n) << "\n";
    return 0;
}
