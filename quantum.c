#include "quantum.h"
 create_quibits(size_t amount)
{

}
quibit_t collapse(quibit_t * quibit)
{
	double random = (double)rand()/ RAND_MAX;
	if(alpha > random ){
		quibit->bit = true; 
	}
	else{
	quibit->bit = false; 
	}
	quibit->prob[0]= 0.0; 
	quibit->prob[1]= 0.0; 
	return quibit; 
	
}
