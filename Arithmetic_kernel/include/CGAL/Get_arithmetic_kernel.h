// Copyright (c) 2006-2009 Max-Planck-Institute Saarbruecken (Germany).
// All rights reserved.
//
// This file is part of CGAL (www.cgal.org); you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License as
// published by the Free Software Foundation; version 2.1 of the License.
// See the file LICENSE.LGPL distributed with CGAL.
//
// Licensees holding a valid commercial license may use this file in
// accordance with the commercial license agreement provided with the software.
//
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
//
// $URL:$
// $Id:$
//
// Author(s)     : Michael Hemmer <hemmer@mpi-inf.mpg.de> 
//
// ============================================================================
//
//    \brief provide base class for Get_arithmetic_kernel  
//

#ifndef CGAL_GET_ARITHMETIC_KERNEL_H
#define CGAL_GET_ARITHMETIC_KERNEL_H

#include  <CGAL/basic.h>

CGAL_BEGIN_NAMESPACE
template< class NT > struct Get_arithmetic_kernel;

template <class COEFF, class ROOT> class Sqrt_extension;
template <class COEFF, class ROOT>
struct Get_arithmetic_kernel<Sqrt_extension<COEFF,ROOT> >{
  typedef Get_arithmetic_kernel<COEFF> GET;
  typedef typename GET::Arithmetic_kernel Arithmetic_kernel;
};

template <class COEFF> class Polynomial;
template <class COEFF>
struct Get_arithmetic_kernel<Polynomial<COEFF> >{
  typedef Get_arithmetic_kernel<COEFF> GET;
  typedef typename GET::Arithmetic_kernel Arithmetic_kernel;
};

CGAL_END_NAMESPACE

#endif // CGAL_GET_ARITHMETIC_KERNEL_H
