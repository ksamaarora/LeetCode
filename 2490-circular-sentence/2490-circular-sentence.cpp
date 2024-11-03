// Method 2: Optimal Soln 
// TC: O(N) SC:O(1)
class Solution {
public:
    bool isCircularSentence(string sentence) {
        int n=sentence.size();
        if(sentence[0]!=sentence[n-1]){
            return false;
        }
        for(int i=0; i<n; i++){
            if(sentence[i]==' '){ // use single quotes 
                if(sentence[i-1]!=sentence[i+1]) return false;
            }
            else{
                continue;
            }
        }
        return true;
    }
};

// Method 1: Brute Force
// TC: O(N)
// SC:O(W)
