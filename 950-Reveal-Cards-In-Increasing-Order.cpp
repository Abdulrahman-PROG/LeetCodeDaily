class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end()); // Sort the input array

        deque<int> indices; // Use deque to store indices
        for (int i = 0; i < n; ++i) {
            indices.push_back(i); // Initialize indices with 0 to n-1
        }

        vector<int> ans(n);
        for (int card : arr) {
            ans[indices.front()] = card; // Reveal the card at the front index
            indices.pop_front(); // Remove the front index

            if (!indices.empty()) { // If indices deque is not empty
                indices.push_back(indices.front()); // Move the next index to the back
                indices.pop_front(); // Remove the old front index
            }
        }

        return ans;
    }
};