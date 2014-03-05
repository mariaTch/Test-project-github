/*
 * testquad_print.cpp
 *
 *  Created on: 5 Mar 2014
 *      Author: maria
 */


#include <iostream>
#include "mpreal.h"
#include <boost/numeric/mtl/mtl.hpp>

#include <vector>


template <class T>
void func(T d1){

	using Matrix= typename mtl::matrix::dense2D<T,mtl::matrix::parameters<mtl::tag::col_major> >;

	//mtl::matrix::dense2D<T> mat(2,2);
	Matrix mat(2,2);

	mat[1][1]=d1;

	std::cout<<"A= \n"<<mat<<"\n";

}


int main(){
	const int mpreal_bits=200;

	mpfr::mpreal::set_default_prec(mpreal_bits);


	mpfr::mpreal d1=1.0/3.0;


	func<mpfr::mpreal>(d1);

	return 0;

}


