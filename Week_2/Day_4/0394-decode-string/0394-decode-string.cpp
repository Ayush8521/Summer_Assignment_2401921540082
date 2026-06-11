class Solution {
public:
    string decodeString(string str) {
        string result = "";
        //traversing the encoded string
        for(int i=0; i<str.length(); i++){
            if(str[i] != ']'){
                result.push_back(str[i]);
            }
            else
            {
                string str = "";
                while(!result.empty() && result.back() != '['){
                    str.push_back(result.back());
                    result.pop_back();
                }
                reverse(str.begin(), str.end());    // reverse kar dete hai string ko
                result.pop_back();                  // last character ko remove kr dete h

                string digit = "";
                while(!result.empty() && (result.back()>='0' && result.back()<='9')){
                    digit.push_back(result.back());
                    result.pop_back();
                }
                //reverse digit string
                reverse(digit.begin(), digit.end());
                int int_num = stoi(digit);     //converting string to integer

                //appending the string
                while(int_num--){
                    result += str;
                }
            }
        }
        return result;
    }
};