#include "Marks.h"

double Marks::avg_hum() { 
	return ((double)english + (double)russian) / 2.; 
};

double Marks::avg_tech() { 
	return ((double)math + (double)physics) / 2; 
};

double Marks::avg() { 
	return ((double)avg_hum() + (double)avg_tech()) / 2.; 
}