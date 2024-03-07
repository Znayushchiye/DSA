#include <bits/stdc++.h>
class Node
{
public:
    long val;
    Node *nextNode;

    Node()
    {
        val = 0;
        nextNode = NULL;
    }
    Node(long key)
    {
        this->val = key;
        this->nextNode = NULL;
    }
};