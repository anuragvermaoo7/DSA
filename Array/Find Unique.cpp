#include<iostream>
using namespace std;
int findUnique(int* arr, int n)
{
    int ans = 0;
    for(int i = 0; i<n; i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}
int main()
{
    int arr[7] = {1,1,2,2,3,3,4};

    int k = findUnique(arr,7);
    cout<<k;
}
