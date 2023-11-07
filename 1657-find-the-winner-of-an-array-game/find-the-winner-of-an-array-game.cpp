class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int n = arr.size();
        int maxEl = *max_element(begin(arr), end(arr));
        
        if(k >= n)
            return maxEl;
        
        
        int winner     = arr[0];
        int streak       = 0;
        
        for(int i = 1; i<n; i++) {
            
            if(winner > arr[i]) {
                streak++;
            } else {
                winner = arr[i];
                streak   = 1;
            }
            
            if(streak == k || winner == maxEl) {
                return winner;
            }
            
        }
        
        return winner;
        
    }
};