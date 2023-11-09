class Solution {
public:
   
    int countHomogenous(string s) {
         int MOD=1e9+7;
        int n=s.length();
        int streak=0;
      int result=0;
        for(int i=0;i<n;i++){
//              i>0 ei condition ta na dile runtime error dicche
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