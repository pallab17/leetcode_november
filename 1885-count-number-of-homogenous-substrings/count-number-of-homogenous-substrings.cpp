class Solution {
public:
    int MOD=1e9+7;
    int countHomogenous(string s) {
        
        int n=s.length();
        int streak=0;
      int result=0;
        for(int i=0;i<n;i++){
            if( i>0 && s[i]==s[i-1]){  // same mal
                streak+=1;
            }else{
                streak=1;   // different mal
            }
            result=(result+streak) % MOD;
        }
        return result;
        
    }
};