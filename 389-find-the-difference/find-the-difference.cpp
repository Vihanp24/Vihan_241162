class Solution {
public:
    char findTheDifference(string s, string t) {
    int freq[26] = {0};
    int freq1[26] = {0};
    int k =0;
    if(s.size() ==0){
        return t[0];
    }
    for(int i=0;i<s.size();i++){
        freq[s[i]-'a']++;
    }
     for(int i=0;i<t.size();i++){
        freq1[t[i]-'a']++;
    }
    for(int i =0;i<26;i++){
        if(freq[i]!= freq1[i]){
             k =i;
            break;
        }
    }
    return char('a' + k);
    }
};