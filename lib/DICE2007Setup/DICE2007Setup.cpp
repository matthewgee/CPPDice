/*
 * DICE2007Setup.cpp
 *
 * Code generation for function 'DICE2007Setup'
 *
 * C source code generated on: Sat Sep  1 10:38:21 2012
 *
 */

/* Include files */
#include "DICE2007Setup.h"
#include "DICE2007Setup_emxutil.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
void DICE2007Setup(const struct_T param, b_struct_T *vars)
{
  int32_T i0;
  int32_T loop_ub;

  /*  Sets up the appropriate arrays for the endogenous variables for  */
  /*  the DICE 2007 model, modifying the struct vars */
  /*  written by Matt Gee */
  /*  last modified August 23rd, 2012 */
  /*  Declare the endogenous variables as members of struct vars */
  vars->welfare = 0.0;
  i0 = vars->utility->size[0];
  vars->utility->size[0] = (int32_T)param.tmax;
  emxEnsureCapacity((emxArray__common *)vars->utility, i0, (int32_T)sizeof
                    (real_T));
  loop_ub = (int32_T)param.tmax - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    vars->utility->data[i0] = 0.0;
  }

  i0 = vars->utilitydiscounted->size[0];
  vars->utilitydiscounted->size[0] = (int32_T)param.tmax;
  emxEnsureCapacity((emxArray__common *)vars->utilitydiscounted, i0, (int32_T)
                    sizeof(real_T));
  loop_ub = (int32_T)param.tmax - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    vars->utilitydiscounted->data[i0] = 0.0;
  }

  i0 = vars->consumption->size[0];
  vars->consumption->size[0] = (int32_T)param.tmax;
  emxEnsureCapacity((emxArray__common *)vars->consumption, i0, (int32_T)sizeof
                    (real_T));
  loop_ub = (int32_T)param.tmax - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    vars->consumption->data[i0] = 0.0;
  }

  i0 = vars->consumptionpercapita->size[0];
  vars->consumptionpercapita->size[0] = (int32_T)param.tmax;
  emxEnsureCapacity((emxArray__common *)vars->consumptionpercapita, i0, (int32_T)
                    sizeof(real_T));
  loop_ub = (int32_T)param.tmax - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    vars->consumptionpercapita->data[i0] = 0.0;
  }

  i0 = vars->investment->size[0];
  vars->investment->size[0] = (int32_T)param.tmax;
  emxEnsureCapacity((emxArray__common *)vars->investment, i0, (int32_T)sizeof
                    (real_T));
  loop_ub = (int32_T)param.tmax - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    vars->investment->data[i0] = 0.0;
  }

  i0 = vars->capital->size[0];
  vars->capital->size[0] = (int32_T)param.tmax;
  emxEnsureCapacity((emxArray__common *)vars->capital, i0, (int32_T)sizeof
                    (real_T));
  loop_ub = (int32_T)param.tmax - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    vars->capital->data[i0] = 0.0;
  }

  i0 = vars->grossoutput->size[0];
  vars->grossoutput->size[0] = (int32_T)param.tmax;
  emxEnsureCapacity((emxArray__common *)vars->grossoutput, i0, (int32_T)sizeof
                    (real_T));
  loop_ub = (int32_T)param.tmax - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    vars->grossoutput->data[i0] = 0.0;
  }

  i0 = vars->output->size[0];
  vars->output->size[0] = (int32_T)param.tmax;
  emxEnsureCapacity((emxArray__common *)vars->output, i0, (int32_T)sizeof(real_T));
  loop_ub = (int32_T)param.tmax - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    vars->output->data[i0] = 0.0;
  }

  i0 = vars->abatement->size[0];
  vars->abatement->size[0] = (int32_T)param.tmax;
  emxEnsureCapacity((emxArray__common *)vars->abatement, i0, (int32_T)sizeof
                    (real_T));
  loop_ub = (int32_T)param.tmax - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    vars->abatement->data[i0] = 0.0;
  }

  i0 = vars->emissionsIndustrial->size[0];
  vars->emissionsIndustrial->size[0] = (int32_T)param.tmax;
  emxEnsureCapacity((emxArray__common *)vars->emissionsIndustrial, i0, (int32_T)
                    sizeof(real_T));
  loop_ub = (int32_T)param.tmax - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    vars->emissionsIndustrial->data[i0] = 0.0;
  }

  i0 = vars->emissionsTotal->size[0];
  vars->emissionsTotal->size[0] = (int32_T)param.tmax;
  emxEnsureCapacity((emxArray__common *)vars->emissionsTotal, i0, (int32_T)
                    sizeof(real_T));
  loop_ub = (int32_T)param.tmax - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    vars->emissionsTotal->data[i0] = 0.0;
  }

  i0 = vars->carbonEmitted->size[0];
  vars->carbonEmitted->size[0] = (int32_T)param.tmax;
  emxEnsureCapacity((emxArray__common *)vars->carbonEmitted, i0, (int32_T)sizeof
                    (real_T));
  loop_ub = (int32_T)param.tmax - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    vars->carbonEmitted->data[i0] = 0.0;
  }

  i0 = vars->emissionsControl->size[0];
  vars->emissionsControl->size[0] = (int32_T)param.tmax;
  emxEnsureCapacity((emxArray__common *)vars->emissionsControl, i0, (int32_T)
                    sizeof(real_T));
  loop_ub = (int32_T)param.tmax - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    vars->emissionsControl->data[i0] = 0.0;
  }

  i0 = vars->damage->size[0];
  vars->damage->size[0] = (int32_T)param.tmax;
  emxEnsureCapacity((emxArray__common *)vars->damage, i0, (int32_T)sizeof(real_T));
  loop_ub = (int32_T)param.tmax - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    vars->damage->data[i0] = 0.0;
  }

  i0 = vars->participation->size[0];
  vars->participation->size[0] = (int32_T)param.tmax;
  emxEnsureCapacity((emxArray__common *)vars->participation, i0, (int32_T)sizeof
                    (real_T));
  loop_ub = (int32_T)param.tmax - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    vars->participation->data[i0] = 0.0;
  }

  i0 = vars->participationMarkup->size[0];
  vars->participationMarkup->size[0] = (int32_T)param.tmax;
  emxEnsureCapacity((emxArray__common *)vars->participationMarkup, i0, (int32_T)
                    sizeof(real_T));
  loop_ub = (int32_T)param.tmax - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    vars->participationMarkup->data[i0] = 0.0;
  }

  i0 = vars->emissionsOutputRatio->size[0];
  vars->emissionsOutputRatio->size[0] = (int32_T)param.tmax;
  emxEnsureCapacity((emxArray__common *)vars->emissionsOutputRatio, i0, (int32_T)
                    sizeof(real_T));
  loop_ub = (int32_T)param.tmax - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    vars->emissionsOutputRatio->data[i0] = 0.0;
  }

  i0 = vars->forcing->size[0];
  vars->forcing->size[0] = (int32_T)param.tmax;
  emxEnsureCapacity((emxArray__common *)vars->forcing, i0, (int32_T)sizeof
                    (real_T));
  loop_ub = (int32_T)param.tmax - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    vars->forcing->data[i0] = 0.0;
  }

  i0 = vars->tempAtmosphere->size[0];
  vars->tempAtmosphere->size[0] = (int32_T)param.tmax;
  emxEnsureCapacity((emxArray__common *)vars->tempAtmosphere, i0, (int32_T)
                    sizeof(real_T));
  loop_ub = (int32_T)param.tmax - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    vars->tempAtmosphere->data[i0] = 0.0;
  }

  i0 = vars->tempLower->size[0];
  vars->tempLower->size[0] = (int32_T)param.tmax;
  emxEnsureCapacity((emxArray__common *)vars->tempLower, i0, (int32_T)sizeof
                    (real_T));
  loop_ub = (int32_T)param.tmax - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    vars->tempLower->data[i0] = 0.0;
  }

  i0 = vars->massAtmosphere->size[0];
  vars->massAtmosphere->size[0] = (int32_T)param.tmax;
  emxEnsureCapacity((emxArray__common *)vars->massAtmosphere, i0, (int32_T)
                    sizeof(real_T));
  loop_ub = (int32_T)param.tmax - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    vars->massAtmosphere->data[i0] = 0.0;
  }

  i0 = vars->massUpper->size[0];
  vars->massUpper->size[0] = (int32_T)param.tmax;
  emxEnsureCapacity((emxArray__common *)vars->massUpper, i0, (int32_T)sizeof
                    (real_T));
  loop_ub = (int32_T)param.tmax - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    vars->massUpper->data[i0] = 0.0;
  }

  i0 = vars->massLower->size[0];
  vars->massLower->size[0] = (int32_T)param.tmax;
  emxEnsureCapacity((emxArray__common *)vars->massLower, i0, (int32_T)sizeof
                    (real_T));
  loop_ub = (int32_T)param.tmax - 1;
  for (i0 = 0; i0 <= loop_ub; i0++) {
    vars->massLower->data[i0] = 0.0;
  }

  /* Set initial values based on default parameter values */
  vars->capital->data[0] = param.capital;
  vars->output->data[0] = param.output;
  vars->massAtmosphere->data[0] = param.massAtmosphere;
  vars->tempAtmosphere->data[0] = param.tempAtmosphere;
  vars->tempLower->data[0] = param.tempLower;
  vars->massUpper->data[0] = param.massUpper;
  vars->massLower->data[0] = param.massLower;
}

/* End of code generation (DICE2007Setup.cpp) */
