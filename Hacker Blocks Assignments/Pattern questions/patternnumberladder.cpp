#include <iostream>
using namespace std;
int main()
{
    int rowno = 1, trows;
    cin >> trows;
    int i=1;
    while(rowno<=trows){

        int st=1;
        
        while(st<=rowno){
            cout<<i<<"  ";
            i++;
            st++;
        }

        cout<<endl;
        rowno++;
    }

    return 0;
}