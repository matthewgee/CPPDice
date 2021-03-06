/*
 * DICE2007Step_types.h
 *
 * Code generation for function 'DICE2007Step'
 *
 * C source code generated on: Sat Sep  1 10:38:25 2012
 *
 */

#ifndef __DICE2007STEP_TYPES_H__
#define __DICE2007STEP_TYPES_H__

/* Type Definitions */
typedef struct
{
    real_T elasmu;
    real_T prstp;
    real_T tmax;
    real_T numScen;
    real_T savings;
    real_T miu_2005;
    real_T pop0;
    real_T gpop0;
    real_T popasym;
    real_T a0;
    real_T ga0;
    real_T dela;
    real_T dk;
    real_T gama;
    real_T q0;
    real_T k0;
    real_T sig0;
    real_T gsigma;
    real_T dsig;
    real_T dsig2;
    real_T eland0;
    real_T e2005;
    real_T mat2000;
    real_T mu2000;
    real_T ml2000;
    real_T matPI;
    real_T b11;
    real_T b12;
    real_T b21;
    real_T b22;
    real_T b23;
    real_T b32;
    real_T b33;
    real_T t2xco2;
    real_T fex0;
    real_T fex1;
    real_T tocean0;
    real_T tatm0;
    real_T c1;
    real_T c3;
    real_T c4;
    real_T fco22x;
    real_T a1;
    real_T a2;
    real_T a3;
    real_T expcost2;
    real_T pback;
    real_T backrat;
    real_T gback;
    real_T limmiu;
    real_T partfract1;
    real_T partfract2;
    real_T partfract21;
    real_T dpartfract;
    real_T fosslim;
    real_T scale1;
    real_T scale2;
    real_T capital;
    real_T output;
    real_T massAtmosphere;
    real_T massUpper;
    real_T massLower;
    real_T tempAtmosphere;
    real_T tempLower;
    real_T lam;
    real_T miu[60];
    real_T e2005cap[60];
    real_T gfacpop[60];
    real_T l[60];
    real_T ga[60];
    real_T al[60];
    real_T gsig[60];
    real_T sigma[60];
    real_T gcost1[60];
    real_T etree[60];
    real_T rr[60];
    real_T forcoth[60];
    real_T partfract[60];
} b_struct_T;
typedef struct
{
    real_T welfare;
    real_T utility[60];
    real_T utilitydiscounted[60];
    real_T consumption[60];
    real_T consumptionpercapita[60];
    real_T investment[60];
    real_T capital[60];
    real_T grossoutput[60];
    real_T output[60];
    real_T abatement[60];
    real_T emissionsIndustrial[60];
    real_T emissionsTotal[60];
    real_T carbonEmitted[60];
    real_T emissionsControl[60];
    real_T damage[60];
    real_T participation[60];
    real_T participationMarkup[60];
    real_T emissionsOutputRatio[60];
    real_T forcing[60];
    real_T tempAtmosphere[60];
    real_T tempLower[60];
    real_T massAtmosphere[60];
    real_T massUpper[60];
    real_T massLower[60];
} struct_T;

#endif
/* End of code generation (DICE2007Step_types.h) */
