#ifndef _HEADER_
#define _HEADER_
/**
* struct op - Struct ор
*
* @op: The operator
* @f: The function associated
*/
typedef struct ор
{
char *ор;
int (*f)(int а, int b);
} op_t;
int op_add(int а, int b);
int op_sub(int а, int b);
int op_mul(int а, int b);
int op_div( int а, int b);
int op_mod(int а, int b);
int (*get_op_func(char *s))(int, int);
#endif
