#ifndef QUANTUM_H
#define QUANTUM_H
#include <time.h>
#include <stdlib.h>
#include <math.h>
typedef struct {
	double prob[2]; 
	bool bit; 
}quibit_t ;
quibit_t create_quibits(size_t amount);
quibit_t collapse(quibit_t* quibit); 
#endif 
