class Solution{
    static String removeChars(String string1, String string2){
        // code here
       Set<Character> set = new HashSet<>();
       
       for (int i = 0; i < string2.length(); i++) {
           set.add(string2.charAt(i));
       }
       
       String res = "";
       
       for (int i = 0; i < string1.length(); i++) {
           char ch = string1.charAt(i);
           if (set.add(ch)) {
                res += ch;   
                set.remove(ch);
           } 
       }
       
       return res;
    }
}

/**
* Time complexity  : O(n) - Length of first array
* Space complexity : O(m) - Length of second array
    **/
