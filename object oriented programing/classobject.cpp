#include <iostream>
#include<string>
using namespace std;

 class srt {
    //pro
string name ;
float cgpa;
//method
void getcgpa (){
    cout<<(cgpa*10)<<' ';
}
    };
    void count (){
        static int  coun =0;
        coun++;
        cout<<coun<<endl;
    }
int main (){
   srt s1;
   cout<<sizeof(s1)<<endl;
   count();
   count();
}