int Solution::hammingDistance(const vector<int> &A) {
    long res=0;
    for(int i=0; i<32; i++){
        long set=0;
        for(int val=0; val<A.size(); val++){
            if((A[val] & (1<<i))!=0)
                set++;
        }
        long clear=(A.size()-set);
        long diff=set*clear*2;
        res=(res+diff)%1000000007;
    }
    return (int)res;
}

