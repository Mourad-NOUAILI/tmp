#include<bits/stdc++.h>

void fill(std::vector<std::vector<int>>& M,int n){
    for(int i=1;i<n;++i){
        for(int j=1;j<n;++j){
            M[i][j] = M[i][j-1]+M[i-1][j];
        }
    }
}

// row_index is the anti-diagonal at row i=row_index and column j=0
// Going anti-diagonally up (i--,j++), allow us to display the row at row_index of the pascal triangle 
std::vector<int> get_row(std::vector<std::vector<int>>& M, int n, int row_index){
    assert(row_index < n);
    std::vector<int> row;
    int i=row_index;
    int j=0;
    while(i>=0) row.push_back(M[i--][j++]);

    return row;
}

void display_row(std::vector<int>& row){
    for(auto e: row) std::cout<<e<<" ";
    std::cout<<'n';
}

int main(){
    int n=6 ;
    std::vector<std::vector<int>> M(n,std::vector<int>(n,1));
    fill(M,n);

    int row_index=5;
    std::vector<int> row = get_row(M,n,row_index);
    display_row(row);

    return 0;
}
