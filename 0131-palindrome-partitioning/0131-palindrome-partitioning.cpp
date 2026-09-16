class Solution {
public:
bool ispalindrom(string s){

    string s2=s;
    reverse(s2.begin(),s2.end());
    return s==s2;
}
    void getAllParts(string s, vector<string>& partion,
                    vector<vector<string>>& ans) {
        if (s.size() == 0) {
            ans.push_back(partion);
            return;
        }
        for (int i = 0; i < s.size(); i++) {
            string part = s.substr(0, i + 1);
            if (ispalindrom(part)) {
                partion.push_back(part);
                getAllParts(s.substr(i + 1), partion, ans);
                partion.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        
        vector<string>partion;
        vector<vector<string>>ans;
        getAllParts(s,partion,ans);
        return ans;
    }
};