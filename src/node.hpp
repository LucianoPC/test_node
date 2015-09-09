#ifndef NODE_HPP

class Node
{
public:
  Node(int value, Node *prev = NULL, Node *next = NULL)
  {
    this->value = value;
    this->prev = prev;
    this->next = next;
  }

  int value;
  Node *prev;
  Node *next;
};

#endif
