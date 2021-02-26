#define  PHYSICS                        RHD
#define  DIMENSIONS                     1
#define  COMPONENTS                     1
#define  GEOMETRY                       SPHERICAL
#define  BODY_FORCE                     NO
#define  FORCED_TURB                    NO
#define  COOLING                        NO
#define  RECONSTRUCTION                 LINEAR
#define  TIME_STEPPING                  RK2
#define  DIMENSIONAL_SPLITTING          YES
#define  NTRACER                        0
#define  USER_DEF_PARAMETERS            15

/* -- physics dependent declarations -- */

#define  EOS                            IDEAL
#define  ENTROPY_SWITCH                 NO

/* -- user-defined parameters (labels) -- */

#define  GAMMA_EOS                      0
#define  DN_L                           1
#define  VX_L                           2
#define  VY_L                           3
#define  PR_L                           4
#define  DN_R                           5
#define  VX_R                           6
#define  VY_R                           7
#define  PR_R                           8
#define  X0                             9
#define  X_inner                        10
#define  DN_I                           11
#define  VX_I                           12
#define  VY_I                           13
#define  PR_I                           14

/* [Beg] user-defined constants (do not change this line) */

#define  LIMITER                        DEFAULT
#define  RECONSTRUCT_4VEL               NO
#define  CHAR_LIMITING                  YES

/* [End] user-defined constants (do not change this line) */
