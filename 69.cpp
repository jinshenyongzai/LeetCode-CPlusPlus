#include <iostream>

using namespace std;

class Solution {
public:
	int mySqrt(int x) {
		
		if (x == 0)
			return 0;

		int left = 1, right = x;
		while (true) {
			int mid = left + (right - left) / 2;
			if (mid > x / mid) {
				right = mid - 1;
			}
			else {
				if (mid + 1 > x / (mid + 1))
					return mid;
				left = mid + 1;
			}
		}
	}
};

//int main() {
//
//	int x = 9;
//
//	int ans = Solution().mySqrt(x);
//	cout << ans << endl;
//}