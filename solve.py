# Input the grid dimensions and the grid
m, n = map(int, input().split())
grid = [list(map(int, input().split())) for _ in range(m)]

# Create a DP table initialized to 0
dp = [[0] * n for _ in range(m)]

# Initialize the starting point
if grid[0][0] == 1:
    dp[0][0] = 1

# Fill the first row
for j in range(1, n):
    if grid[0][j] == 1:
        dp[0][j] = dp[0][j - 1]

# Fill the first column
for i in range(1, m):
    if grid[i][0] == 1:
        dp[i][0] = dp[i - 1][0]

# Fill the rest of the DP table
for i in range(1, m):
    for j in range(1, n):
        if grid[i][j] == 1:
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1]

# Output the number of unique paths to the bottom-right corner
print(dp[m - 1][n - 1])
