class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> queue;

        for (int i = 0; i < tickets.size(); i++) {
            queue.push(i);
        }

        int t = 0;
        while(!queue.empty()){
            t++;
            int f = queue.front();
            queue.pop();

            tickets[f]--;

            if(k == f && tickets[f] == 0) return t;

            if(tickets[f] != 0 ) queue.push(f);
        }
        return t;
    }
    
};