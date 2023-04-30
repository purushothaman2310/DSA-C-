#include<iostream>
#include<vector>
#include<array>
#include<algorithm>
using namespace  std;
void secondlargest(int arr[],int a)
{
int i,first,second;
if(a<2){
cout<<"further proceed"<<endl;
return;
}
int maxi=arr[0];
int secondmaxi=-1;

sort(arr,arr+a);
for(i=a-2; i >= 0; i--) {
    if(arr[i]!=arr[a-1]){
        
        cout<<arr[i]<<endl;
        return;
    }
}

cout<<"no second largets elements"<<endl;
}
int main()
{
    int arr[] = { 12,39,40,34 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<n<<endl;
    secondlargest(arr,n);
    return 0;
}
 
