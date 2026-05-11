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
 
void displayrec(node * head){ //  using recursion 
    if(head==NULL) return ;
    cout<<head->data<<" ";
    displayrec(head->next);
}



class linkedlist{ // user defiend data strucutre 
public :
node* head ;
node * tail ;
int size ;
linkedlist(){
    head=tail=NULL ;
    size = 0 ; 
}

void insertatend(int val ){
    node * temp = new node(val);
    if(size==0) head=tail=temp;
    else{
        tail->next = temp ;
        tail = temp ;
    }
size++;
}

void display( ){
    node*temp = head ;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp-> next ;

    } cout << endl ; 
}

 void insertathead(int val){
    node* temp = new node(val);

    if(size == 0){
        head = tail = temp;
    }
    else{
        temp->next = head;
        head = temp;
    }

    size++;
}

void insertatIndex(int indx , int val){
    
    if (indx < 0 || indx>size) cout<<"invalid index "<<endl;
   else if(indx == 0) insertathead(val);
     else if (indx ==size)insertatend(val);
     else {
          node* t = new node(val);
          node * temp = head ;
          for (int i=0; i<indx-1;i++){
            temp = temp->next;
          }
          t->next = temp->next ;
          temp->next=t;
          size++ ;

     }
}

int getEleAtIdx(int val){
if(val<0 || val>=size) {
    cout<<"invalid index";  
    return -1;
}
else if (val==0)  return  head->data  ;
else if (val==size-1) return tail->data ; 
else {
node * temp = head ;
for(int i=0 ; i<val ; i++){
    temp = temp->next ;
}
return temp->data;
}
}


//------------------------  delete element from head ------------------------


void deleteathead(){
if(size==0){
    cout<<"LL is empty ! "<<endl;
    return ;
}
head = head->next;
size--;
}


// ------------------- delete element from tail ---------------------


void deleteattail(){
if(size==0){
    cout<<"LL is empty !";
    return ;
}
node * temp = head ; 
while(temp->next!=tail){
    temp = temp->next;
}
temp->next=NULL;
tail = temp ;
size--;
}
    
 
// ----------------- delete element of linklist from any index ----------------------------

void deleteatidx(int idx){
    if(size==0){
        cout<<"list is empty !"<<endl;
        return ;
    }
    else if(idx<0 || idx>=size){
        cout<<"invalid index !"<<endl;
        return ;
    }
    else if(idx==0) return deleteathead();
    else if(idx==size-1) return deleteattail();
    else {
        node * temp = head ;
        for (int i=1 ; i<=idx-1 ; i++){
            temp = temp->next;
        }
temp->next = temp->next->next ;
size-- ;
    }
}


};


//-------------- main program -----------------------------------------


int main(){
linkedlist ll ; // { }
ll.insertatend(10);
ll.insertatend(20);
ll.insertatend(30);
ll.insertatend(40);
ll.insertatend(50);
ll.insertatend(60);
ll.insertatend(70);
ll.insertatend(80);

ll.display() ;
cout<<ll.size;
ll.insertathead(50);
cout<<endl;
ll.display() ; 
ll.insertatIndex(4,90);
ll.display();
cout<<endl;
cout<<ll.getEleAtIdx(4)<<endl;
ll.deleteathead();
ll.display();
ll.deleteattail();
ll.display();
ll.deleteatidx(3);
ll.display();








    // node * a = new node(10);
    // node * b = new node(20);
    // node * c = new node(30);
    // node * d = new node(40);
    // node * f = new node(50);
    // node * g = new node(60);
    // node * h = new node(70);
    // node * i = new node(80);
     

    //  // connecting nodes
    // a->next = b;
    // b->next = c;
    // c->next = d;
    // d->next = f;
    // f->next = g;
    // g->next = h;
    // h->next = i;

     // better code 


     // remeber there explanation 
// void deleteFromHead(){
// // Remove the first node and move head forward.
//     if(size == 0){
//         cout << "List is empty" << endl;
//         return;
//     }

//     node* temp = head;
//     head = head->next;
//     delete temp;

//     size--;

//     if(size == 0){
//         tail = NULL;
//     }
// }

// void deleteFromTail(){
// // Move to second last node
// // Delete last node
// // Update tail
//     if(size == 0){
//         cout << "List is empty" << endl;
//         return;
//     }

//     if(size == 1){
//         delete head;
//         head = tail = NULL;
//         size--;
//         return;
//     }

//     node* temp = head;

//     while(temp->next != tail){
//         temp = temp->next;
//     }

//     delete tail;
//     tail = temp;
//     tail->next = NULL;

//     size--;
// }

// void deleteFromIndex(int idx){

//     if(idx < 0 || idx >= size){
//         cout << "invalid index" << endl;
//         return;
//     }

//     // delete first node
//     if(idx == 0){
//         deleteFromHead();
//         return;
//     }

//     node* temp = head;

//     // go to node just before index
//     for(int i = 0; i < idx - 1; i++){
//         temp = temp->next;
//     }

//     node* delNode = temp->next;

//     temp->next = delNode->next;

//     // if last node, update tail
//     if(delNode == tail){
//         tail = temp;
//     }

//     delete delNode;

//     size--;
// }


return 0 ;
}
