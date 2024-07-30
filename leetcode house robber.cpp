class Solution {
public:
    int rob(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
        int r1=0,r2=0;
        for(int n: nums){
            int temp=max(n+r1,r2);
            r1=r2;
            r2=temp;
        }
        return max(r1,r2);
    }
};
