#ifndef __LIB_REAL_NUMBER_H
#define __LIB_REAL_NUMBER_H

#include <stdint.h>

#define FIXED_POINT (1 << 14)

/* Fixed point representation as typedef. */
typedef int real_t;

/* Convert n to fixed point. */
#define CONVERT_INT_TO_REAL(N) (N * FIXED_POINT)



/* Convert x to integer (rounding toward zero). */
#define CONVERT_REAL_TO_INT_ZERO_ROUND(X) (X / FIXED_POINT)


/* Convert x to integer (rounding to nearest). */
#define CONVERT_REAL_TO_INT_NEAREST_ROUND(X) (X >= 0 ?  ((X + FIXED_POINT / 2) / FIXED_POINT) \
	: ((X - FIXED_POINT / 2) / FIXED_POINT))

/* Add x and y. */
#define ADD_REAL_REAL(X, Y) (X + Y)




/* Subtract y from x. */
#define SUB_REAL_REAL(X, Y) ( X - Y)



/* Add x and n. */
#define ADD_REAL_INT(X, N) (X + N * FIXED_POINT)

/* Subtract n from x. */
#define SUB_REAL_INT(X, N) (X - N * FIXED_POINT)



/* Multiply x by y. */
#define MULTIPLY_REAL_REAL(X, Y) (((int64_t) X) * Y / FIXED_POINT)



/* Multiply x by n. */
#define MULTIPLY_REAL_INT(X, N) (X * N)



/* Divide x by y. */
#define DIVIDE_REAL_REAL(X, Y) (((int64_t) X) * FIXED_POINT / Y)



/* Divide x by n. */
#define DIVIDE_REAL_INT(X, N) (X / N)









#endif /* lib/real-number.h */
