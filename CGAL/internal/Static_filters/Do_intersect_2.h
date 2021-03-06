// Copyright (c) 2008 ETH Zurich (Switzerland)
// Copyright (c) 2008-2009 INRIA Sophia-Antipolis (France)
// Copyright (c) 2017 GeometryFactory Sarl (France)
// All rights reserved.
//
// This file is part of CGAL (www.cgal.org)
//
// $URL: https://github.com/CGAL/cgal/blob/v5.1.2/Filtered_kernel/include/CGAL/internal/Static_filters/Do_intersect_2.h $
// $Id: Do_intersect_2.h 0779373 2020-03-26T13:31:46+01:00 Sébastien Loriot
// SPDX-License-Identifier: LGPL-3.0-or-later OR LicenseRef-Commercial
//
//
// Author(s)     : Andreas Fabri, Laurent Rineau


#ifndef CGAL_INTERNAL_STATIC_FILTERS_DO_INTERSECT_2_H
#define CGAL_INTERNAL_STATIC_FILTERS_DO_INTERSECT_2_H

#include <iostream>

namespace CGAL {

namespace internal {

namespace Static_filters_predicates {

template < typename K_base, typename SFK >
class Do_intersect_2
  : public K_base::Do_intersect_2
{
  typedef typename K_base::Point_2   Point_2;
  typedef typename K_base::Segment_2 Segment_2;
  typedef typename K_base::Do_intersect_2 Base;

  typedef K_base TA1;
  typedef SFK TA2;
public:

  typedef typename Base::result_type  result_type;


#ifndef CGAL_CFG_MATCHING_BUG_6
  using Base::operator();
#else // CGAL_CFG_MATCHING_BUG_6
  template <typename T1, typename T2>
  result_type
  operator()(const T1& t1, const T2& t2) const
  {
    return Base()(t1,t2);
  }
#endif // CGAL_CFG_MATCHING_BUG_6

  // The internal::do_intersect(..) function
  // only performs orientation tests on the vertices
  // of the segment
  // By calling the do_intersect function with
  // the  statically filtered kernel we avoid
  // that doubles are put into Interval_nt
  // to get taken out again with fit_in_double
  result_type
  operator()(const Segment_2 &s, const Segment_2& t) const
  {
    return Intersections::internal::do_intersect(s,t, SFK());
  }

  result_type
  operator()(const Point_2 &p, const Segment_2& t) const
  {
    return Intersections::internal::do_intersect(p,t, SFK());
  }

  result_type
  operator()(const Segment_2& t, const Point_2 &p) const
  {
    return Intersections::internal::do_intersect(p,t, SFK());
  }

};
} // Static_filters_predicates
} // internal
} // CGAL
#endif
