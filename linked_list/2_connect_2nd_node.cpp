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

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  //create first node
  Node* node1 = new Node(10); 

  //data and memory address of node1
  cout<<"value of node1 : "<<node1->data<<endl;
  cout<<"address of node1 : "<<node1<<endl;

  //create 2nd node
  Node* node2 = new Node(20);
  // link the first node to 2nd node
  node1->next = node2;

  // data value and memory address of node2
  cout << "Node 1's 'next' now points to: " << node1->next << endl;
  cout<<"node 2 address : "<< node2<<endl;
  cout<<"Data in node2 : "<<node1->next->data<<endl;
  cout<<"Data in node2 : "<<node2->data<<endl;

  cout<<"address of next node to node1 : "<<node2->next<<endl;

  return 0;
}