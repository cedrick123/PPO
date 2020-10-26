#include "HarmonicSeries.h"

SeriesPtr DefineHarmonicSeriesArray(Size size){
	SeriesPtr ptr = new double[size];
	for(int i = 0; i < size; i++){
		ptr[i] = 1./(i+1);
	}
	return ptr;
}

void PrintSeries(SeriesPtr ptr, Size size){
	for(int i = 0; i < size; i++)
		 printf("%.2f ",ptr[i]);
	std::cout<<std::endl;
}

SeriesType SeriesSum(SeriesPtr ptr, Size size){
	SeriesType sum = 0;
	printf("Sum: ");

	for(int i = 0; i < size; i++)
		sum+=ptr[i];
	return sum;
}

SeriesType SeriesProduct(SeriesPtr ptr, Size size){
	SeriesType product = 1;
	printf("Product: ");

	for(int i = 0; i < size; i++)
		product*=ptr[i];
	return product;
}

SeriesType SeriesMax(SeriesPtr ptr, Size size){
	SeriesType max = ptr[0];
	printf("Maximum: ");

	for(int i = 0; i < size; i++){
		if(max < ptr[i])
			max = ptr[i];
	}
	return max;
}

SeriesType SeriesMin(SeriesPtr ptr, Size size){
	SeriesType min = ptr[0];
	printf("Minimum: ");
	for(int i = 0; i < size; i++){
		if(min > ptr[i])
			min = ptr[i];
	}
	return min;
}

void RunAndPrint(SeriesFunction fptr, SeriesPtr ptr, Size size){
	printf("%.4f\n",fptr(ptr,size));
}

void DeleteSeries(SeriesPtr ptr){
	delete [] ptr;
}
