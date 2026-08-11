class Solution {
public:
    unordered_map<int,bool> cache;
    bool DP(int rem)
    {
        if(cache.count(rem))
        {
            return cache[rem];
        }

        int n = abs(sqrt(rem));
        for(int i=1;i<=n;i++)
        {
            if(!DP(rem - (i*i)))
            {
                cache[rem] = true;
                return true;
            }

            cache[rem] = false;
            
        }
        return false;
    };
    bool winnerSquareGame(int n) {
        return DP(n);
    }
};