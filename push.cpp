#include "stack.h"
#include <iostream>
#include <cstdlib>
void push(STACK &stack, int item)
{
if(stack.sp==stack.size){
std::cout<<"FAILED"<<std::endl;}
stack.buf[stack.sp] = item;;
stack.sp++;
std::cout<<"Ready for push"<<std::endl;
}
