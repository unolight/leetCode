class Solution {
public:
    int countPrimeSetBits(int L, int R) {
        int primes[8] = {2,3,5,7,11,13,17,19};
        int ans = 0;
        for(int i = L; i <= R; i++) {
            bitset<32> b(i);
            int cnt = b.count();
            for(int j = 0; j < 8; j++) if(primes[j] == cnt) {ans++; break;}         
        }

        return ans;
    }
};