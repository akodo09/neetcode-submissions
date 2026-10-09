class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size()-1;
        int a = 0;
        while(j>i){
            int d = j-i;
            int l = min(heights[i], heights[j]);
            int ar = l*d;
            a = max(a, ar);
            if(heights[i]>heights[j]){
                j--;
            }else{
                i++;
            }
        }
        return a;
    }
};
