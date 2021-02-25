/*#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int queenCount=0;
bool isItSafe(vector<vector<bool>> &grid,int row,int col,int n)
{
    int i,j;
    //column check
    for(int i=row-1;i>=0;i--)
    {
        if(grid[i][col]==true)
        return false;
    }
    for(int i=row-1,j=col-1;i>=0;i--,j--)
    {   //left upper diagonal
        if(grid[i][j])
        return false;

    }
    for(int i=row-1,j=col+1;i>=+0 and j<n; i--,j++)
    {//right upper diagonal
        if(grid[i][j])
        return false;

    }
    return true;


}
void display(vector<vector<bool>> &grid,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(grid[i][j])
            {
                cout<<"Q ";
            }
            else
            {
                cout<<". ";
            }
        }
        cout<<endl;
    }
}





void countNQueen(vector<vector<bool>>&grid,int curr_row,int n)
{
   //base case
   if(curr_row==n)
   {
       //We found one way
       queenCount++;
       display(grid,n);
       cout<<"\n\n";
       return;

   } 
   for(int i=0;i<n;i++)
   {    // we will go to each spot/column
       if(isItSafe(grid,curr_row,i,n))
       {
           grid[curr_row][i]=true;
           countNQueen(grid,curr_row+1,n);
           grid[curr_row][i]=false; //reinitialization
       }
   }
}

int main()
{
    int n;
    cin>>n;
    vector<vector<bool>>grid(n,vector<bool>(n,false));
    countNQueen(grid,0,n);
    cout<<queenCount<<endl;
}  
*/
#include <bits/stdc++.h>

using namespace std;

int n = 0;
int aux = 0;

vector<vector<char>> tab;

void init(){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            tab[i][j] = '-';
        }
    }
}

bool isSafe(int line, int col) {
    int k;
    for (int i = line; i >= 0; i--) {
        if (tab[i][col] == 'Q') return false;
    }

    k = line;
    for (int j = col; j >= 0 && k >= 0; j--, k--) {
        if (tab[k][j] == 'Q') return false;
    }
    k = line;
    for (int j = col; j < n && k >= 0; j++, k--) {
        if (tab[k][j] == 'Q') return false;
    }

    return true;
}

bool backtrack(int linha, int col) {
    if (linha >= n){
        aux = 1000;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << tab[i][j] << "   ";
            }
            cout << "\n";
        }
        cout << "\n";
        return true;
    }


    for (int j = col; j < n; j++) {
        if (isSafe(linha, j)) {
            tab[linha][j] = 'Q';
            backtrack(linha + 1, col);
            tab[linha][j] = '-';
        }

    }

    return false;

}

void print(int linha, int col) {
        if (backtrack(linha, col) == false && aux == 0) {
            cout << "Not Possible\n\n";
        }
        //init();
    }



int main() {
    ios::sync_with_stdio(false), cin.tie(0);
    vector<char> aux;
    while (cin >> n) {

        for (int j = 0; j < n; j++) {
            aux.push_back('-');
        }
        for (int i = 0; i < n; i++) {
            tab.push_back(aux);
        }

        print(0,0);
        tab.clear();


    }

    return 0;
}