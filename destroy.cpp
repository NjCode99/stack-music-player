#include "stack.h"
void destroy(STACK &stack)
{
delete [] stack.buf;
}
