class Solution {
public:
    bool solve(int i,int j,int ind,vector<vector<char>>& board, string word,vector<vector<int>>&vis){
        int n=board.size();
        int m=board[0].size();
        if(ind==word.length()) return true;
        if (i < 0 || i >= n || j < 0 || j >= m ||
            vis[i][j] || board[i][j] != word[ind]) {
            return false;
        }
         vis[i][j]=1;
        int dr[4]={-1,0,1,0};
        int dc[4]={0,1,0,-1};
        for(int k=0;k<4;k++){
            int nr=i+dr[k];
            int nc=j+dc[k];
            if(solve(nr,nc,ind+1,board,word,vis)){
                return true;
            }
        }
        vis[i][j]=0;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(solve(i,j,0,board,word,vis)){
                    return true;
                }
            }
        }
        return false;
    }
};
