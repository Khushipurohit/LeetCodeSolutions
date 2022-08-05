class Solution {
public:
    bool isPossible(vector<int>& weights, int days,int mid,int size){
    int totalDays=1;
    int mass=0;
        
        for(int i=0;i<size;i++){
            if(mass+weights[i]>mid){
                totalDays++;
                mass=weights[i];
                if(totalDays>days){
                    return false;
                }
            }
            else{
                mass+=weights[i];
            }
        }
        return true;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int allSum=0;
        int size=weights.size();
        int ans=INT_MAX;
        int Max = 0;
        for(int i=0;i<size;i++){
            allSum+=weights[i];
            Max = max(Max, weights[i]);
        }
        
        
        int s=Max;
        int e=allSum;
        while(s<=e){
            int mid=(s+e)/2;
            if(isPossible(weights,days,mid,size)){
               ans=min(ans,mid);
               e=mid-1; 
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};