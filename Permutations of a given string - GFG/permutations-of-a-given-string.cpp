//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    private:
        void solve(string str, vector<string>& ans, int idx){
            if(idx >= str.size()){
                ans.push_back(str);
                return;
            }
            
            for(int i=idx; i<str.size(); i++){
                swap(str[i], str[idx]);
                solve(str, ans, idx+1);
                swap(str[i], str[idx]);
            }
        }
	public:
		vector<string>find_permutation(string S)
		{
		    vector<string> ans;
		    int idx = 0;
		    solve(S, ans, idx);
		    sort(ans.begin(), ans.end());
		    ans.erase(unique(ans.begin(), ans.end()), ans.end());
		    
		    return ans;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends