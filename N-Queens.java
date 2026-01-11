1class Solution {
2
3    void final_board(char[][] prev_board,
4                     int row_cov,
5                     boolean[] col,
6                     boolean[] diag,      // i - j + n - 1 = k
7                     boolean[] anti_diag, // i + j = k
8                     List<List<String>> ans,
9                     int n) {
10
11        if (row_cov == n) {
12            List<String> temp = new ArrayList<>();
13            for (char[] row : prev_board) {
14                temp.add(new String(row));
15            }
16            ans.add(temp);
17            return;
18        }
19
20        for (int j = 0; j < n; j++) {
21            if (!col[j] &&
22                !diag[row_cov - j + n - 1] &&
23                !anti_diag[row_cov + j]) {
24
25                prev_board[row_cov][j] = 'Q';
26                col[j] = true;
27                diag[row_cov - j + n - 1] = true;
28                anti_diag[row_cov + j] = true;
29
30                final_board(prev_board, row_cov + 1, col, diag, anti_diag, ans, n);
31
32                prev_board[row_cov][j] = '.';
33                col[j] = false;
34                diag[row_cov - j + n - 1] = false;
35                anti_diag[row_cov + j] = false;
36            }
37        }
38    }
39
40    public List<List<String>> solveNQueens(int n) {
41
42        char[][] prev_board = new char[n][n];
43        for (char[] row : prev_board) {
44            Arrays.fill(row, '.');
45        }
46
47        boolean[] col = new boolean[n];
48        boolean[] diag = new boolean[2 * n - 1];
49        boolean[] anti_diag = new boolean[2 * n - 1];
50
51        List<List<String>> ans = new ArrayList<>();
52
53        final_board(prev_board, 0, col, diag, anti_diag, ans, n);
54        return ans;
55    }
56}
57