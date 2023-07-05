class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        // code here
        int temp = 0;
        for (int i = r; i >= l; i--) {
            if ((y & (1 << (i - 1))) != 0) {
                temp |= (1 << (i - 1));
            }
        }
        return x | temp;
    }
};
