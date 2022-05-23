class Solution {
public:
   string longestCommonPrefix(vector<string>& strs) {
        string common;
        std::sort(strs.begin(), strs.end());
        string firstWord = strs.at(0);
        for (int j = 0; j <strs.at(0).size() ; ++j) {
            for (int i = 1; i < strs.size(); ++i) {
                if (strs.at(i).at(j)!=firstWord.at(j)){
                    return common;
                }
            }
            common += firstWord.at(j);
        }
        return common;

    }

};