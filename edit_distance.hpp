#ifndef __ROTARYMARS__EDIT_DISTANCE__
#define __ROTARYMARS__EDIT_DISTANCE__
#include <algorithm>
#include <string>
#include <vector>
int editDistance(const std::string &A, const std::string &B) {
  int n = A.size(), m = B.size();
  std::vector<std::vector<int>> dp(n + 1, std::vector<int>(m + 1, 0));
  for (int i = 0; i <= n; ++i)
    dp[i][0] = i;
  for (int j = 0; j <= m; ++j)
    dp[0][j] = j;

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) {
      if (A[i - 1] == B[j - 1]) {
        dp[i][j] = dp[i - 1][j - 1];
      } else {
        dp[i][j] = std::min(
            {dp[i - 1][j] + 1, dp[i][j - 1] + 1, dp[i - 1][j - 1] + 1});
      }
    }
  }

  return dp[n][m];
}
#endif