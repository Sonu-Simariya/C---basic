#include<iostream>
#include<string.h>
using namespace std;
// int main()
/*
{
    int abc[10] = {23,4,56,2,7,4,8,5};
    // cout<<abc[9]<<endl;
    // cout<<&abc<<endl;
    // cout<<abc[0]<<endl;

    // for(int i=0;i<10;i++)
    // {
    //     cout<<abc[i]<<" ";
    // }
    // return 0;


    for(int i=0;i<10;i++)
    {
        cout<<&abc[i]<<" ";
    }
    return 0;

    
    // cout<<sizeof(abc)<<endl;
}*/




// int main(){
//     int array[10]={44,2,21,3,1,43,2,2,3,2};
//     cout<<&array<<endl;
//     int *ptr=&array[10];
//     int i=0;
//     for (i=0;i<10;i++){
//         cout<<array[i]<<endl;
//     }
//     cout<<&ptr<<endl;
//     int **ptr2=&ptr;
//     cout<<&ptr2<<endl;
//     cout<<**ptr2<<endl;



//     return 0;


// }

int main(){
    char arr[4];
    cout<<"enter 5 values: "<<endl;
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    for(int n=0;n<4;n++){
        cout<<arr[n]<<" "<<endl;
    }
    cout<<&arr;
}