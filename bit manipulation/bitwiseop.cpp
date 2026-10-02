// bitwaise opptration 
#include <iostream>
using namespace std;
int srt (int element , int i){
    int bitmask = 1<<i;
    if(!(element &bitmask)){
        return 0;

    }else{
        return 1;
    }
}
// sit i th bit//

int srt1 (int element , int i){
    int bitmask = 1<<i;
    return(element |(bitmask ));
}
//clear the bit 
int srt2 (int element , int i){
    int bitmask = 1<<i;
    return(element &(~bitmask ));
}
bool srt3 (int num ){
    if(!(num&num-1)){
        return true;
    } 
    else{
        return false;
    }
}
//qus 1
 void srt4(int num,int i,int value){
num = num& ~(1<<i);
num = num | (value<<i);
cout<< num<<endl;
}
//clear last i bits
void srt5 (int num ,int i ){
    num = num&(~0)<<i;
    cout<<num<<endl;
}
void srt6 (int num){
    int count =0;
    while(num>0){
        int ligstd = num&1;
        count += ligstd;
        num = num>>1;
    }
cout<<count<<endl;
}
void srt7 (int num ,int n){
   int  ans =1;
   while (n>0)
   {
    int listd = n&1;
    if(listd){
        ans= ans *num;
    }
    num=num*num;
    n=n>>1;
   }
   cout<<ans<<endl;
}
int main (){
//and &
cout <<(3&5)<<endl;
//or
cout<<(3|5)<<endl;
//xor
cout<<(3^5)<<endl;
//not 
cout<<(~6)<<endl;
//lift shift
cout<<(7<<2)<<endl;
//right shift 
cout<<(7>>2)<<endl;
//find i th element 
cout<<srt(6,2)<<endl;
//set i th bit(1)
cout<<srt1(6,3)<<endl;
//clear i th bit
cout<<srt2(6,2)<<endl;
//find the num is power of 2 or not 
cout<<srt3(8)<<endl;
//prictice qus 
 srt4(7,3,1);
 //qus2
 srt5(6,2);
 //qus3
 srt6(10);
 //power of any num
 srt7(3,5);
}

