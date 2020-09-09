#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void) {

  //this cycle produces 8 processes
  for (int i = 0; i < 3; i++){
    fork();
  }
  sleep(5);


  //this fragment produces 32 processes
  for (int i = 0; i < 5; i++){
    fork();
  }
  sleep(5);
}

//for n interations this program produces 2^(n) processes