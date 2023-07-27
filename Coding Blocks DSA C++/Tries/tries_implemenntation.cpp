class node{
    public:
    char data;
    node* children[26];
    bool ends_here;
    node(char c){
        data=c;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        ends_here=false;
    }
};



class Trie {
    node*root;
public:
    Trie() {
        root=new node('\0');        
    }
    
    void insert(string word) {
       int n=word.size();
        node*temp=root;
        for(int i=0;i<n;i++){
            char curr=word[i];
            int index=curr-'a';
            if(temp->children[index]==NULL){
                temp->children[index]=new node(curr);
            }
            
            temp=temp->children[index];
        }
        temp->ends_here=true;
    }
    
    bool search(string word) {
        int n=word.size();
        node*temp=root;
        for(int i=0;i<n;i++){
            char curr=word[i];
            int index=curr-'a';
            if(temp->children[index]==NULL){
                return false;
            }
            temp=temp->children[index];
        }

        return temp->ends_here;
    }
    
    bool startsWith(string prefix) {
        int n=prefix.size();
        node*temp=root;
        for(int i=0;i<n;i++){
            char curr=prefix[i];
            int index=curr-'a';
            if(temp->children[index]==NULL){
                return false;
            }
            temp=temp->children[index];
        }

        return true; 
    }
};