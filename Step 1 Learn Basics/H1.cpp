#include<bits/stdc++.h>
using namespace std;
//int hashing array
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i =0;i<n;i++)
    {
        cin>>arr[i];
    }

    // precompute and put 1 extra index in hashing from required
    int hash [13] = {0};
    for (int i =0;i<n;i++)
    {
        hash[arr[i]] +=1;
        
    }

    int q;
    cin>>q;
    while(q--)
    {
        int number;
        cin>>number;

        //fetch
        cout<<hash[number]<<endl;
    }

}