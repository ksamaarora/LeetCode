class Solution {
public:
    string removeStars(string s) {
        //Good Question 
        int top=-1;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='*' && top>=0){
                top=top-1;
            }
            else{
                top++;
                s[top]=s[i];
            }
        }
        s.resize(top+1);
        return s;
    }
};
