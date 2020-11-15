#include "HarmonicSeries.h"

SeriesPtr InitializeHarmonicSeries(Size size){
	SeriesPtr ptr = new double[size];
	for(int i = 0; i < size; i++){
		ptr[i] = 1./(i+1);
	}
	howManyInstances++;
	arrayOfInstances = addToArrayOfInstances(ptr,howManyInstances);
	return ptr;
}
