// =================================================================
//
// File: activity.h
// Author: Pedro Perez
// Description: This file contains the implementation of functions 
//				of this activity.
//
// Copyright (c) 2020 by Tecnologico de Monterrey.  
// All Rights Reserved. May be reproduced for any non-commercial 
// purpose.
// =================================================================
#ifndef ACTIVITY_H
#define ACTIVITY_H
 
// =================================================================
// sumaIterativa. Calculate the sum from 1 to n with an iterative 
// method.
// 
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// =================================================================
unsigned int sumaIterativa(unsigned int n) {  //Este algoritmo es O(n)
	int suma=0;
	for(int i=1; i<=n; i++){
		suma = suma+i;
	}
	return suma;
}

// =================================================================
// sumaRecursiva. Calculate the sum from 1 to n with an recursive 
// method.
// 
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// =================================================================
unsigned int sumaRecursiva(unsigned int n) {    //Este algoritmo es O(n)
	if(n == 1){
		return 1;
	}
	else{
		return (n + sumaRecursiva(n-1)); 
	}
}

// =================================================================
// sumaRecursiva. Calculate the sum from 1 to n with a mathematical 
// method.
// 
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// =================================================================
unsigned int sumaDirecta(unsigned int n) {  //Este algoritmo es O(1)
	int suma = (n*(n+1)) / 2; // O(1)
	return suma;
}

#endif /* ACTIVITY_H */