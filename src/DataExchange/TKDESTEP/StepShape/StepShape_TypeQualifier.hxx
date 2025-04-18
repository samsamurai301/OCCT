// Created on: 2001-04-24
// Created by: Christian CAILLET
// Copyright (c) 2001-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef _StepShape_TypeQualifier_HeaderFile
#define _StepShape_TypeQualifier_HeaderFile

#include <Standard.hxx>
#include <Standard_Type.hxx>

#include <Standard_Transient.hxx>
class TCollection_HAsciiString;

class StepShape_TypeQualifier;
DEFINE_STANDARD_HANDLE(StepShape_TypeQualifier, Standard_Transient)

//! Added for Dimensional Tolerances
class StepShape_TypeQualifier : public Standard_Transient
{

public:
  Standard_EXPORT StepShape_TypeQualifier();

  Standard_EXPORT void Init(const Handle(TCollection_HAsciiString)& name);

  Standard_EXPORT Handle(TCollection_HAsciiString) Name() const;

  Standard_EXPORT void SetName(const Handle(TCollection_HAsciiString)& name);

  DEFINE_STANDARD_RTTIEXT(StepShape_TypeQualifier, Standard_Transient)

protected:
private:
  Handle(TCollection_HAsciiString) theName;
};

#endif // _StepShape_TypeQualifier_HeaderFile
