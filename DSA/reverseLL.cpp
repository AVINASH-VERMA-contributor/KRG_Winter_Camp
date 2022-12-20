#include<bits/stdc++.h>
using namespace std;


struct node{
    int data;
    node *next;

};


node* insertNode(node *head,int val){
    if(head==NULL){
        node *newNode=new node();
        newNode->data=val;
        newNode->next=NULL;
        return newNode;
    }

    node *newNode=new node();

    newNode->data=val;
    node *tmp=head;

    while(tmp->next!=NULL){
        tmp=tmp->next;
    }
    
    tmp->next=newNode;
    newNode->next=NULL;
    
    return head;
}

node* reverse(node *head){
    node *curr=head;
    node* nxt=head;
    node* prev=NULL;

    while(curr!=NULL){
        nxt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxt;
    }

    return prev;
}

int main(){
    node *head=NULL;

    head=insertNode(head,1);
    head=insertNode(head,2);
    head=insertNode(head,3);
    head=insertNode(head,4);
    head=insertNode(head,5);


    head=reverse(head);

    node *temp=head;

    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    return 0;
}