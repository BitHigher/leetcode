string longestCommonPrefix(vector<string> &strs) {
    // Start typing your C/C++ solution below
    // DO NOT write int main() function
    if(strs.size() == 0)
        return "";
    
    string result = "";
    char cur = 0;
    int i = 0;
    while(true)
    {
        if(i < strs[0].length())
            cur = strs[0][i];
        else
            return result;
            
        for(int j = 1; j < strs.size(); ++j)
        {
            if(i >= strs[j].length() || cur != strs[j][i])
                return result;
        }
        
        result += cur;
        i++;
    }
}