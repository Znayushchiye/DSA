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
        Node *newnode = new Node(key);
        if (head == NULL)
        {
            head = newnode;
            return;
        }

        Node *temp = head;
        while (temp->nextNode != NULL)
        {
            temp = temp->nextNode;
        }
        temp->nextNode = newnode;
    }
    void print()
    {
        if (head == NULL)
        {
            cout << "List Empty" << endl;
            return;
        }

        Node *temp = head;
        while (temp != NULL)
        {
            cout << head->val << endl;
            head = head->nextNode;
        }
    }
};
int main()
{
    LinkedList ll;
    cout << "Enter n : ";
    int n;
    cin >> n;
    while (n != 0)
    {
        ll.insertion(n);
        n--;
    }
    ll.print();
    return 0;
}