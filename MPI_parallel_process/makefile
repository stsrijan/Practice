EXECS=output.out
MPICC?=mpic++

all::${EXECS}

output.out: Hello.cpp
	${MPICC} -o output.out Hello.cpp

clean:
	rm ${EXECS}
