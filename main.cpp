#include <iostream>

using namespace std;
int bs(int arr[], int s, int num){
int low=0, high=s-1;
while(low<=high){
    int mid=(low+high)/2;
    if(num==arr[mid])
    {
        return mid;
    }
    else if(num<arr[mid])
    {
        high=mid-1;
    }
    else
    {
        low=mid+1;
    }
}
return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int num;
    cin>>num;
    cout<<bs(arr , 8,num)<<endl;
    return 0;
}
