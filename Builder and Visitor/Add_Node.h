// -*- C++ -*-
// $Id: Add_Node.h 380 2010-02-08 05:10:33Z hillj $

//==============================================================================
/**
* Honor Pledge:
*
* I pledge that I have neither given nor received any help
* on this assignment.
*/
//==============================================================================
#ifndef _ADD_NODE_H
#define _ADD_NODE_H
#include "Bin_Node.h"
#include "Node_Visitor.h"

/**
 * @class Add_Node
 *
 *Basic implementation of a standard add command class for char with help of Bin_Command.h
 */
 class Add_Node : public Bin_Node
 {

public:
  // constructor
  Add_Node(void);
  //destructor
  virtual ~Add_Node(void);

    /**
    * method to get precedence value
    *
    *
    *
    * @param[int]        void
    * @return      int     return preceding value
    *
    */
    virtual int past();
    /**
      * Method to check the given expression
      *
      *
      *
      * @param[int]        void
      * @return      int     return preceding value
      *
      */
    virtual int eval(int a, int b)  ;
    /* return int for node */
    virtual int get_node();
    /**
    * accept method
    */
    virtual void accept (Node_Visitor &nodevisitor);
 };
 #endif //END SUB_NODE_H
