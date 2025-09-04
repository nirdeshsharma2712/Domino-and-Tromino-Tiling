class Solution {
public:
    int numTilings(int n) {
        vector<int> ans = {1,2,5};
        int test = pow(10,9)+7;
        if(n<=3) return ans[n-1];
        for(int i=3;i<n;i++){
            long long val = ans[i-1]*2;
            ans.push_back((val+ans[i-3])%test);
        }
        return ans[ans.size()-1];
    }
};
