class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
        int n;
        n=nums.size();

        long long curr,ans;
        curr=0;
        ans=LLONG_MAX;

        vector<pair<int,int>> v(n);
        vector<long long> pre(n+1);

        for(int i=0;i<n;i++)
        {
            v[i]={nums[i],cost[i]};
        }

        sort(v.begin(),v.end());

        for(int i=1;i<=n;i++)
        {
            pre[i]=pre[i-1]+v[i-1].second;
        }    

        for(int i=1;i<n;i++)
        {
            curr+=1LL*(v[i].first-v[0].first)*v[i].second;
        }

        ans=min(ans,curr);

        for(int i=1;i<n;i++)
        {
            curr+=1LL*(v[i].first-v[i-1].first)*(pre[i]-pre[0]);
            curr-=1LL*(v[i].first-v[i-1].first)*(pre[n]-pre[i]);

            ans=min(ans,curr);
        }

        return ans;
    }
};