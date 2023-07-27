#include<iostream>
#include<queue>    // for heaps
using namespace std;

int main(){
    priority_queue<int>h;     // max heap
    priority_queue<int,vector<int>,greater<int>>h1;         // min heap
    h1.push(2);
    h1.push(7);
    h1.push(16);
    h1.push(34);
    h1.push(54);
    h1.push(78);
    h1.push(23);

    while(!h1.empty()){
        cout<<h1.top()<<" ";
        h1.pop();
    }
    cout<<endl;
    return 0;
}