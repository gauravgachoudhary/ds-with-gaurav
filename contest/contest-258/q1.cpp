/// reverse prefix of word

//solution:-


class Solution {
public:
    int findIndex(string word, char ch) {
        for(int i = 0 ; i < word.size(); i++) {
            if(word[i] == ch) 
                return i;
        }
        return -1;
    }
    string reversePrefix(string word, char ch) {
        int j = findIndex(word,ch);
        if(j == -1) 
            return word;
        int i = 0;
        cout<<j<<endl;
        while(i < j) {
            char t =  word[i];
            word[i] = word[j];
            word[j] = t;
            i++;
            j--;
        } 
        return word;
    }
};