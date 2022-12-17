def minOperations(S1, S2):
  N = len(S1)
  M = len(S2)
  dp = [[0] * (M+1) for _ in range(N+1)]
  
  for i in range(N+1):
    for j in range(M+1):
      if i == 0 or j == 0:
        dp[i][j] = 0
      elif S1[i-1] == S2[j-1]:
        dp[i][j] = dp[i-1][j-1]
      else:
        dp[i][j] = min(dp[i-1][j-1], dp[i-1][j], dp[i][j-1]) + 1
        
  return dp[N][M]
