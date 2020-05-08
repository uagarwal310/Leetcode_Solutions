//https://leetcode.com/problems/number-of-1-bits/
class NumberOf1Bits 
{
public:
    int hammingWeight(uint32_t n) 
    {
        int count = 0; 
        while (n) 
        { 
            count += n & 1; 
            n >>= 1; 
        } 
        return count; 
    }
};