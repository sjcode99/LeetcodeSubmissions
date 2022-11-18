//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
       string longest = "";
       for(int i=0; i<arr[0].length(); i++){
           char ch = arr[0][i];
           bool match = true;
           for(int j=1; j<N; j++){
               if(ch != arr[j][i]) {
                   match = false;
                   break;
               }
           }
           if(match == false) {
               break;
           }
           else{
                longest.push_back(ch);
           }
       }
       if(longest.size() == 0) return "-1";
       else return longest;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends