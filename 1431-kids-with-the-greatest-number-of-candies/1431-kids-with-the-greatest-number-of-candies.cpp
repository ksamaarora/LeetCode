class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_present=0;
        for(int i=0; i<candies.size(); i++){
            if(candies[i]>max_present){
                max_present=candies[i];
            }
        }
        //bool result[];
        vector<bool> result;
        //int j=0;
        for(int i=0; i<candies.size(); i++){
            if(candies[i]+extraCandies >= max_present){
                result.push_back(true);
                //result[j]=true;
                //j++;
            }
            else{
                result.push_back(false);
                // result[j]=false;
                // j++;
            }
        }
        return result;
    }
};