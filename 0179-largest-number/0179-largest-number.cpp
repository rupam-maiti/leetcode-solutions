class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>str_nums;
        str_nums.reserve(nums.size());
        for (int num : nums) {  //convert int to string
            str_nums.push_back(to_string(num));
        }
        sort(str_nums.begin(), str_nums.end(), [](string& a, string& b) {
            return a + b > b + a;
    });
    if (str_nums[0] == "0") {
            return "0";
        }
        string result = "";
        for (string& s : str_nums) {
            result += s;
        }
        return result;
    }
};