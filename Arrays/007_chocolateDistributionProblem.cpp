class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort(a.begin() , a.end());
        long long p1 = 0 , p2 = m-1, ans = INT_MAX;
        while(p2 < n){
            ans = min(ans, a[p2] - a[p1]);
            p2++;
            p1++;
        }
        return ans;
    }   
};