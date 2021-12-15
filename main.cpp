#include <iostream>
using namespace std;
int main() {
    int i=0,sum=0;
    int months[2][13]{{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};
    int y,d;
    cin>>y>>d;
    if (y%4==0&&y%100!=0||y%400==0){
    for(;sum<=d;i++){
        sum=sum+months[1][i];
        if(d-sum<=months[1][i+1])
            break;
    }
        cout<<i+1<<"   "<<d-sum;
    }
    else{
       for(;sum<=d;i++){
            sum=sum+months[0][i];
           if(d-sum<=months[0][i+1])
               break;
        }
        cout<<i+1<<"   "<<d-sum;
    }
}
