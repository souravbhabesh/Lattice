//#define NX	101
//#define NY	51
//#define LEN	NX*NY
#define a	1
#define MAXDIHEDRALS	50000
#define NMAX	20000	

/*	Structure for position coordinates	*/
struct latticeStruct
{
    float x[NMAX];
    float y[NMAX];
    float  z[NMAX];
};

/*----------------------------------------------------------------------*/
/*		Bond Matrix LEN x LEN, Symmetric Matrix			*/	
/*	 	Matrix[i][j] = 1 , Bond between particles i and j	*/
/*----------------------------------------------------------------------*/
extern int bond_mat[NMAX][NMAX];
extern int num_bonds;
extern int dihedrals[MAXDIHEDRALS][4];
extern int cnt_dihedrals;
extern int particle_id[NMAX];

/*	Arrays to hold Bond Pairs	*/
extern int p1[NMAX][6],p2[NMAX][6];

/*	To read thermalised position data from binary file	*/
extern float position[NMAX*3];

extern  int NX,NY,RUN,LEN;
extern  double KAPPA;

