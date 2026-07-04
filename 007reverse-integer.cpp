
//Problem: LeetCode 7 - Reverse Integer
  //Language: C++
  //Time Complexity: O(log10(x)) - because we divide the number by 10 in each loop
 //Space Complexity: O(1) - constant space used
 


#include<iostream>
#include<climits>
using namespace std;

int main(){

class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        
        while (x) {
            int digit = x % 10;
            if((ans > INT_MAX/10) || (ans < INT_MIN/10 )){
                return 0;
            }
            ans = ans * 10 + digit;
            x = x / 10;
        }
        return ans;
    }
};
}