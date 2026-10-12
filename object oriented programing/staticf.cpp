#include<iostream>
#include<string>
using namespace std;
class shubhiii {
public:
 static  int x ;// can not assgin value direct

};
int shubhiii::x=0;//assign using scop
int main(){
    shubhiii srt1;
    shubhiii srt2;
    shubhiii srt3;
    
    cout<<srt1.x++;
     cout<<srt2.x++;
      cout<<srt3.x++;

}