#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;

};

Node *flatten(Node *root)
{
   // Your code here
   Node* tmp = root;
   int h = gethCount(tmp);
   int v = 0;
   Node** p = new Node*[h];
   for(int i = 0;i<h ;i++){
       v = getvCount(p[i]);
       p[i] = new Node*[v];
   }
   while(h){
       while(){
           if(p[j]->bottom > p[i]->next){
               p[j] = p[j]->bottom;
           }
       }
       
       h--;
       
   }
   return root;
}