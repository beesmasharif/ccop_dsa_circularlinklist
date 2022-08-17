//
//  circular linklist.cpp
//  circular linklist
//
//  Created by Bisma on 18/08/2022.
//

#include "circular linklist.hpp"
#include<iostream>
using namespace std;

class Node{
public:
    Node *next;
    int data;
    
};
class Linklist{
public:
    Node *head;
    Node *tail;
    Linklist(){
        head= NULL;
        tail= NULL;
        
    }
    void addnode(int position){
        Node *ptr= new Node;
        ptr->data= position;
        ptr->next= head;
        if (head== NULL){
            head= ptr;
            tail= ptr;
            ptr= NULL;
        }
        else{
            tail->next= ptr;
            tail=ptr;
            ptr= NULL;
        }
    }
    void printlist(){
        for(Node *i=head;i!=tail;){
            cout<<i->data<<endl;
            i= i->next;
        }
        cout<<tail->data<<endl;
        cout<<tail->next->data<<endl;
    }
};

int main(){
    Linklist l;
    l.addnode(1);
    l.addnode(2);
    l.addnode(3);
    l.printlist();
    
    return 0;
}
