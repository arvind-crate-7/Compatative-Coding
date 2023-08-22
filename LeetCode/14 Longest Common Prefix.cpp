string longestCommonPrefix(vector<string>& strs) {
        string result = strs[0];
        string ans;
        for(int i= 0;i<result.size();i++){
            bool flag = 1;
            for(int j = 1;j<strs.size();j++){
                string str = strs[j];
                if(result[i] != str[i] || str.size() < i){
                    flag = 0;
                    break;
                }
            }
            if(flag){
                ans = ans + result[i];
            }
            else{
                break;
            }

        }
        return ans;
    }




    //ANOTHER METHOD

String longestCommonPrefix(vector<string>& str) {
    sort(str.begin(), str.end()); //sorting the array
    string ans=""; //creating a new empty string to store the common prefixes
    for(int i=0;i<str[0].length();i++) // max iterations = length of the first string
    {
        if(str[0][i]!=str[str.size()-1][i]) // checking the characters of the first and last string
            break;
        ans+=str[0][i]; // concatinate if the characters are matching
    }
    return ans;
    
}
