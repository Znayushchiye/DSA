#include <iostream>
using namespace std;
class Sub
{
public:
  int val;
  Sub *next;
  Sub()
  {
    val = 0;
    next = nullptr;
  }
  Sub(int val)
  {
    this->val = val;
    next = nullptr;
  }
};

class Node : public Sub
{
public:
  Sub *data;
  Node *next;
  Node()
  {
    // data = 0;
    next = nullptr;
  }
  Node(Sub *d)
  {
    data = d;
    next = nullptr;
  }
};
void print(Node *head)
{
  while (head != nullptr)
  {
    Sub* shead = head->data;
    while(shead != nullptr){
      cout << shead->val << "->";
      shead = shead->next;
    }
    cout << "NULL" << endl;
  }
}
int main()
{
  Node *head = new Node();
  int t;
  cin >> t;
  while (t--)
  {
    int n, val;
    cin >> n >> val;
    int count = n;
    Node *temp = head;
    while (count--)
    {
      Node *newNode = new Node();
      temp->next = newNode;
      temp = temp->next;
    }
    Sub *stemp = temp->data;
    while (stemp->next != nullptr)
    {
      stemp = stemp->next;
    }
    Sub *newSub = new Sub(val);
    stemp->next = newSub;
    delete (temp);
    delete (stemp);
  }
  print(head);
  return 0;
}