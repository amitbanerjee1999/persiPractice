#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

struct Node* reverseList(struct Node* head){
    struct Node *p,*c,*n;
    c=head;
    p=NULL;
    while(c!=NULL){
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
    return p;
}

//recursive way

// struct Node* reverseList(struct Node* head){
//     if(!head || !(head->next))  return head;
//     struct Node* res=reverseList(head->next);
//     head->next->next=head;
//     head->next=NULL;
//     return res;
// }

// Iterative way

void printList(struct Node* head){
    struct Node *temp=head;
    while(temp!=NULL){
        //printf("%d ",temp->data);
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}

int main(){
    int T,n,l,firstdata;
    cin>>T;

    while(T--){
        struct Node *head=NULL, *tail=NULL;
        cin>>n;
        cin>>firstdata;
        head=new Node(firstdata);
        tail=head;
        for(int i=1;i<n;i++){
            cin>>l;
            tail->next=new Node(l);
            tail=tail->next;
        }
        head=reverseList(head);
        printList(head);
        cout<<endl;
    }
    return 0;
}