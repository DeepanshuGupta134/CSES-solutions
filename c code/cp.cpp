#include<bits/stdc++.h>
using namespace std ;

int parent[100];
int size[100];

int find(int v){
    if(v == parent[v]){
        return v ;
    }
    return parent[v] = find(parent[v]);
}

int Union(int a ,int b){
    a = find(a);
    b = find(b);

    if(a!=b){
        if(size[a] < size[b]){
            swap(a , b);
        }
        parent[b] = a ;
        size[a] += size[b];

    }
}

int createSet(int v){
    parent[v] = v ;
    size[v] = 1 ;
}



int main(){
    
}