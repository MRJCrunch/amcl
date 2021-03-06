#include "arch.h"
#include "ecp_MF256W.h"

/* MF256 NUMS Curve - Weierstrass */

/* Montgomery-Friendly NUMS curves http://eprint.iacr.org/2014/130 */

/* p=k.2^n-1 where n is multiple of BASEBITS - but k can be adjusted. */
/* Here p=2^240(2^14-127)-1 = 2^232(2^22-256.127)-1 where 8*29=232 and (2^22-256.127)=0x3F8100 */
/* or = 2^224(2^30-65536.127)-1 where 4*56=224 and (2^30-65536.127) = 0x3F810000 */



/* Montgomery-Friendly NUMS curves http://eprint.iacr.org/2014/130 */

#if CHUNK==32
const int CURVE_A_MF256W= -3;
const BIG_256 CURVE_Order_MF256W= {0x79857EB,0x8862F0D,0x1941D2E7,0x2EA27CD,0x1FFFFFC5,0x1FFFFFFF,0x1FFFFFFF,0x1FFFFFFF,0xFFA7FF};
const BIG_256 CURVE_B_MF256W= {0x14E6A};
const BIG_256 CURVE_Gx_MF256W= {0x1};
const BIG_256 CURVE_Gy_MF256W= {0xB724D2A,0x3CAA61,0x5371984,0x128FD71B,0x1AE28956,0x1D13091E,0x339EEAE,0x10F7C301,0x20887C};

#endif

#if CHUNK==64
const int CURVE_A_MF256W= -3;
const BIG_256 CURVE_Order_MF256W= {0x10C5E1A79857EB,0x7513E6E5074B9D,0xFFFFFFFFFFFC51,0xFFFFFFFFFFFFFF,0xFFA7FFFF};
const BIG_256 CURVE_B_MF256W= {0x14E6A};
const BIG_256 CURVE_Gx_MF256W= {0x1};
const BIG_256 CURVE_Gy_MF256W= {0x7954C2B724D2A,0x47EB8D94DC6610,0x26123DAE289569,0xBE1808CE7BABBA,0x20887C87};
#endif
