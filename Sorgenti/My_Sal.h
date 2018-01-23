/************************************************************************************************************
 * This file is part of My_String.
 *
 * My_String is free software: you can redistribute it and/or moify
 * it under the terms of the GNU Lesser General Public License v3.0  as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * My_String is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License v3.0  for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License v3.0 
 * along with My_String. If not, see <http://www.gnu.org/licenses/>.
 ***********************************************************************************************************/

/**
 *  \file MYSal.h
 *  \brief Header contenente nomenclatura SAL semplificata per le mie Librerie
 */
/////////////////////////////////////////////// DEFENCE GUARD ///////////////////////////////////////////////
#ifndef MYSAL_H
#define MYSAL_H


#if _MSC_VER > 1200
#pragma once
#endif

#define __MYHEADER_VERSION           1.00
#define __MYHEADER_MAJOR_VERSION     1
#define __MYHEADER_MINOR_VERSION     00
#define __MYHEADER_PATCHLEVEL        00
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifdef _MSC_VER
#include <sal.h>
#else
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
#define _Reserved_
#define _Const_

// Input parameters --------------------------
#define _In_
#define _In_opt_
#define _In_z_
#define _In_opt_z_

// Output parameters --------------------------
#define _Out_
#define _Out_opt_

// Inout parameters ----------------------------
#define _Inout_
#define _Inout_opt_
#define _Inout_z_
#define _Inout_opt_z_


// Pointer to pointer parameters -------------------------
#define _Outptr_
#define _Outptr_result_maybenull_
#define _Outptr_opt_
#define _Outptr_opt_result_maybenull_
#define _Outptr_result_z_
#define _Outptr_opt_result_z_
#define _Outptr_result_maybenull_z_
#define _Outptr_opt_result_maybenull_z_

// Annotations for _Outptr_ parameters where the output pointer is set to NULL if the function fails->
#define _Outptr_result_nullonfailure_
#define _Outptr_opt_result_nullonfailure_


// Annotations for output reference to pointer parameters->
#define _Outref_
#define _Outref_result_maybenull_


// Annotations for output reference to pointer parameters that guarantee
// that the pointer is set to NULL on failure->
#define _Outref_result_nullonfailure_

#endif
#endif