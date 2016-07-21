class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(n==0){
            return;
        }
        int i,j;
        i=j=0;
        for(i;i<m;){
            for(j;j<n;){
                if(nums1[i]<=nums2[j]){
                    nums1.push_back(nums2[j]);
                    j++;
                }else{
                    i++;
                    break;
                }
            }
        }
        if(i>=m&&j<n){
            for(int k=j;k<n;k++){
                nums1.push_back(nums2[k]);
            }
        }
    }
};
