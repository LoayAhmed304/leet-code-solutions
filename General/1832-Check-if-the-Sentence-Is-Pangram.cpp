class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> st;
        int i = 0;
        while(i < sentence.size()){
            if(!st.count(sentence[i]))
                st.insert(sentence[i]);
            i++;
        }
        return st.size() == 26;
    }
};
