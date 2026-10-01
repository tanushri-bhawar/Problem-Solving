// class Solution {
// public:
//     bool judgeSquareSum(int c) {
//         long long l=0;
//         long long r=sqrt(c);

//         while(l<=r)
//         {
//             int sum=(l*l)+(r*r);
//             if(sum==c)return true;
//             else if(sum<c)l++;
//             else r--;
//         }
//         return false;
//     }
// };
class Solution {
public:
    bool judgeSquareSum(int c) {
        long long left = 0;
        long long right = sqrt(c);

        while (left <= right) {
            long long sum = left * left + right * right;

            if (sum == c)
                return true;
            else if (sum < c)
                left++;
            else
                right--;
        }

        return false;
    }
};