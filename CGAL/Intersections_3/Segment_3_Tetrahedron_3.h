// Copyright (c) 2010 GeometryFactory (France).
// All rights reserved.
//
// This file is part of CGAL (www.cgal.org)
//
// $URL: https://github.com/CGAL/cgal/blob/v5.1.2/Intersections_3/include/CGAL/Intersections_3/Segment_3_Tetrahedron_3.h $
// $Id: Segment_3_Tetrahedron_3.h 90d2e03 2020-01-15T13:32:11+01:00 Maxime Gimeno
// SPDX-License-Identifier: LGPL-3.0-or-later OR LicenseRef-Commercial
//
//
// Author(s)     : Sebastien Loriot
//

#ifndef CGAL_INTERSECTIONS_3_SEGMENT_3_TETRAHEDRON_3_H
#define CGAL_INTERSECTIONS_3_SEGMENT_3_TETRAHEDRON_3_H

#include <CGAL/Segment_3.h>
#include <CGAL/Tetrahedron_3.h>

#include <CGAL/Intersections_3/internal/Tetrahedron_3_Bounded_3_do_intersect.h>
#include <CGAL/Intersections_3/internal/Tetrahedron_3_Segment_3_intersection.h>

namespace CGAL {
  CGAL_DO_INTERSECT_FUNCTION(Segment_3, Tetrahedron_3, 3)
  CGAL_INTERSECTION_FUNCTION(Segment_3, Tetrahedron_3, 3)
}

#endif // CGAL_INTERSECTIONS_3_SEGMENT_3_TETRAHEDRON_3_H
