#include <bits/stdc++.h>
using namespace std;

vector<string> arr(9);

int board[9][9];

bool check(int row,int col,int x){
    for(int i=0;i<9;i++){
        if(board[row][i]==x){
            return false;
        }
        if(board[i][col]==x){
            return false;
        }
    }
    int br = (row/3)*3;
    int bc = (col/3)*3;
    for(int i=0;i<3;i++){
       for(int j=0;j<3;j++){
           if(board[br+i][bc+j]==x)return false;
       } 
    }
    return true;
}

void rec(int i,int j){
    // base case
    if(i==9){
        // print
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    // recursive case
    // choice
    if(arr[i][j]=='.'){
        for(int ch=1;ch<=9;ch++){
            // check
            if(check(i,j,ch)){
                // move
                board[i][j] = ch;   
                if(j<8)rec(i,j+1);
                else rec(i+1,0);
                board[i][j] = 0;
            }
        }
    }else{
        int ch = (arr[i][j]-'0');
        // check
        if(check(i,j,ch)){
            // move
            board[i][j] = ch;   
            if(j<8)rec(i,j+1);
            else rec(i+1,0);
            board[i][j] = 0;
        }
    }
}
// 

int main()
{
   
    arr = {
        "91...8.2.",
        ".8734.9.5",
        "25..97...",
        ".7...5.3.",
        "1.2.34..8",
        "..82.97.4",
        "....5.3..",
        ".....32.6",
        "34..268.1",
    };
    rec(0,0);
}