// Problem link - https://bit.ly/48pveY2

class Solution {
public:
    int wordLadderLength(string startWord, string targetWord, vector<string>& wordList) {
        // Code here
        if(startWord==targetWord) return 0;

        unordered_set<string> st(wordList.begin(), wordList.end()), vis;
        if(st.find(targetWord)==st.end()) return 0;

        queue<string> q;
        q.push(startWord);
        vis.insert(startWord);
        int ans=1;

        while(!q.empty()) {
            int s=q.size();
            while(s--){
                startWord=q.front();
                q.pop();
                if(startWord==targetWord) return ans;
                for(auto &c: startWord){
                    auto temp=c;
                    for(int i=0;i<26;i++){
                        c='a'+i;
                        if(vis.find(startWord)==vis.end() && st.find(startWord)!=st.end()){
                            q.push(startWord);
                            vis.insert(startWord);
                        }
                    }
                    c=temp;
                }
            }
            ans++;
        }
        return 0;
    }
};

/*
    Time complexity: O(n*m)
    Space complexity: O(n*m)
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 
// Follow 21 days DSA Challenge - www.shumbularifa.com
// Video solutions available on my YouTube
