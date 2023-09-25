//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>v, int n, long long s)
    {
        // Your code here
     vector<int> u;
        int start = 0, end = 0, sum = 0;
         if(s==0){
             u.push_back(-1);
             return u;
         }

        while (end < n)
        {
            sum += v[end];

            while (sum > s)
            {
                sum -= v[start];
                start++;
            }

            if (sum == s)
            {
                u.push_back(start + 1);
                u.push_back(end + 1);
                return u;
            }

            end++;
        }

        u.push_back(-1); // If no subarray found
        return u;
     
    }
};


//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends