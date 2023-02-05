class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long n=gifts.size();
        priority_queue<long long> p;
        for (auto x: gifts) {
            p.push(x);
        }
        long long ans=0;
        while(k--) {
            p.push(sqrt(p.top()));
            p.pop();
        }
        while(!p.empty()) {
            ans+= p.top();
            p.pop();
        }
        return ans;
    }
};
