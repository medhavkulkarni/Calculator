// $Id: Stack.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Add Command
//
#include "Mod_Node.h"

//constructor
Mod_Node::Mod_Node(void)
{

}
//destructor
Mod_Node::~Mod_Node(void)
{

}
//evaluate method for the two integers a and b
//addition of both the integers
int Mod_Node::eval (int a, int b)
{
    return a%b;
}
//method for the int value type
 int Mod_Node::get_node()
{
  return 5;
}
//check for the precendence value
int Mod_Node::past()
{
  return 1;
}

//accept method - node visitor
void Mod_Node::accept (Node_Visitor &nodevisitor)
{
  nodevisitor.see_Mod(*this);
}
