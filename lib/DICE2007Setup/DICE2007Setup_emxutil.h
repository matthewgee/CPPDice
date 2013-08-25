/*
 * DICE2007Setup_emxutil.h
 *
 * Code generation for function 'DICE2007Setup_emxutil'
 *
 * C source code generated on: Sat Sep  1 10:38:21 2012
 *
 */

#ifndef __DICE2007SETUP_EMXUTIL_H__
#define __DICE2007SETUP_EMXUTIL_H__
/* Include files */
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

#include "rtwtypes.h"
#include "DICE2007Setup_types.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */
extern void emxEnsureCapacity(emxArray__common *emxArray, int32_T oldNumel, int32_T elementSize);
extern void emxFree_real_T(emxArray_real_T **pEmxArray);
extern void emxInit_real_T(emxArray_real_T **pEmxArray, int32_T numDimensions);
#endif
/* End of code generation (DICE2007Setup_emxutil.h) */
