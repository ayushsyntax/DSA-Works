#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    // map<int, int> mpp;
    for (int i =0; i < n; i++)
    {
        cin>>arr[i];
        // mpp[arr[i]++];
    }

    // pre compute using map and unordered_map also
    map<int, int> mpp;
    for (int i =0; i < n; i++)
    {
        mpp[arr[i]++];
    }

    // // iterate in map
    // for(auto it : mpp)
    // {
    //     cout<<it.first <<"->"<< it.second << endl;
    // }

    int q;
    cin>>q;
    while(q--)
    {
        int num;
        cin>>num;

        //fetch
        cout<<mpp[num]<<endl;
    }



}