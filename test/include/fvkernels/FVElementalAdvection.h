//* This file is part of the MOOSE framework
//* https://www.mooseframework.org
//*
//* All rights reserved, see COPYRIGHT for full restrictions
//* https://github.com/idaholab/moose/blob/master/COPYRIGHT
//*
//* Licensed under LGPL 2.1, please see LICENSE for details
//* https://www.gnu.org/licenses/lgpl-2.1.html

#pragma once

#include "FVElementalKernel.h"

#ifdef MOOSE_GLOBAL_AD_INDEXING

class FVElementalAdvection : public FVElementalKernel
{
public:
  static InputParameters validParams();
  FVElementalAdvection(const InputParameters & params);

protected:
  virtual ADReal computeQpResidual() override;

  const RealVectorValue _velocity;
};

#endif
