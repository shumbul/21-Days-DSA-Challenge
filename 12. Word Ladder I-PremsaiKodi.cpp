int wordLadderLength(string startWord, string targetWord, vector<string>& wordList) {
        // Code here
        queue<pair<string, int>> q;
        unordered_set<string> map(wordList.begin(), wordList.end());
        q.push({startWord,1} );
        map.erase(startWord);
        while(!q.empty())
        {
            string word = q.front().first;
            int len = q.front().second;
            q.pop();
            if(word == targetWord )
            {
                return len;
            }
            for(int i =0; i<word.length(); i++)
            {
                char orig = word[i];
                for(char j ='a'; j<= 'z' ;j++)
                {
                    word[i] = j;
                    if(map.find(word)!= map.end())
                    {
                        q.push({word, len+1});
                        map.erase(word);
                    }
                }
            word[i] = orig;
            }
        }
        return 0;
    }
