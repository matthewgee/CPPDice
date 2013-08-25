/*
 * DICE2007Param.cpp
 *
 * Code code for function 'DICE2007Param'
 *
 * Latest version: Sat Sep  1 10:38:08 2012
 *
 */

/* Include files */
#include "DICE2007Param.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */

/* Function Declarations */

/* Function Definitions */
struct_T DICE2007Param(void)
{
  struct_T param;
  int32_T i;
  real_T u1;

  /*  Creates a param struct with the default parameters from DICE-2007 */
  /*  using values taken from the GAMS code at econ.yale.edu/~nordhaus/DICE2007_programs/ */
  /*  Set default values for model parameters */
  param.elasmu = 2.0;

  /*  Elasticity of marginal utility of consumption */
  param.prstp = 0.015;

  /*  Initial rate of social time preference per year */
  /*  the following were settings I made that were not in the GAMS code */
  /*  most come from Bob Kopps matDICE */
  param.tmax = 60.0;

  /*  Time periods, in decades (60 * 10 = 600 years) */
  param.numScen = 1.0;

  /*  Number of scenarios to run */
  param.savings = 0.2;

  /*  Savings rate (constant) */
  param.miu_2005 = 0.0;

  /*  emission control rate (fraction of uncontrolled emissions) */
  /*  Population and technology */
  param.pop0 = 6514.0;

  /*  2005 world population millions */
  param.gpop0 = 0.35;

  /*  growth rate of population per decade */
  param.popasym = 8600.0;

  /*  asymptotic population */
  param.a0 = 0.02722;

  /*  Initial level of total factor productivity */
  param.ga0 = 0.092;

  /*  Initial growth rate for technology per decade */
  param.dela = 0.001;

  /*  Decline rate of technological change per decade */
  param.dk = 0.1;

  /*  Depreciation rate on capital per year */
  param.gama = 0.3;

  /*  Capital elasticity in production function */
  param.q0 = 61.1;

  /*  2005 world gross output trill 2005 US dollars */
  param.k0 = 137.0;

  /*  2005 value capital trill 2005 US dollars */
  /*  Emissions */
  param.sig0 = 0.13418;

  /*  CO2-equivalent emissions-GNP ratio 2005 (effectively intensity) */
  param.gsigma = -0.073;

  /*  Initial growth of sigma per decade */
  param.dsig = 0.003;

  /*  Decline rate of decarbonization per decade */
  param.dsig2 = 0.0;

  /*  Quadratic term in decarbonization */
  param.eland0 = 11.0;

  /*  Carbon emissions from land 2005 (GtC per decade) */
  param.e2005 = 84.191;

  /*  Year 2005 Emissions */
  /*  Carbon Cycle     */
  param.mat2000 = 808.9;

  /*  Concentration in atmosphere 2005 (GtC) */
  param.mu2000 = 1255.0;

  /*  Concentration in upper strata 2005 (GtC) */
  param.ml2000 = 18365.0;

  /*  Concentration in lower strata 2005 (GtC) */
  param.matPI = 592.14;

  /*  Preindustrial concentration in atmosphere 2005 (GtC) */
  /*  Carbon cycle transition matrix */
  /*  1 = atmosphere */
  /*  2 = upper ocean */
  /*  3 = lower ocean */
  /*  each carbon parameter has two values, the source and the destination */
  /*  e.g. carbon12 is the carbon going FROM the atmosphere TO the upper ocean */
  param.b11 = 0.810712;
  param.b12 = 0.189288;
  param.b21 = 0.097213;
  param.b22 = 0.852787;
  param.b23 = 0.05;
  param.b32 = 0.003119;
  param.b33 = 0.996881;

  /*  Climate model */
  param.t2xco2 = 3.0;

  /*  Equilibrium temp impact of CO2 doubling (degrees C) */
  param.fex0 = -0.06;

  /*  Estimate of 2000 forcings of non-CO2 GHG */
  param.fex1 = 0.3;

  /*  Estimate of 2100 forcings of non-CO2 GHG */
  param.tocean0 = 0.0068;

  /*  2000 lower strat. temp change (C) from 1900 */
  param.tatm0 = 0.7307;

  /*  2000 atmospheric temp change (C) from 1900 */
  param.c1 = 0.22;

  /*  Climate-equation coefficient for upper level */
  param.c3 = 0.3;

  /*  Transfer coefficient upper to lower stratum */
  param.c4 = 0.05;

  /*  Transfer coefficient for lower level */
  param.fco22x = 3.8;

  /*  Estimated forcings of equilibrium CO2 doubling */
  /*  Climate damage parameters, calibrated for quadratic at 2.5 C for 2105 */
  param.a1 = 0.0;

  /*  Damage intercept */
  param.a2 = 0.0028388;

  /*  Damage quadratic term */
  param.a3 = 2.0;

  /*  Damage exponent */
  /*  Abatement cost */
  param.expcost2 = 2.8;

  /*  Exponent of control cost function */
  param.pback = 1.17;

  /*  Cost of backstop 2005, thousands of $ per tC 2005 */
  param.backrat = 2.0;

  /*  Ratio initial to final backstop cost */
  param.gback = 0.05;

  /*  Initial cost decline backstop, % per decade */
  param.limmiu = 1.0;

  /*  Upper limit on control rate */
  /*  Participation */
  param.partfract1 = 1.0;

  /*  Fraction of emissions under control regime 2005 */
  param.partfract2 = 1.0;

  /*  Fraction of emissions under control regime 2015 */
  param.partfract21 = 1.0;

  /*  Fraction of emissions under control regime 2205 */
  param.dpartfract = 0.0;

  /*  Decline rate of participation */
  /*  Availability of fossil fuels */
  param.fosslim = 6000.0;

  /*  Maximum cumulative extraction fossil fuels */
  /*  Scaling and inessential parameters */
  param.scale1 = 194.0;

  /*  Scaling coefficient in the objective function */
  param.scale2 = 381800.0;

  /*  Scaling coefficient in the objective function */
  /*  Initialized initial values for endogenous variables */
  param.capital = 0.0;
  param.capital = 0.0;
  param.output = 0.0;
  param.massAtmosphere = 0.0;
  param.massUpper = 0.0;
  param.massLower = 0.0;
  param.tempAtmosphere = 0.0;
  param.tempLower = 0.0;
  param.lam = 0.0;

  /* Initialize climate model parameter */
  /*  Set up the arrays for the exogenous variables */
  for (i = 0; i < 60; i++) {
    param.miu[i] = 0.0;

    /*  Emissions control rate (zero for now) */
    param.e2005cap[i] = 1.0;

    /*  Emissions cap as a percentage of year 2005 emissions */
    /*  Population */
    param.gfacpop[i] = 0.0;

    /*  Growth factor population */
    param.l[i] = 0.0;

    /*  Labor (population) */
    /*  Productivity */
    param.ga[i] = 0.0;

    /*  Growth rate of productivity from 0 to tmax */
    param.al[i] = 0.0;

    /*  level of total factor productivity */
    /*  Climate */
    param.gsig[i] = 0.0;

    /*  Cumulative improvement of energy efficiency */
    param.sigma[i] = 0.0;

    /*  CO2-equivalent-emissions output ratio */
    param.gcost1[i] = 0.0;

    /*  growth of cost factor */
    param.etree[i] = 0.0;

    /*  Emissions from deforestation */
    param.rr[i] = 0.0;

    /*  Average utility social discount rate */
    param.forcoth[i] = 0.0;

    /*  Exogenous forcing for other greenhouse gases */
    param.partfract[i] = 0.0;
  }

  /*  Fraction of emissions in control regime */
  param.lam = 1.2666666666666666;

  /*  Set climate model parameter */
  /* Set Initial Values for endogenous variables in period one */
  param.capital = 137.0;
  param.output = 61.1;
  param.massAtmosphere = 808.9;
  param.massUpper = 1255.0;
  param.massLower = 18365.0;
  param.tempAtmosphere = 0.7307;
  param.tempLower = 0.0068;

  /* Step through the time steps to set up endogenous variable arrays */
  /*  Consider alternative way of doing this */
  for (i = 0; i < 60; i++) {
    param.miu[i] = 0.0;

    /* param.miu(i) = 1; */
    param.gfacpop[i] = (exp(0.35 * ((1.0 + (real_T)i) - 1.0)) - 1.0) / exp(0.35 *
      ((1.0 + (real_T)i) - 1.0));
    param.l[i] = 6514.0 * (1.0 - param.gfacpop[i]) + param.gfacpop[i] * 8600.0;
    param.gsig[i] = -0.073 * exp(-0.03 * ((1.0 + (real_T)i) - 1.0));
    u1 = (1.0 + (real_T)i) - 1.0;
    u1 = pow(0.9, u1);
    param.etree[i] = 11.0 * u1;
    u1 = 10.0 * ((1.0 + (real_T)i) - 1.0);
    u1 = pow(1.015, u1);
    param.rr[i] = 1.0 / u1;
    param.ga[i] = 0.092 * exp(-0.01 * ((1.0 + (real_T)i) - 1.0));
    if (1 + i == 1) {
      param.al[i] = 0.02722;
      param.sigma[i] = 0.13418;
    } else {
      param.al[i] = 0.95 * param.al[i - 1] / (1.0 - param.ga[i - 1]);

      /* param.al(i) = param.a0; */
      param.sigma[i] = param.sigma[i - 1] / (1.0 - param.gsig[i]);
    }

    if (1 + i < 12) {
      param.forcoth[i] = -0.06 + 0.036 * ((1.0 + (real_T)i) - 1.0);
    } else {
      if (1 + i >= 12) {
        param.forcoth[i] = 0.3;
      }
    }

    if (1 + i == 1) {
      param.partfract[i] = 1.0;
    } else if (1 + i < 25) {
      param.partfract[i] = 1.0;
    } else {
      param.partfract[i] = 1.0;
    }

    param.gcost1[i] = 1.17 * param.sigma[i] / 2.8 * (1.0 + exp(-0.05 * ((1.0 +
      (real_T)i) - 1.0)) / 2.0);
  }

  return param;
}

/* End of code DICE2007Param.cpp */
