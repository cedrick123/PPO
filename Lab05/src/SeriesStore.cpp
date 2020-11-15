#include "SeriesStore.h"

SeriesPtr *arrayOfInstances = nullptr;
int howManyInstances = 0;

SeriesPtr* addToArrayOfInstances(SeriesPtr ptr,int howManyInstances){
	SeriesPtr* newArrayOfInstances = new SeriesPtr[howManyInstances];
	for(int i = 0; i < howManyInstances - 1;i++){
		newArrayOfInstances[i] = arrayOfInstances[i];
		// delete arrayOfInstances[i];
	}
	delete [] arrayOfInstances;
	newArrayOfInstances[howManyInstances-1] = ptr;
	return newArrayOfInstances;
}