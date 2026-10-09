class Solution {
public:
    int trap(vector<int>& height) {
        int r=height.size()-1;
        int l=0;
        int rmx=0,lmx=0;
        int water=0;
        while(r>=l){
            if(height[l]<height[r]){
                if(height[l]>=lmx){
                    lmx=height[l];
                }else{
                    water+=lmx-height[l];
                }
                l++;
            }else{
                if(height[r]>=rmx){
                    rmx=height[r];
                }else{
                    water+=rmx-height[r];
                }
                r--;
            }
        }
        return water;
    }
};