#include <iostream>
#include <mpi.h>


using namespace std;

int main(void)
{
	int my_rank, world_rank;
	
	MPI::Init();
	world_rank = MPI::COMM_WORLD.Get_size();
	my_rank = MPI::COMM_WORLD.Get_rank();
	
	cout << "Hello from processor " << my_rank;
	cout << " out of " << world_rank << " processors." << endl;
	
	MPI::Finalize();
	
	return 0;
}

