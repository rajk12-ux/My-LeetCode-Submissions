1class Solution {
2public:
3    void final_board(vector<string> prev_board,int row_cov,vector<bool> col,vector<bool> diag/*i-j+n-1=k*/,vector<bool> anti_diag/*i+j=k*/,vector<vector<string>> &ans,int &n){
4        if(row_cov==n){
5            ans.push_back(prev_board);
6            return ;
7        }
8        for(int j=0;j<n;j++){
9            if(!col[j] && !diag[row_cov-j+n-1] && !anti_diag[row_cov+j]){
10                prev_board[row_cov][j]='Q';
11                col[j]=true;
12                diag[row_cov-j+n-1]=true;
13                anti_diag[row_cov+j]=true;
14                final_board(prev_board,row_cov+1,col,diag,anti_diag,ans,n);
15                prev_board[row_cov][j]='.';
16                col[j]=false;
17                diag[row_cov-j+n-1]=false;
18                anti_diag[row_cov+j]=false;
19            }
20        }
21        return ;
22    }
23    vector<vector<string>> solveNQueens(int n) {
24        vector<string> prev_board(n,string(n,'.'));
25        vector<bool> col(n);
26        vector<bool> diag(2*n-1)/*i-j+n-1=k*/;
27        vector<bool> anti_diag(2*n-1)/*i+j=k*/;
28        vector<vector<string>> ans;
29        final_board(prev_board,0,col,diag,anti_diag,ans,n);
30        return ans;
31    }
32};