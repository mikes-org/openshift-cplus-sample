
// A simple program that computes the square root of a number
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
  cout << "Hello, World!" << endl;
  fprintf(stdout, "Starting sample app\n");
  while (true) {
     fprintf(stdout,"OpenShift C++ Sample App running, Sleeping for a minute\n");
     usleep(1000  * 1000 * 60);
  }
  return 0;
}
