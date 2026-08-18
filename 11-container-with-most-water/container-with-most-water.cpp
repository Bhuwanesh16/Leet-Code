class Solution {
public:
    int maxArea(vector<int>& height) {
        int low=0;
        int high=height.size()-1;
        int maxArea=0;
        while(low<high)
        {
            int h=min(height[low],height[high]);
            int width=high-low;
            int area=h*width;
            maxArea=max(maxArea,area);
            if(height[low]<height[high])
            {
                low++;
            }
            else
            {
                high--;
            }
        }
        return maxArea;
    }
};