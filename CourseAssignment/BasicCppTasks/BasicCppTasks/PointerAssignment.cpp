//
//  PointerAssignment.cpp
//  ProblemsAndSolutions
//
//  Created by Nazia Zaman on 9/6/23.
//

#include "PointerAssignment.hpp"
#include<iostream>
using namespace std;
int Add(int *a, int *b)
{
    return *a + *b;
}
void AddVal(int *a, int *b, int *result)
{
    *result=*a + *b;
}
void Swap(int *a, int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
void Factorial(int *a, int *result)
{
    if(*a<=1)
    {
        *result=1;
        return;
    }
    int t=*a-1;
    Factorial(&t, result);
    *result=(*result) * (*a);
}
void testPointerAssignment()
{
    int a=10;
    int b=9;
    int result=Add(&a, &b);
    cout<<"Add: "<<result<<endl;
    a=90;
    b=99;
    AddVal(&a,&b, &result);
    cout<<"AddVal: "<<result<<endl;
    Swap(&a, &b);
    cout<<"Swap: a="<<a<<" b="<<b<<endl;
    
    a=9;
    Factorial(&a,&result);
    cout<<"Factorial "<<a<<" : "<<result<<endl;
}
