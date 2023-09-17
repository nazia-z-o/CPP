//
//  ReferenceAssignment.cpp
//  ProblemsAndSolutions
//
//  Created by Nazia Zaman on 9/6/23.
//

#include "ReferenceAssignment.hpp"
#include<iostream>
void Add(int a,int b, int &result)
{
    result=a+b;
}
void Factorial(int a, int &result)
{
    if(a<=1)
    {
        result=1;
        return;
    }
    Factorial(a-1,result);
    result=result*a;
}
void Swap(int &a, int &b)
{
    int t=a;
    a=b;
    b=t;
}
void testRefAssignment()
{
    using namespace std;
    int a=10;
    int b=87;
    int result;
    Add(a, b, result);
    cout<<"Add result: "<<result<<endl;
    Swap(a, b);
    Factorial(b, result);
    cout<<"Factorial of "<<b<<" = "<<result<<endl;
    
}
