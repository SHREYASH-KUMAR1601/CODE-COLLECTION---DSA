#include <iostream>
using namespace std;
int main()
{
    int rowno = 1, trows;
    cin >> trows;
    while(rowno<=(trows+1)/2){
        int sp=0;
        while(sp<(trows+1)/2 -rowno){
            cout<<" ";
            sp++;
        }
        int st=0;
        while(st<2*(rowno)-1){
            cout<<"*";
            st++;
        }

        int s=0;
        while(sp<(trows+1)/2 -rowno){
            cout<<" ";
            s++;
        } 
        cout<<endl;
        rowno++;
    }

// lower side
    rowno=1;
    while(rowno<=(trows-1)/2){
        int sp=0;
        while(sp<rowno){
            cout<<" ";
            sp++;
        }

        int st=0;
        while(st<trows-2*rowno){
            cout<<"*";
            st++;
        }

        int s=0;
        while(s<rowno){
            cout<<" ";
            s++;
        }
        cout<<endl;
        rowno++;
    }
    return 0;
}