#include<iostream>
using namespace std ;
class node {
public : 
int data ;
node* next ;

node(int val){
    this->data = val ;
    this->next = NULL ;
}

   };

void display (node*head){
node* temp = head ; 
int n = 0 ;
while(temp!=NULL){
    cout<<temp->data<<" ";
    n++ ;
    temp = temp->next;
}
cout<<endl<<"size of LL is : "<<n<<endl;
}

void revdisplay(node * head){
    if(head == NULL) return ;// base case 
    revdisplay(head->next); // calling 
    cout<<head->data<<" "; // badh me printing 
}

void displayrec(node * head){ //  using recursion 
    if(head==NULL) return ;
    cout<<head->data<<" ";
    displayrec(head->next);
}


void insertAtEnd(node*head , int val){
    node * t = new node(val);
    while(head->next!=NULL)head = head->next;
    head->next = t ; 
}
int main(){
    node * a = new node(10);
    node * b = new node(20);
    node * c = new node(30);
    node * d = new node(40);
    node * f = new node(50);
    node * g = new node(60);
    node * h = new node(70);
    node * i = new node(80);
     

     // connecting nodes
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = f;
    f->next = g;
    g->next = h;
    h->next = i;

    display(a);

    revdisplay(a);
    cout<<endl ;
    insertAtEnd(a,100);
    cout<<endl ;
    displayrec(a);


}