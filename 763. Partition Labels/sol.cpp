class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int> ans;
        int n = S.size();
        int dp[26] = {}; 
        
        for(int i=0; i<n; i++) dp[S[i]-'a'] = i;
        
        int start = 0, end = dp[S[start]-'a'];
        for(int i=0; i<n; i++) {
            if(end == i) {
                ans.push_back(end-start+1);   
                start = end + 1;
                if(start == n) break;
                end = dp[S[start]-'a'];
            }
            else if(dp[S[i]-'a'] > end) end = dp[S[i]-'a'];

        }
        
        return ans;
    }
};