class Solution {
public:
    std::vector<int> deckRevealedIncreasing(std::vector<int>& deck) {
        std::sort(deck.begin(), deck.end());
        std::queue<int> q;
        for (int i = 0; i < deck.size(); ++i) {
            q.push(i);
        }
        std::vector<int> res(deck.size());
        for (int i = 0; i < deck.size(); ++i) {
            res[q.front()] = deck[i];
            q.pop();
            if (!q.empty()) {
                q.push(q.front());
                q.pop();
            }
        }
        return res;
    }
};