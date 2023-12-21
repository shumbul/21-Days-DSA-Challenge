// https://bit.ly/3Tsqahn

class Solution {
  public:
    string removeChars(string string1, string string2) {
        // code here
        map<char,int>mp;
        for(auto it:string2) mp[it]++;
        for(int i=0; i<string1.size(); i++){
            if(mp.find(string1[i]) != mp.end()){
                string1.erase(string1.begin() + i);
                i--;
            }
        }
        return string1;
    }
};

/*
Time complexity: O()
Space complexity: O()
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 
