#include<iostream>
using namespace std;
//basic c++program with logical oprator
// int main(){
//     double a=33,b=45,n;
//     cout<<"hello world "<<endl;
//     cin>>n;
//     cout<<"hello world "<<n<<endl;
//     cout<<"hello world "<<double(a/b)<<endl;
//     bool z=((a<=b)||(a==b))&&(a>b);
//     cout<<"hello world "<<z<<endl;
//     return 0;
// }





//nested if-else if program
/*
int main(){
    int a,b,c;
    cout<<"enter a b c"<<endl;
    cin>>a>>b;
    if(a>b){
        c=a+b;
        cout<<"hello"<<endl<<c;
        if (a<b){
            cout<<"happy"<<endl;
        }
        else{
            cout<<"unhappy"<<endl;
        }
    }
    else if (a<b)
    {
        c=a/b;
        cout<<"divide "<<c<<endl;
    }
    
    else{
        c=a-b;
        cout<<"sello"<<c<<endl;
    }
    return 0;
}
*/



//to check the input is alphabitc or numeric in deep.
int main()
{
    cout<<"Enter 1 to check unpper lower case."<<endl;
    int a;
    cin>>a;
    if (a==1)
    {
        char ch;
        cout<<"Enter alphabatice inpute"<<endl;
        cin>>ch;
        if(ch>='a'&&ch<='z'){
            cout<<"The lower  alphabatic"<<endl;
        }
        else if(ch>='A'&&ch<='Z'){
            cout<<"given input is upper case"<<endl;
    }
        else{
            cout<<"Error";
    }
    }
    else{
        cout<<"undifined input."<<endl;
    }
}

