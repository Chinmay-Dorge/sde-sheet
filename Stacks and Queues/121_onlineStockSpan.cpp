class StockSpanner {
public:
    const int m = 1e5 + 7;
    vector<int> nge;
    stack<int> s;
    
    StockSpanner() {
        nge.resize(m,1);    
    }
    
    int next(int price) {
        int ans = 1;
        while(!s.empty() && s.top() <= price){
            ans += nge[s.top()];
            s.pop();
        }
        nge[price] = ans;
        s.push(price);
        return nge[price];
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */