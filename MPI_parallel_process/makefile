EXECS=output.out
MPICC?=mpic++

all::${EXECS}

output.out: send_recv_msg.cpp
	${MPICC} -o output.out send_recv_msg.cpp

clean:
	rm ${EXECS}
