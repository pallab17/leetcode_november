class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int horizontal_distance = abs(sy-fy);
        int vertical_distance = abs(sx-fx);
        
        if( horizontal_distance==0 && vertical_distance==0 && t==1) return false;
        
        int minTime = max(horizontal_distance,vertical_distance);
        
        return minTime<=t;
    }
};