// Chocolate Distribution Problem


class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(), a.end());
    long long start = 0, end =0;
    long long minDiff = LONG_LONG_MAX;  
    for(long long i =0; i+m-1<n; i++){
        long long diff = a[i+m-1]-a[i];
        if(minDiff>diff){
            minDiff = diff;
            start= i;
            end = i+m-1;
        }
    }
    return a[end]-a[start];
    }   
};
