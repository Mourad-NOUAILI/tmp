#include<bits/stdc++.h>

void fill(std::vector<std::vector<int>>& M,int n){
    for(int i=1;i<n;++i){
        for(int j=1;j<n;++j){
            M[i][j] = M[i][j-1]+M[i-1][j];
        }
    }
}

void display_row(std::vector<std::vector<int>>& M, int n, int row_index){
    assert(row_index < n);
    int i=row_index;
    int j=0;
    while(i>=0) std::cout<<M[i--][j++]<<' ';
    std::cout<<'\n';
}

int main(){
    int n=6 ;
    std::vector<std::vector<int>> M(n,std::vector<int>(n,1));
    fill(M,n);

    int row_index=5;
    display_row(M,n,row_index);
}