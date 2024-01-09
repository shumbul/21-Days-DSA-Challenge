// Problem link - https://bit.ly/3H6DHUm 

// User function Template for C++

class Node{
public:
    char ch;
    unordered_map<char, Node*> children;
    set<string> contacts;
    Node(char c){
        ch=c;
    }
};

class Trie{
public:
    Node* root;
    Trie(){
        root=new Node('\0');
    }
    void insert(string &s){
        Node* temp=root;
        for(char &c: s){
            if(temp->children.count(c)==0){
                temp->children[c]=new Node(c);
            }
            temp=temp->children[c];
            temp->contacts.insert(s);
        }
    }
};


class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        // code here
        vector<vector<string>> ans;
        Trie* trie=new Trie;
        for(int i=0;i<n;i++)
            trie->insert(contact[i]);
        Node* temp=trie->root;
        for(char &c: s){
            if(temp->children.count(c)==0){
                break;
            }
            temp=temp->children[c];
            vector<string> contacts;
            for(string contact: temp->contacts){
                contacts.push_back(contact);
            }
            ans.push_back(contacts);
        }
        
        int k=ans.size();
        while(k<s.size()){
            ans.push_back({"0"});
            k++;
        }
        
        return ans;
    }
};


/*
Time Complexity: O(|s| * n * max|contact[i]|)
Space Complexity: O(n * max|contact[i]|)
*/

// Code by Shumbul Arifa - https://linktr.ee/shumbul 
// Follow 21 days DSA Challenge - www.shumbularifa.com
// Video solutions available on my YouTube
