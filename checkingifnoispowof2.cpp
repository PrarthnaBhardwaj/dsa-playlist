
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n>0 && (n & (n-1)) == 0)  // checks for only positive no.
        return true;
        else
        return false;
    }
};