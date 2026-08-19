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

  Node* node1 = new Node(10);  //


  cout<<"value of node1 : "<<node1->data<<endl;
  cout<<"address of node1 : "<<node1<<endl;

  cout<<"address of next node to node1 : "<<node1->next<<endl;

  return 0;
}