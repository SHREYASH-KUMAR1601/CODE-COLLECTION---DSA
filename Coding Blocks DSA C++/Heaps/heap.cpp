#include<bits/stdc++.h>
using namespace std;

class MINheap{
    public:
    vector<int>v;
    MINheap(){
        v.push_back(-1);        // To match index with size
    }

    void insert(int data){
        v.push_back(data);
        int child=v.size()-1;
        while(child!=1){           
        int parent=child/2;
        if(v[child]<v[parent]){
            swap(v[child],v[parent]);
        }
        child=parent;
        }
    }

    void Heapify(int index){
        int minindex=index;
        int li=2*index;
        int ri=2*index+1;       
        if(li<=v.size()-1 and v[minindex]>v[li]){
            minindex=li;
        }
        if(ri<=v.size()-1 and v[minindex]>v[ri]){
            minindex=ri;
        }
        
        if(minindex!=index){
        swap(v[index],v[minindex]);
        Heapify(minindex);
        }
        
    }
    
    void pop(){
        swap(v[1],v[v.size()-1]);
        v.pop_back();
        Heapify(1);
    }



    int top(){
        return v[1];
    }

    bool empty(){
        return v.size()==1;   
    }

    int size(){
        return v.size()-1;
    }
};

void printheap(MINheap h){
    while(!h.empty()){
    cout<<h.top()<<" ";
    h.pop();
    }
    cout<<endl;
}
int main(){
    MINheap h;
    h.insert(1);
    h.insert(2);
    h.insert(3);
    h.insert(17);
    h.insert(19);
    h.insert(36);
    h.insert(7);
    h.insert(25);
    h.insert(100);

// printheap(h);

    while(!h.empty()){
    cout<<h.top()<<" ";
    h.pop();
    }
    cout<<endl;
    return 0;
}