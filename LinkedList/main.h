#include <bits/stdc++.h>
using namespace std;

#ifndef MAIN_H
#define MAIN_H
#endif
class Node
{
public:
    int data;
    Node *next;

    // Constructors
    Node()
    {
        data = 0;
        next = NULL;
    }
    Node(int t)
    {
        data = t;
        next = NULL;
    }
    Node(int t, Node *p)
    {
        data = t;
        next = p;
    }
};

// Methods
void Insert(Node **);
void Delete(Node **);
int Search(Node *);
void Reverse(Node **);
void Sort(Node **);
void RemoveDup(Node *);
void CountNodes(Node *);
void Display(Node *);
