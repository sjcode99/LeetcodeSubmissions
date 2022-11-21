//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& nums1, vector<int>& nums2)
    {
        int n1 = nums1.size();
        int n2 = nums2.size();
        vector<int> merge;
        int i=0, j=0;
        
        while(i<n1 && j<n2){
            if(nums1[i] < nums2[j]){
                merge.push_back(nums1[i++]);
            }
            else{
                merge.push_back(nums2[j++]);
            }
        }
        
        while(i<n1){
            merge.push_back(nums1[i++]);
        }
        while(j<n2){
            merge.push_back(nums2[j++]);
        }
        
        int s=0, e=merge.size()-1;
        double ans;
        int val = s + (e-s)/2;
        
        if((n1+n2)%2 == 0){         // even case
            ans = (merge[val] + merge[val+1])*1.0/2*1.0;
        }else{                      // odd case
            ans = merge[val];
        }
        return ans;
    
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends