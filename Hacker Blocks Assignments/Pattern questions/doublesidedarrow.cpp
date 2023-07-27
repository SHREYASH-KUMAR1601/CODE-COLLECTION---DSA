#include <iostream>
using namespace std;

int main()
{
    int rowno = 1, trows;
    cin >> trows;
    int s=1;
    int sn=(trows+1)/2;
    while(rowno<=(trows+1)/2){
        int sp=0;
        while(sp<(trows+1)-(2*rowno)){
            cout<<"  ";
            sp++;
        }
        int p=rowno;
        int st=0;
        while(st<(rowno)){
            cout<<p<<" ";
            st++;
            p--;
        } 

        if(rowno!=1){    
        for(int i=0;i<s;i++){
            cout<<"  ";
            
        }
        s=s+2;
        }
               
        st=0;
        p=1;
        while(rowno!=1 and st<(rowno)){
            cout<<p<<" ";
            st++;
            p++;
        }

        cout<<endl;
        rowno++;
    }


// lower side
rowno=1;
while(rowno<=(trows-1)/2){
    int sp=0;
    while(sp<2*rowno){
        cout<<"  ";
        sp++;
    }
    int p=(trows+1)/2-rowno;
    int st=0;
    while(st<((trows-1)/2 - (rowno-1))){
        cout<<p<<" ";
        p--;
        st++;
    }

    for(int i=0;i<sn;i++){
        cout<<"  ";
    }
    sn=sn-2;

    int k=1;
    st=0;
    while(rowno!=(trows-1)/2 && st<((trows-1)/2 - (rowno-1))){
        cout<<k<<" ";
        k++;
        st++;
    }

    cout<<endl;
    rowno++;
}
    return 0;
}