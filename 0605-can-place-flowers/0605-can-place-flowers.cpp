class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i=0;
        while(i<flowerbed.size() && n!=0){
            if(flowerbed[i]==1){
                i=i+2;
                continue;
            }
            else if(flowerbed[i]==0){
                if((i == 0 || flowerbed[i - 1] == 0) && (i == flowerbed.size()- 1 || flowerbed[i + 1] == 0)){
                    flowerbed[i]=1;
                    n=n-1;
                    i=i+2;
                }
                else{
                    i=i+1;
                }
            }
        }
        if(n==0){
            return true;
        }
        else{
            return false;
        }
    }
};