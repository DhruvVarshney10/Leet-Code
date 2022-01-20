
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int counter = 0;
        
        bool same = true;
       
        
            for(int j=0;j<strs[0].length();j++){
                
                 for(int i=0;i<strs.size();i++){
                        
                        if(strs[i][j] != strs[0][counter]){same = false;}
                
                  }
                
                if(same){
                    counter++;}
                else{break;}
            }
            
            string result;
            for(int i=0;i<counter;i++){
                cout << strs[0][i];

                string s(1, strs[0][i]);
                result.append(s);
                
            }
       return result;
        
    }
};
/*
Runtime: 7 ms, faster than 33.02% of C++ online submissions for Longest Common Prefix.
Memory Usage: 9.2 MB, less than 77.94% of C++ online submissions for Longest Common Prefix.
*/