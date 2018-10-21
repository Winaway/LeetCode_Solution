## 49.Group Anagrams

Given an array of strings, group anagrams together.

Example:

Input: ["eat", "tea", "tan", "ate", "nat", "bat"],

Output:
[
  ["ate","eat","tea"],
  ["nat","tan"],
  ["bat"]
]

Note:

* All inputs will be in lowercase.
* The order of your output does not matter.


### C++ solution:

```
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(string s:strs){
            string t = s;
            sort(t.begin(),t.end());
            mp[t].push_back(s);
        }
        vector<vector<string>> res;
        for(auto m:mp){
            res.push_back(m.second);
        }
        return res;
    }
```    

### Result:
Runtime: 20 ms, faster than 97.57% of C++ online submissions for Group Anagrams.
