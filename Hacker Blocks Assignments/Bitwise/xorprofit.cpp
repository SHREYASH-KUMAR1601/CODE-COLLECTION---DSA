#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int y;
    cin>>y;
    int max=0;
    for (int i = x; i <= y; i++)
    {
        for (int j = y; j >=x ; j--)
        {
        int a=i;
        int b=j;
        int temp = a^b;
        if(temp>max){
            max=temp;
        }
        }    
    }
    
    cout<<max<<endl;
    return 0;
}