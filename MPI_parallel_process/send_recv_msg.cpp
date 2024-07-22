//Sending and reciving message between different process

#include <stdio.h>
#include <mpi.h>

using namespace std;

int main(int argc, char *argv[]){
	int rank, world_rank;
	
	// Initializing MPI
	MPI_Init(&argc, &argv);
	
	// Get total number of rank (world_rank) and rank(number of process 0- world_rank-1)
	
	MPI_Comm_size(MPI_COMM_WORLD,&world_rank);
	MPI_Comm_rank(MPI_COMM_WORLD,&rank);
	
	if (world_rank !=2){
		cout<<"This example requires exactly two ranks"<< endl;
		MPI_Finalize();
		return(1);
	}
	
	if(rank == 0){
		const char *msg = "Helloworld!";
		MPI_Send(msg,11,MPI_CHAR, 1, 0, MPI_COMM_WORLD);
	}
	
	if(rank ==1){
		char recv_msg[11];
		MPI_Status status;
		MPI_Recv(recv_msg, 11, MPI_CHAR, 0, 0, MPI_COMM_WORLD, &status);
		
		cout<<endl;
		cout<<recv_msg<<endl;
	}
	
	//calling finallize at the end
	return MPI_Finalize();
	
}
		
	
		
	
