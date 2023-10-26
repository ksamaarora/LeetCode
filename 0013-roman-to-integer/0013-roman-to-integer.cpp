class Solution {
public:
    int romanToInt(string s) {
        int i = 0;
        int num = 0;
        while (i < s.size()) {
            if (i < s.size() - 1 && romanvalue(s[i]) < romanvalue(s[i + 1])) {
                num -= romanvalue(s[i]);
                i++;
            } else {
                num += romanvalue(s[i]);
                i++;
            }
        }
        return num;
    }

    int romanvalue(char a) {
        switch (a) {
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
            default:
                return 0;
        }
    }
};
  
        
        //Time Limit Exceeded In This 
        // int i=0;
        // long long num=0;
        // while(i<s.size()){
        //     if(s[i]=='I' && (s[i+1]!='V' || s[i+1]!='X')){
        //         num+=1;
        //         i++;
        //     }
        //     else if(s[i]=='I' && s[i+1]=='V'){
        //         num+=4;
        //         i++;i++;
        //     }
        //     else if(s[i]=='I' && s[i+1]=='X'){
        //         num+=9;
        //         i++;i++;
        //     }
        //     else if(s[i]=='V'){
        //         num+=5;
        //         i++;
        //     }
        //     else if(s[i]=='L'){
        //         num+=50;
        //         i++;
        //     }
        //     else if(s[i]=='D'){
        //         num+=500;
        //         i++;
        //     }
        //     else if(s[i]=='M'){
        //         num+=1000;
        //     }
        //     else if(s[i]=='X' && (s[i+1]!='L'||s[i+1]!='C')){
        //         num+=10;
        //         i++;
        //     }
        //     else if(s[i]=='X' && s[i+1]=='L'){
        //         num+=40;
        //         i++;i++;
        //     }
        //     else if(s[i]=='X' && s[i+1]=='C'){
        //         num+=40;
        //         i++;i++;
        //     }
        //     else if(s[i]=='C' && (s[i+1]!='D'||s[i+1]!='M')){
        //         num+=100;
        //         i++;
        //     }
        //     else if(s[i]=='C' && s[i+1]=='D'){
        //         num+=400;
        //         i++;i++;
        //     }
        //     else if(s[i]=='C' && s[i+1]=='M'){
        //         num+=900;
        //         i++;i++;
        //     }
        // }
        // return num;
