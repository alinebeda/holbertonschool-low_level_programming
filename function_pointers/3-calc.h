#ifndef __CALC_H__
#define __CALC_H__

/**
 * struct op - Struct op
 *
 * @op: les op�rateurs
 * @f: The function associe
 */

/* Structure pour stocker les opérateurs et les fonctions correspondantes */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* Prototypes de fonctions */
int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif /* CALC_H */
