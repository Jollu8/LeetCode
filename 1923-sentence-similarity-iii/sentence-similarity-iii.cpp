class Solution {
public:
    // Function to split a string into a deque of words
    deque<string> getDeq(string &s) {
        string temp;
        deque<string> deq;
        for (auto ch : s) {
            if (ch == ' ') {
                deq.push_back(temp); // Add word to deque
                temp = ""; // Reset temp for the next word
            } 
            else temp += ch; // Build word
        }
        deq.push_back(temp); // Add the last word
        return deq;
    }

    bool areSentencesSimilar(string s1, string s2) {
        deque<string> d1 = getDeq(s1), d2 = getDeq(s2); // Convert sentences to deques of words

        // Compare words from the front until they no longer match
        while (!d1.empty() && !d2.empty() && d1.front() == d2.front()) {
            d1.pop_front();
            d2.pop_front();
        }

        // Compare words from the back until they no longer match
        while (!d1.empty() && !d2.empty() && d1.back() == d2.back()) {
            d1.pop_back();
            d2.pop_back();
        }

        // If either deque is empty, the sentences can be made similar
        return d1.empty() || d2.empty();
    }
};