#include <iostream>

typedef int Size; 

typedef double* SeriesPtr;  

/// \brief Initialization of Array of harmonic series aka double*
SeriesPtr DefineHarmonicSeriesArray(Size size); 

/// \brief prints array of harmonic series
void PrintSeries(SeriesPtr ptr, Size size); 

typedef double SeriesType;

/// \brief returns sum of harmonic series array: SeriesType aka double
SeriesType SeriesSum(SeriesPtr ptr, Size size); 
/// \brief returns product of harmonic series array: SeriesType aka double
SeriesType SeriesProduct(SeriesPtr ptr, Size size);
/// \brief returns max of harmonic series array: SeriesType aka double
SeriesType SeriesMax(SeriesPtr ptr, Size size);
/// returns min of harmonic series array: SeriesType aka double
SeriesType SeriesMin(SeriesPtr ptr, Size size);

// definition of SeriesFunction type as function that returns SeriesType(double)
// and takes arguments of SeriesPtr(double*) and Size(int)
typedef SeriesType SeriesFunction(SeriesPtr ptr, Size size);

//definition of pointer to function of type SeriesFunction
typedef SeriesFunction* SeriesFunctionPtr;
/// \brief prints result of SeriesFunction type function, taking SeriesPtr and Size as arguments
void RunAndPrint (SeriesFunction fptr, SeriesPtr ptr, Size size);
/// \brief deletes array of harmonic series
void DeleteSeries(SeriesPtr ptr);
