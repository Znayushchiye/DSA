#include "node.cpp"
using namespace std;
class LinkedList
{
    node *findKthFromLast(node *head, int k)
    {
        if (head == NULL)
        {
            return NULL;
        }
        node *temp = head;
        std::vector<node *> vectorList;
        while (temp->next != NULL)
        {
            vectorList.push_back(temp->next);
        }
        int len = vectorList.size();
        if (len < k)
        {
            return NULL;
        }
        else if (len == k)
        {
            return head;
        }
        return vectorList[len - k - 1];
    }
    void insertion(node *head, long key)
    {
        node *newnode = new node(key);
        if (head == NULL)
        {
            head = newnode;
            return;
        }

        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
};
int main()
{
    LinkedList list;
    int n;
    cin >> n;

    return 0;
}
