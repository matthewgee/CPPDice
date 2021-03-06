/*
 * DICE2007Run.cpp
 *
 * Code generation for function 'DICE2007Run'
 *
 * C source code generated on: Sat Sep  1 10:38:29 2012
 *
 */

/* Include files */
#include "DICE2007Run.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
void DICE2007Run(struct_T *vars, const b_struct_T param)
{
  int32_T t;
  real_T u0;
  real_T y;
  real_T u1;
  real_T param_e2005cap[60];
  real_T param_etree[60];
  int32_T i;
  int32_T eint;

  /* This file runs through the step function for each time period */
  /* It recieves two structs, (vars & params) as inputs and outputs a vars struct */
  /* Written by Matt Gee */
  /* Last updated August 20th, 2012 */
  /*  Step through standard run */
  for (t = 0; t <= (int32_T)param.tmax - 1; t++) {
    /* This code defines the steping function for solving each equation at each period t (time-step = 10 years) */
    /* as well as functions for the economy, emissions, carbon, temp, damages, utility, and welfare */
    /* Functions follow the DICE 2007 model */
    /* Code written by Matt Gee */
    /* Last modified August, 28th, 2012 */
    /*  A.9 */
    if (1.0 + (real_T)t != 1.0) {
      /* vars.capital(t) = vars.capital(t-1) * (1 - param.dk) + (param.savings * vars.output(t-1));  */
      u0 = 1.0 - param.dk;
      y = pow(u0, 10.0);
      vars->capital[t] = vars->capital[(int32_T)((1.0 + (real_T)t) - 1.0) - 1] *
        y + 10.0 * (param.savings * vars->output[(int32_T)((1.0 + (real_T)t) -
        1.0) - 1]);

      /*  Scaled for 10-year time step */
    }

    u0 = param.l[(int32_T)(1.0 + (real_T)t) - 1];
    u1 = 1.0 - param.gama;
    y = pow(u0, u1);
    u0 = vars->capital[(int32_T)(1.0 + (real_T)t) - 1];
    u1 = param.gama;
    u0 = pow(u0, u1);
    vars->grossoutput[t] = param.al[(int32_T)(1.0 + (real_T)t) - 1] * u0 * y;
    for (i = 0; i < 60; i++) {
      param_e2005cap[i] = param.e2005cap[i];
      param_etree[i] = param.etree[i];
    }

    /* display(param.miu(t)); */
    /*  A.10 */
    u0 = param.l[(int32_T)(1.0 + (real_T)t) - 1];
    u1 = 1.0 - param.gama;
    y = pow(u0, u1);
    u0 = vars->capital[(int32_T)(1.0 + (real_T)t) - 1];
    u1 = param.gama;
    u0 = pow(u0, u1);
    vars->emissionsIndustrial[t] = 10.0 * param.sigma[(int32_T)(1.0 + (real_T)t)
      - 1] * (1.0 - param.miu[(int32_T)(1.0 + (real_T)t) - 1]) * param.al
      [(int32_T)(1.0 + (real_T)t) - 1] * u0 * y;

    /*  Set miu if beyond emissions level cap (vs. baseline = 2005) */
    if (vars->emissionsIndustrial[t] > param.e2005cap[(int32_T)(1.0 + (real_T)t)
        - 1] * param.e2005) {
      vars->emissionsIndustrial[t] = param_e2005cap[(int32_T)(1.0 + (real_T)t) -
        1] * param.e2005;
    }

    /*  A.10  Scaled for 10-year time step */
    /*  A.12 */
    vars->emissionsTotal[t] = vars->emissionsIndustrial[t] + param_etree[t];
    if (1.0 + (real_T)t > 1.0) {
      vars->carbonEmitted[t] = vars->carbonEmitted[(int32_T)((1.0 + (real_T)t) -
        1.0) - 1] + vars->emissionsTotal[t];
    }

    /*  Set miu if out of carbon to emit */
    if (vars->carbonEmitted[t] > param.fosslim) {
      /* display(t); */
      /* display(vars.carbonEmitted(t)); */
      /* display(param.fosslim); */
      /* pause; */
      vars->emissionsTotal[t] = 0.0;
      vars->carbonEmitted[t] = param.fosslim;
    }

    if (1.0 + (real_T)t != 1.0) {
      /*  A.13 */
      vars->massAtmosphere[t] = (vars->emissionsTotal[(int32_T)((1.0 + (real_T)t)
        - 1.0) - 1] + param.b11 * vars->massAtmosphere[(int32_T)((1.0 + (real_T)
        t) - 1.0) - 1]) + param.b21 * vars->massUpper[(int32_T)((1.0 + (real_T)t)
        - 1.0) - 1];

      /*  A.14 */
      vars->massUpper[t] = (param.b12 * vars->massAtmosphere[(int32_T)((1.0 +
        (real_T)t) - 1.0) - 1] + param.b22 * vars->massUpper[(int32_T)((1.0 +
        (real_T)t) - 1.0) - 1]) + param.b32 * vars->massLower[(int32_T)((1.0 +
        (real_T)t) - 1.0) - 1];

      /*  A.15 */
      vars->massLower[t] = param.b23 * vars->massUpper[(int32_T)((1.0 + (real_T)
        t) - 1.0) - 1] + param.b33 * vars->massLower[(int32_T)((1.0 + (real_T)t)
        - 1.0) - 1];
    }

    if (1.0 + (real_T)t != 1.0) {
      /*  A.16 */
      y = (vars->massAtmosphere[(int32_T)(1.0 + (real_T)t) - 1] + 1.0E-6) /
        param.matPI;
      if (y == 0.0) {
        u0 = -1.7976931348623157E+308;
      } else if (y < 0.0) {
        u0 = 0.0;
      } else {
        u0 = frexp(y, &eint);
        if (u0 == 0.5) {
          u0 = (real_T)eint - 1.0;
        } else {
          u0 = log(u0) / 0.69314718055994529 + (real_T)eint;
        }
      }

      vars->forcing[t] = param.fco22x * u0 + param.forcoth[t];

      /*  A.17 */
      u0 = vars->tempAtmosphere[(int32_T)((1.0 + (real_T)t) - 1.0) - 1] -
        vars->tempLower[(int32_T)((1.0 + (real_T)t) - 1.0) - 1];
      u0 = (vars->forcing[t] - param.lam * vars->tempAtmosphere[(int32_T)((1.0 +
              (real_T)t) - 1.0) - 1]) - param.c3 * u0;
      vars->tempAtmosphere[t] = vars->tempAtmosphere[(int32_T)((1.0 + (real_T)t)
        - 1.0) - 1] + param.c1 * u0;

      /*  A.18 */
      u0 = vars->tempAtmosphere[(int32_T)((1.0 + (real_T)t) - 1.0) - 1] -
        vars->tempLower[(int32_T)((1.0 + (real_T)t) - 1.0) - 1];
      vars->tempLower[t] = vars->tempLower[(int32_T)((1.0 + (real_T)t) - 1.0) -
        1] + param.c4 * u0;
    }

    /*  miu */
    vars->participation[t] = param.partfract[t];

    /*  A.19 */
    u0 = vars->participation[(int32_T)(1.0 + (real_T)t) - 1];
    u1 = 1.0 - param.expcost2;
    y = pow(u0, u1);
    vars->participationMarkup[t] = y;

    /*  A.5 */
    u0 = vars->tempAtmosphere[(int32_T)(1.0 + (real_T)t) - 1];
    u1 = param.a3;
    y = pow(u0, u1);
    vars->damage[t] = 1.0 / ((1.0 + param.a1 * vars->tempAtmosphere[(int32_T)
      (1.0 + (real_T)t) - 1]) + param.a2 * y);

    /*  A.6 */
    u0 = param.miu[(int32_T)(1.0 + (real_T)t) - 1];
    u1 = param.expcost2;
    y = pow(u0, u1);
    vars->abatement[t] = vars->participationMarkup[(int32_T)(1.0 + (real_T)t) -
      1] * param.gcost1[(int32_T)(1.0 + (real_T)t) - 1] * y;

    /*  A.4 */
    vars->output[t] = vars->grossoutput[(int32_T)(1.0 + (real_T)t) - 1] *
      vars->damage[(int32_T)(1.0 + (real_T)t) - 1] * (1.0 - vars->abatement
      [(int32_T)(1.0 + (real_T)t) - 1]);
    vars->investment[t] = param.savings * vars->output[(int32_T)(1.0 + (real_T)t)
      - 1];

    /*  A.7 */
    vars->consumption[t] = (1.0 - param.savings) * vars->output[(int32_T)(1.0 +
      (real_T)t) - 1];

    /*  A.8 */
    vars->consumptionpercapita[t] = 1000.0 * vars->consumption[(int32_T)(1.0 +
      (real_T)t) - 1] / param.l[(int32_T)(1.0 + (real_T)t) - 1];

    /*  A.3 */
    u0 = vars->consumptionpercapita[(int32_T)(1.0 + (real_T)t) - 1];
    u1 = 1.0 - param.elasmu;
    y = pow(u0, u1);
    vars->utility[t] = param.l[(int32_T)(1.0 + (real_T)t) - 1] * (y / (1.0 -
      param.elasmu));
    vars->utilitydiscounted[t] = vars->utility[(int32_T)(1.0 + (real_T)t) - 1] *
      param.rr[(int32_T)(1.0 + (real_T)t) - 1];

    /*  A.2 */
    /*  A.1 */
    for (i = 0; i < 60; i++) {
      param_e2005cap[i] = vars->utility[i] * param.rr[i];
    }

    y = param_e2005cap[0];
    for (i = 0; i < 59; i++) {
      y += param_e2005cap[i + 1];
    }

    vars->welfare = -y;
  }
}

/* End of code generation (DICE2007Run.cpp) */
