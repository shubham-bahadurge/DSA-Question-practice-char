#include<iostream>
#include<string>
using namespace std;
void srt (int n){
    if (n==0){
        return ;
    } 
    cout<<n<<endl;
     srt(n-1);}
     //febonachi
     int febo(int n) {
        if (n==0||n==1){
            return n;
            
        }
        return febo(n-1)+febo(n-2);
     }
     // check the array is sorted or not 
     bool srt1(int arr[],int n,int i){
        if(i ==n-1){
            return true;
        }
        if (arr[i]>arr[i+1]){
            return false;
        }
       return srt1( arr,n,i+1);
     }
     int srt3 (int arr[],int key,int n, int i){
        if(arr[i]==key){
            return i;
        }
        if (i ==n){
            cout << "element not found";
            return 0;
        }
        return srt3(arr,key, n,i+ 1);
     }

int main (){
srt(10);
cout<<febo(5);
int arr[5]={1,2,3,4,5};
int arr2[5]={1,2,3,6,5};
cout<<endl;
cout<<srt1(arr,5,0);
cout<<endl;
cout<<srt1(arr2,5,0);
cout<<endl;
cout<<srt3(arr,5,5,0);
}