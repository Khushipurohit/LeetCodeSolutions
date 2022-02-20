class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        Arrays.sort(nums1);
        Arrays.sort(nums2);
        
        int i=0 , j=0, count;
        double m1=-1, m2=-1;
        int n= nums1.length;
        int m= nums2.length;
        if((m+n)%2==1){
            for(count=0; count<=(m+n)/2; count++){
                if(i != n && j !=m){
                    m1= (nums1[i] >nums2[j]) ? nums2[j++] : nums1[i++];
                }
                else if(i<n){
                    m1= nums1[i++];
                }
                else{
                    m1=nums2[j++];
                }
            }
            return m1;
        }
        
        else{
            for(count=0; count<= (m+n)/2; count++){
                m2=m1;
                if(i !=n && j!=m){
                    m1=(nums1[i] > nums2[j]) ? nums2[j++] : nums1[i++];
                }
                else if(i<n){
                    m1=nums1[i++];
                }
                else{
                    m1=nums2[j++];
                }
            }
            return (m1 + m2)/2;
        }
        
    }
}