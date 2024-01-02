// https://bit.ly/3Tsqahn

class Solution {
  public:
    string removeChars(string string1, string string2) {
        // code here
        
            // ------->>>>>Best Approach<<<--------
            
        // T.C: - O(string1)
        // S.C: - O(string2)
        
        // Creating a set which is going to store all the chars of string2
        unordered_set <char> str2_chars(string2.begin(), string2.end());
        
        // Creating a temporary string which is going to store our answer.
        string temp_str = "";
        
        // traversing the string1
        for(auto i : string1)
        {
            // if the current char in string1 is already present in
            // str2_chars (or string2)
            // then do NOT store it in temp_str.
            if(str2_chars.find(i) != str2_chars.end())
            {
                // removing the unwanted chars
                continue;
            }
            else
            {
                // if the above "if statement" is false
                // then run this and store the valid char 
                // in temp_chars
                temp_str.push_back(i);
            }
        }
     
    //rewrite the string1 with our answer  
    string1 = temp_str;
    
    return string1;
    }

// Author: Akash Yadav
// Github Id: https://github.com/AkashYadavak 
// LinkedIn Id: www.linkedin.com/in/akash-yadav-ak
// Thank you very much, Shumbul di

};

// Code by Shumbul Arifa - https://linktr.ee/shumbul 
