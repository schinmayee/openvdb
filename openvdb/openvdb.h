///////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 2012-2017 DreamWorks Animation LLC
//
// All rights reserved. This software is distributed under the
// Mozilla Public License 2.0 ( http://www.mozilla.org/MPL/2.0/ )
//
// Redistributions of source code must retain the above copyright
// and license notice and the following restrictions and disclaimer.
//
// *     Neither the name of DreamWorks Animation nor the names of
// its contributors may be used to endorse or promote products derived
// from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// IN NO EVENT SHALL THE COPYRIGHT HOLDERS' AND CONTRIBUTORS' AGGREGATE
// LIABILITY FOR ALL CLAIMS REGARDLESS OF THEIR BASIS EXCEED US$250.00.
//
///////////////////////////////////////////////////////////////////////////

#ifndef OPENVDB_OPENVDB_HAS_BEEN_INCLUDED
#define OPENVDB_OPENVDB_HAS_BEEN_INCLUDED

#include "Platform.h"
#include "Types.h"
#include "Metadata.h"
#include "math/Maps.h"
#include "math/Transform.h"
#include "Grid.h"
#include "tree/Tree.h"
#include "io/File.h"


namespace openvdb {
OPENVDB_USE_VERSION_NAMESPACE
namespace OPENVDB_VERSION_NAME {

/// Common tree types
using BoolTree     = tree::Tree4<bool,        5, 4, 3>::Type;
using DoubleTree   = tree::Tree4<double,      5, 4, 3>::Type;
using FloatTree    = tree::Tree4<float,       5, 4, 3>::Type;
using Int32Tree    = tree::Tree4<int32_t,     5, 4, 3>::Type;
using Int64Tree    = tree::Tree4<int64_t,     5, 4, 3>::Type;
using MaskTree     = tree::Tree4<ValueMask,   5, 4, 3>::Type;
using StringTree   = tree::Tree4<std::string, 5, 4, 3>::Type;
using UInt32Tree   = tree::Tree4<uint32_t,    5, 4, 3>::Type;
using Vec2DTree    = tree::Tree4<Vec2d,       5, 4, 3>::Type;
using Vec2ITree    = tree::Tree4<Vec2i,       5, 4, 3>::Type;
using Vec2STree    = tree::Tree4<Vec2s,       5, 4, 3>::Type;
using Vec3DTree    = tree::Tree4<Vec3d,       5, 4, 3>::Type;
using Vec3ITree    = tree::Tree4<Vec3i,       5, 4, 3>::Type;
using Vec3STree    = tree::Tree4<Vec3f,       5, 4, 3>::Type;
using ScalarTree   = FloatTree;
using TopologyTree = MaskTree;
using Vec3dTree    = Vec3DTree;
using Vec3fTree    = Vec3STree;
using VectorTree   = Vec3fTree;

/// Common grid types
using BoolGrid     = Grid<BoolTree>;
using DoubleGrid   = Grid<DoubleTree>;
using FloatGrid    = Grid<FloatTree>;
using Int32Grid    = Grid<Int32Tree>;
using Int64Grid    = Grid<Int64Tree>;
using MaskGrid     = Grid<MaskTree>;
using StringGrid   = Grid<StringTree>;
using Vec3DGrid    = Grid<Vec3DTree>;
using Vec3IGrid    = Grid<Vec3ITree>;
using Vec3SGrid    = Grid<Vec3STree>;
using ScalarGrid   = FloatGrid;
using TopologyGrid = MaskGrid;
using Vec3dGrid    = Vec3DGrid;
using Vec3fGrid    = Vec3SGrid;
using VectorGrid   = Vec3fGrid;

using  MaskTree_3_3   = tree::Tree3<ValueMask,   3, 3>::Type;
using  BoolTree_3_3   = tree::Tree3<bool,        3, 3>::Type;
using  FloatTree_3_3  = tree::Tree3<float,       3, 3>::Type;
using  DoubleTree_3_3 = tree::Tree3<double,      3, 3>::Type;
using  Int32Tree_3_3  = tree::Tree3<int32_t,     3, 3>::Type;
using  UInt32Tree_3_3 = tree::Tree3<uint32_t,    3, 3>::Type;
using  Int64Tree_3_3  = tree::Tree3<int64_t,     3, 3>::Type;
using  Vec3ITree_3_3  = tree::Tree3<Vec3i,       3, 3>::Type;
using  Vec3STree_3_3  = tree::Tree3<Vec3f,       3, 3>::Type;
using  Vec3DTree_3_3  = tree::Tree3<Vec3d,       3, 3>::Type;
using MaskGrid_3_3   = Grid<MaskTree_3_3>;
using BoolGrid_3_3   = Grid<BoolTree_3_3>;
using FloatGrid_3_3  = Grid<FloatTree_3_3>;
using DoubleGrid_3_3 = Grid<DoubleTree_3_3>;
using Int32Grid_3_3  = Grid<Int32Tree_3_3>;
using Int64Grid_3_3  = Grid<Int64Tree_3_3>;
using Vec3IGrid_3_3  = Grid<Vec3ITree_3_3>;
using Vec3SGrid_3_3  = Grid<Vec3STree_3_3>;
using Vec3DGrid_3_3  = Grid<Vec3DTree_3_3>;

/// Global registration of basic types
OPENVDB_API void initialize();

/// Global deregistration of basic types
OPENVDB_API void uninitialize();

} // namespace OPENVDB_VERSION_NAME
} // namespace openvdb

#endif // OPENVDB_OPENVDB_HAS_BEEN_INCLUDED

// Copyright (c) 2012-2017 DreamWorks Animation LLC
// All rights reserved. This software is distributed under the
// Mozilla Public License 2.0 ( http://www.mozilla.org/MPL/2.0/ )
