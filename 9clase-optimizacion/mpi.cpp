#include <cstdio>
#include "mpi.h"

int main(int argc, char **argv)
{
  int rank, size;
  MPI_Init(&argc, &argv);
  MPI_Comm_size(MPI_COMM_WORLD, &size);
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  std::printf("hello from  process %d of %d\n", rank, size);
  MPI_Finalize ();
  return 0;
}
