#include<iostream>
#include<string>
using namespace std;
void srt (int n){
    if (n==0){
        return ;
    } 
    cout<<n<<endl;
     srt(n-1);
}
int main (){
srt(10);
}