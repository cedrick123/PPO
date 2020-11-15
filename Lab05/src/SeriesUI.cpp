#include "SeriesUI.h"

void PrintSeries(SeriesPtr ptr, Size size){
	for(int i = 0; i < size; i++)
		 printf("%.2f ",ptr[i]);
	std::cout<<std::endl;
}
SeriesType SeriesSum(SeriesPtr ptr, Size size){
	SeriesType sum = 0;
	// printf("Sum: ");

	for(int i = 0; i < size; i++)
		sum+=ptr[i];
	return sum;
}

SeriesType SeriesProduct(SeriesPtr ptr, Size size){
	SeriesType product = 1;
	// printf("Product: ");

	for(int i = 0; i < size; i++)
		product*=ptr[i];
	return product;
}

SeriesType SeriesMax(SeriesPtr ptr, Size size){
	SeriesType max = ptr[0];
	// printf("Maximum: ");

	for(int i = 0; i < size; i++){
		if(max < ptr[i])
			max = ptr[i];
	}
	return max;
}

SeriesType SeriesMin(SeriesPtr ptr, Size size){
	SeriesType min = ptr[0];
	// printf("Minimum: ");
	for(int i = 0; i < size; i++){
		if(min > ptr[i])
			min = ptr[i];
	}
	return min;
}

std::string namesOfFunctions[4] = {"Product","Sum","Maximum","Minimum"};
int positionOfName = 0;

void RunAndPrint(SeriesFunction fptr, SeriesPtr ptr, Size size){
	std::cout << namesOfFunctions[positionOfName++] <<": "<<fptr(ptr,size)<<std::endl;
	if(positionOfName >= 4){positionOfName = 0;}
}

void DeleteSeries(){
	std::cout<<"Deleting "<<howManyInstances<<" series..."<<std::endl;
	for(int i = 0; i < howManyInstances;i++){
		delete [] arrayOfInstances[i];
	}
	delete [] arrayOfInstances;
	arrayOfInstances = nullptr;

	howManyInstances = 0;
	std::cout<<"*** Memory cleanded up ***"<<std::endl;
}