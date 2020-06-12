/*
	LEETCODE SOLUTION: 999. Available Captures for Rook
	Link: https://leetcode.com/problems/available-captures-for-rook/
	coded by: harshvcode | harshvsingh.223@gmail.com
	at: 04:34 PM 12-06-2020
*/
class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int r=board.size(),c=board[0].size();
        int r1,c1;
        bool nb=true;
        for(int i=0; i<r && nb; i++){
            for(int j=0; j<c; j++){
                if(board[i][j] == 'R'){
                    nb=false;
                    r1=i;c1=j;
                    break;
                }
            }
        }
        int ans=0;
        int temp=r1-1;
        while(temp>=0){
            char X=board[temp][c1];
            if(X == 'p'){
                ans++;
                break;
            }else if(X == '.' || X == ','){
                temp--;
                continue;
            }else if(X == 'B') break;
            temp--;
        }
        temp=r1+1;
        while(temp<r){
            char X=board[temp][c1];
            if(X == 'p'){
                ans++;
                break;
            }else if(X == '.' || X == ','){
                temp++;
                continue;
            }else if(X == 'B') break;
            temp++;
        }
        temp=c1-1;
        while(temp>=0){
            char X=board[r1][temp];
            if(X == 'p'){
                ans++;
                break;
            }else if(X == '.' || X == ','){
                temp--;
                continue;
            }else if(X == 'B') break;
            temp--;
        }
        temp=c1+1;
        while(temp<c){
            char X=board[r1][temp];
            if(X == 'p'){
                ans++;
                break;
            }else if(X == '.' || X == ','){
                temp++;
                continue;
            }else if(X == 'B') break;
            temp++;
        }
        return ans;
    }
};