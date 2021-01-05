//link: https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        multiset<char> let;
        int ans=0;
        int count=0;
        int j;
       
        
        for(int i=0;i<words.size();i++){
             for(auto a:chars){
            let.insert(a);
        }
            string word=words[i];
            for(j=0;j<word.length();j++){
                if(let.find(word[j])!=let.end()){
                    let.erase(let.find(word[j]));
                    count+=1;
                     
                }
                if(count==word.length()){ans+=word.length();}
                
                
            }
            count=0;
            let.clear();
        
            
            
        }
    return ans;
    }
};
