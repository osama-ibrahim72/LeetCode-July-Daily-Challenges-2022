class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        
        horizontalCuts.push_back(h),verticalCuts.push_back(w);
        
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        
        int mxv =verticalCuts[0],mxh=horizontalCuts[0];
        
        for(int i=1;i<verticalCuts.size();i++)
            mxv=max(mxv,verticalCuts[i]-verticalCuts[i-1]);
        
        for(int i=1;i<horizontalCuts.size();i++)
            mxh= max(mxh,horizontalCuts[i]-horizontalCuts[i-1]);
        
        return (1ll*mxv*mxh)%1000000007;
    }
};