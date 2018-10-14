class Solution {
public:
    int lengthOfLongestSubstringTwoDistinct(string s) {
        map<char, int> map;
        int res = 0, left = 0;
        for(int i = 0; i < s.size(); i++){
            map[s[i]] = i;
            while(map.size() > 2){
                if(map[s[left]] == left)
                    map.erase(s[left]);
                left++;
            }
            res = max(res, i-left+1);
        }
        return res;
    }
};