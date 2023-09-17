//
//  Const&CompoundTypesAssignment.cpp
//  ProblemsAndSolutions
//
//  Created by Nazia Zaman on 9/6/23.
//

#include "Const&CompoundTypesAssignment.hpp"
void TestAssignment()
{
    //Try to modify x1 & x2 and see the compilation output
    int x = 5 ;
    const int MAX = 12 ;
    int &ref_x1 = x ;
    const int &ref_x2 = x ;
    const int &ref_x3=MAX;
     
    //Try to modify the pointer (e.g. ptr1) and the pointee value (e.g. *ptr1)
    const int *ptr1 = &x ;// ptr contains a const int
    int *const ptr2 = &x ; // ptr is const
    const int * const ptr3 = &x ;// const ptr with const int
     
    //Find which declarations are valid. If invalid, correct the declaration
   // const int *ptr3 = &MAX ;
    const int *ptr4 = &MAX ;
    //int *ptr4 = &MAX ;
     
    const int &r1 = ref_x1 ;
    const int &r2 = ref_x2 ;
     
    const int *&p_ref1 = ptr1 ;//const int ptr reference
    int *const &p_ref2 = ptr2 ;//const ptr ref
     

}
