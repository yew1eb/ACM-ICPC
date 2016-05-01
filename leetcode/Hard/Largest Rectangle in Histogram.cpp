class Solution {
public:
    int largestRectangleArea(vector<int>& height) {
        height.push_back(0);
        stack<int> S;
        int ret = 0;
        for(int i=0; i<height.size(); ++i) {
            if(S.empty() || height[i] > height[S.top()]) S.push(i);
            else {
                int t = S.top();
                S.pop();
                int width = S.empty() ? i : i - S.top() - 1;
                ret = max(ret, height[t]*width);
                --i;
            }
        }
        return ret;
    }
};