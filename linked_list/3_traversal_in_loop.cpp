#include<bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data = 34;
    Node* next;    //pointer , it is designed to store the memory address of next node in the list.

    Node(int data){
      this->data = data;
      this->next = NULL;
    }

};

void printlist(Node* head)
{
  Node* temp = head;
  while(temp != NULL){
    cout<<temp->data<<" -> ";
    temp = temp->next;
  }
  cout<<endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  //create 3 nodes
  Node* node1 = new Node(10); 
  Node* node2 = new Node(20);
  Node* node3 = new Node(30);

  //link them together: 10 -> 20 -> 30 -> NULL
  node1->next = node2;
  node2->next = node3;

  cout<<"my linked list: ";
  printlist(node1);


  return 0;
}