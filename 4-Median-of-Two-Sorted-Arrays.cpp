class Solution {
public:
    int kthelement(vector<int> &arr1, vector<int> &arr2, int m, int n, int k) {
        if(n>m)return kthelement(arr2, arr1, n, m, k);
        int low=max(0,k-n);
        int high=min(k,m);
        while(low<=high){
            int cut1=(low+high)/2;
            int cut2=k-cut1;
            int l1=(cut1==0)?INT_MIN:arr1[cut1-1];
            int l2=(cut2==0)?INT_MIN:arr2[cut2-1];
            int r1=(cut1==m)?INT_MAX:arr1[cut1];
            int r2=(cut2==n)?INT_MAX:arr2[cut2];
            if(l2>r1){
                low=cut1+1;
            }
            else if(l1>r2){
                high=cut1-1;
            }
            else return max(l1,l2);
        }
        return 0;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int lena=nums1.size();
        int lenb=nums2.size();
        if(nums1.size()%2!=nums2.size()%2)return kthelement(nums1, nums2, lena,lenb,(lena+lenb)/2+1);
        return (1.0*kthelement(nums1, nums2, lena,lenb,(lena+lenb)/2)+1.0*kthelement(nums1, nums2, lena,lenb,(lena+lenb)/2+1))/2;
    }
};