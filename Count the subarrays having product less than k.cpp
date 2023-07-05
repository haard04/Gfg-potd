class Solution{
public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int count = 0;
        int start = 0;
        long long product = 1;
        
        for (int end = 0; end < n; end++) {
            product *= a[end];
            
            while (start <= end && product >= k) {
                product /= a[start];
                start++;
            }
            
            count += (end - start + 1);
        }
        
        return count;
    }
};