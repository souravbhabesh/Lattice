#define NX	2
#define NY	2
#define LEN	NX*NY
#define a	1
#define MAXDIHEDRALS	10000


/*	Structure for position coordinates	*/
struct latticeStruct
{
    float x[LEN];
    float y[LEN];
    float  z[LEN];
};

/*----------------------------------------------------------------------*/
/*		Bond Matrix LEN x LEN, Symmetric Matrix			*/	
/*	 	Matrix[i][j] = 1 , Bond between particles i and j	*/
/*----------------------------------------------------------------------*/
extern int bond_mat[LEN][LEN];
extern int num_bonds;
extern int dihedrals[MAXDIHEDRALS][4];
extern int cnt_dihedrals;
extern int particle_id[LEN];
