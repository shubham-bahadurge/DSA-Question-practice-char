#include <iostream>
#include <vector>
using namespace std;
int main (){
    int a;
    vector<vector<int>> matrix = {{1,2,3,4},{4,5,6}};
    for (int i=0; i<matrix.size();i++)
    {
        for(int j =0; j<matrix[i].size();j++){
           cout<< matrix[i][j]<<' ';

        } cout<<endl;
    }
    vector<int> srt;
    for(int i =0; i<5;i++){
        srt.push_back(i);
    }
    cout<<srt.size()<<endl;
    cout<<srt.capacity()<<endl;
}