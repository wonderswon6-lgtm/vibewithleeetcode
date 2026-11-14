class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;

        int rev_no = 0;

        while (x > rev_no)
        {
            int ld = x % 10;

            rev_no = (rev_no * 10) + ld;

            x = x / 10;
        }

        if (x == rev_no || x == rev_no / 10)
            return true;
        else
            return false;
    }
};