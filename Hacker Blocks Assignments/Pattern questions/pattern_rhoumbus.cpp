#include <iostream>
using namespace std;
int main()
{
    int rowno = 1, trows;
    cin >> trows;
    while(rowno<=trows){
        int sp=0;
        while(sp<trows-rowno){
            cout<<" "<<"    ";
            sp++;
        }
        int p=rowno;
        int st=0;
        while(st<(2*(rowno)-1)/2 + 1){
            cout<<p<<"    ";
            st++;
            p++;
        }
        p--;
        st=0;
        
        while(st<=(2*(rowno)-1)/2 -1){
            p--;
            cout<<p<<"    ";
            st++;
        }

        cout<<endl;
        rowno++;
    }


//lower side
    rowno=1;
    while(rowno<=trows-1){
        int sp=0;
        while(sp<rowno){
            cout<<" "<<"    ";
            sp++;
        }
        int p=trows-rowno;
        int st=0;
        while(st<trows-rowno){
            cout<<p<<"    ";
            st++;
            p++;
        }
        p--;
        st=0;
        
        while(st<trows-rowno-1){
            p--;
            cout<<p<<"    ";
            st++;
        }

        cout<<endl;
        rowno++;
    }

    return 0;
}