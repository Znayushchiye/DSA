#include <iostream>
#include "Node.cpp"
using namespace std;
class LinkedList
{
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }
    void insertion(long key)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            temp = temp->nextNode;
        }
        Node newNode(key);

        temp->nextNode = &newNode;
    }
    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << endl;
            temp = temp->nextNode;
        }
    }
};
int main()
{
    LinkedList ll;
    int n;
    cin >> n;
    while (n--)
    {
        ll.insertion(n);
    }
    ll.print();
    return 0;
}