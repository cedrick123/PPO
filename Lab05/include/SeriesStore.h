#include <iostream>

typedef int Size; 
typedef double* SeriesPtr;  
typedef double SeriesType;

extern int howManyInstances;
extern SeriesPtr* arrayOfInstances;

/// \brief adds series to array of instances
SeriesPtr* addToArrayOfInstances(SeriesPtr ptr, int howManyInstances);