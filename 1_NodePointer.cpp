#include <iostream>
#include <string>
using namespace std;
class  node {
public : 
         int val ;
         node* next ;
    node(int value){
        val = value ;
        this->next = NULL ;
    }     
 };

 int main(){    
    node* a = new node(10) ;
    node* b = new node(20) ;
    node* c = new node(30) ;
    node* d = new node(40) ;
     
    a->next = b ; // b address hai  
    b->next = c ; // 
    c->next = d ;
   cout<<a<<endl;
   cout<<(*a).val<<endl ; // ointer.value
   cout<<a->val<<endl ;   // address.value 
   cout<<d->next<<endl ;  // null address to tail node 

   // printing the linked list 
   node* temp = a; // temp = address of a 
   while ( temp != NULL ){
    cout << temp -> val << " ";
    temp = temp->next ;
   }
    return 0;
}
