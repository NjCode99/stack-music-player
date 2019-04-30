#include "stack.h"
#include <iostream>

void pop(STACK &stack, int &item)
{
if(stack.sp == stack.size)
std::cout<<"FAILED";
stack.buf[stack.sp] = item;
stack.sp++;
std::cout<<"Ready for pop"<<std::endl;
}
