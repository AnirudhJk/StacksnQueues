#include <iostream>

using namespace std;

class node {

    public:



    int data ; //data of the node

    node * next ; //pointing to a node



    node (){

        next = NULL ; //constructor

    }

} ;



//Defining a class linked list



class linkedList {

    public:

    node * head ; //head is a pointer



    linkedList (){

        head = NULL ; //Head pointing to NULL

    }



//insert



    void insert (int a){

        node * temp = new node ; //a new node is created whenever this function is called

        temp->data = a ; //assigning value to the data section of the node ;



        if (head == NULL) {

            head = temp ; //if linked list is empty then the head hold the address of temp



        }



        else {

            node*current = head ; //if linked list is not empty we have to use loop to reach the end of the linked list

            while (current->next != NULL){

                current = current->next ;

            }

            current->next = temp ;

            

        }

    }



//insertAt



    void insertAt (int pos, int data){

        

        node * temp = new node ; //forming a new node 

        temp->data = data ;

        int i = 1 ; //initiating i



        if (pos == 1) {

        temp -> next = head ;

        head = temp ; 

        temp = NULL ;  

        }





        else if (head==NULL){

            head = temp ; //if linked list is empty then the head hold the address of temp



        }



        else {

            node * current = head ; //current is a pointer pointing to the head

             while (i<pos-1){

            current = current -> next ; //looping till i<position - 1

            i++ ;

        }



        temp -> next = current -> next ;

            current -> next = temp ;

        }

       

    }



//delete



    int del(){

        node * current = head ; //current pointer pointing to head

        node * temp ; //temp pointer



        if (head==NULL){

                    //if head is already pointing to null so all is well brrooooo

        }



        else if (head->next == NULL){

            return (head->data) ;

            head = NULL ;

        }



        else{

            while (current -> next -> next != NULL){ //looping to get to the right pos

                current = current -> next ;

            }



        temp = current -> next ;

        current -> next = NULL ;

        return (temp->data) ;

        delete temp ; 

        }



        

    }





//deleteAt



    int deleteAt(int pos){

        node * current = head ;

        node * temp ;



        if (head==NULL){

                   //if head is already pointing to null so all is well brrooooo

        }



        else if (pos == 1){

            node * temp = head ;

            head = head -> next ;



            return (temp -> data) ;



        }



        else {

            int i=1 ;

            while ( i < pos-1){

                current = current -> next ;

                i++ ;

            }



            temp = current -> next ;

        current -> next = temp -> next ;

        temp -> next = NULL ;

        delete temp ;

        }



    }





    



//count items



    int countItem(){

        int count = 0 ;

        node * current = head; 



        while (current!=NULL) {

            count ++ ;

            current = current -> next ;

        }



        return count ;

    }



//print



    void display (){

        node * current ;

        current = head ; //node current 



        while (current != NULL){

            cout << current->data << " -> " ;

            current = current -> next ;

        }

        cout << "NULL" << endl ;

    }



};