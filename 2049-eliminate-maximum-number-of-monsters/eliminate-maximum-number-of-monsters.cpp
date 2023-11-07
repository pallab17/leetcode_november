class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n = dist.size();
        
        vector<int>time(n);
        for(int i=0;i<n;i++){
            time[i]=ceil((float)dist[i]/speed[i]);
        }
        sort(begin(time),end(time));
        int kill =1; 
        int reload =1;
        
        for(int i=1;i<n;i++){
            if(time[i]-reload<=0){
                // game lost
                return kill;
            }
            kill++;
            reload+=1;
        }
        return kill;
    }
};