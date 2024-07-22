#include <iostream>
#include <mpi.h>


using namespace std;

int main(int argc, char *argv[])
{
	int my_rank, world_rank;
	
	MPI_Init(&argc, &argv);
	
	MPI_Comm_size(MPI_COMM_WORLD, &world_rank);
	MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);
	
	cout << "Hello from processor " << my_rank;
	cout << " out of " << world_rank << " processors." << endl;
	
	MPI_Finalize();
	
	return 0;
}

