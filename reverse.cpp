#include<iostream>
using namespace std;
int main(){
    int a,r=0,v;
    cout<<"enter number"<<endl;
    cin>>a;
    do{
        v=a%10;
        r=r*10+v;
        a/=10;
    }
    while(a!=0);
    cout<<"number is reversed"<<r;
    return 0;
}






///ASCII number for all
// int main(){
//     char a;
//     cin>>a;
//     cout<<"The ASCII is: "<<int(a);
//     cout<<endl;
//     }






