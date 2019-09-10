#include <iostream>
#include <cstddef>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:

      Node* insert(Node *head,int data)
      {
          Node * newNode = new Node(data);
          Node * tail = head;
          if( head == NULL) {
              return newNode;
          }
          else {
          for (;tail->next; tail = tail->next);
          tail->next = newNode;
          return head; 
          }
      }

      void display(Node *head)
