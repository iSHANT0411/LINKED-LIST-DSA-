#include <iostream>
#include <string>
using namespace std;
// song :: ON AND ON - Ft. DANIEL LEVI | JUSTIN BIEBER | BEST SONGS 2018 | Must Watch Songs | CANDYMATE
//  Jonas Blue - Mama ft. William Singe
//  over come fixed size 
//  box in box ( value of any data type , memory location or address)[ 10  x2000 ]
// 

class node { // class name cas sensitive *********
public :
    int value ;
    node* next; // use same name upper and lower case 
    node (int value ) {
        this -> value = value ;
        this -> next = NULL ;

    }


};




 int main(){    
    // Node a;
    // a.value = 10;

    // Node b;
    // b.value = 10;

    // Node c;
    // c.value = 10;

    // Node d;
    // d.value = 10;
 // call constructor  *  
     node a(10);
     node b(100);
     node c(1000);
     node d(1002);


     a.next = &b;
     b.next = &c;
     c.next = &d;
     cout<<(b.next)->value<<endl;
     // ((a.next)->next)->value c ki value 
     // ((a.next)->next)->next)->value d ki value 
     // we will use the refrence oprator 
     //  (*(a.next)).next
     // star of any address is variable it self 

    cout<< (*(a.next)).value<<endl; // value of b ko print kra hai 
    cout<< ((*(a.next)).next)->value<<endl;  // value of c print kara hai 
    cout<< (((a.next)->next)->next)->value<<endl;
    
    node* temp = &a ;
    while(temp!=NULL){
          // cout<<temp->value;
          cout<<temp->value<<endl;
          temp = temp->next;

    }
 







    return 0;
}
