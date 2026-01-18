class StockSpanner {
public:
    stack<pair<int,int>> st;
    StockSpanner() {
        
    }
    
    int next(int p) {
        int s=1;
        while(!st.empty() && st.top().first <= p) {
            s+=st.top().second;
            st.pop();}
        st.push({p,s});
        return s;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */