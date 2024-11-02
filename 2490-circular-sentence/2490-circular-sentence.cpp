class Solution {
public:
    bool isCircularSentence(string sentence) {
        vector<string> words;
        stringstream ss(sentence);
        string word;

        while (ss >> word) {
            words.push_back(word);
        }

        for (int i = 0; i < words.size(); ++i) {
            char lastChar = words[i].back();
            char nextFirstChar = words[(i + 1) % words.size()].front();

            if (lastChar != nextFirstChar) {
                return false;
            }
        }
        return true;
    }
};