//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
        // optimal approach
       if(N == 0) return 0;
       unordered_set<int> st;
       int maxLen = 0;
       
       for(int i=0; i<N; i++){
           st.insert(arr[i]);
       }
       
       for(auto it: st){
           if(st.find(it-1) == st.end()){
               int cnt = 1;
               while(st.find(it + 1) != st.end()){
                   cnt++;
                   it += 1;
               }
               maxLen = max(maxLen, cnt);
           }
       }
       return maxLen;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends