class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            int i=n-1;
            int j=0;
            while (arr2[j]<arr1[i] && i>=0 && j<=m-1){
                std::swap(arr2[j],arr1[i]);
                j++;
                i--;
            }
            std::sort(arr1,arr1+n);
            std::sort(arr2,arr2+m);
        }  
};