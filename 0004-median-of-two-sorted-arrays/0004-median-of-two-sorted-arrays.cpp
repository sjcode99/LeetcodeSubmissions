class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merge;
        int n1 = nums1.size();
        int n2 = nums2.size();
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
        
        if(e%2 == 0){
            ans = merge[val];
        }else{
            ans = (merge[val] + merge[val+1])*1.0/2*1.0;
        }
        return ans;
        
    }
};