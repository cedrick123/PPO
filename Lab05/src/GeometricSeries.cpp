#include "GeometricSeries.h"

SeriesPtr InitializeGeometricSeries (Size size){
	SeriesPtr ptr = new double[size];
	ptr[0] = 1;
	for(int i = 1; i < size; i++){
		ptr[i] = ptr[i-1]*2;
	}
	howManyInstances++;
	arrayOfInstances = addToArrayOfInstances(ptr,howManyInstances);
	return ptr;
}
SeriesPtr InitializeGeometricSeries (Size size, double ratio){
	SeriesPtr ptr = new double[size];
	ptr[0] = 1;
	for(int i = 1; i < size; i++){
		ptr[i] = ptr[i-1]*ratio;
	}
	howManyInstances++;
	arrayOfInstances = addToArrayOfInstances(ptr,howManyInstances);
	return ptr;
}
