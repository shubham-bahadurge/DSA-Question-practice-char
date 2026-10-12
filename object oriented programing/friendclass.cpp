#include<iostream>
#include<string>
using namespace std ;
class a { 
    int scrate =1;
friend class b;
};
class b{
    public:
    void showsecret(a &obj){
        cout<<obj.scrate;
    }
    };


class c {
    public:
    c(){
        cout<<"hi";
    }
    ~c(){
        cout<<"hi";
    }
    
};
int main(){
a s1;

b s2;

s2.showsecret(s1);
c s4;
}