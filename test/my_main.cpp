/*
 * my_main.cpp
 *
 *  Created on: 4 Mar 2014
 *      Author: maria
 */

#include <iostream>
#include <boost/numeric/mtl/mtl.hpp>
#include <vector>


using namespace std;


int main(){

	using cMatrix = mtl::matrix::dense2D<double,mtl::matrix::parameters<mtl::tag::col_major> >;
	using rMatrix = mtl::matrix::dense2D<double,mtl::matrix::parameters<mtl::tag::row_major> >;


	vector<double> weights(10);
	for(unsigned i=0;i<10;++i){
		weights[i]=i*0.1;
	}

	vector<double> vec(90);
	for(unsigned i=0;i<90;++i){
		vec[i]=i;
	}

	//Matrix()
	unsigned dim;
	cout<<"Enter dimen";
	cin>>dim;
	mtl::non_fixed::dimensions  d(dim, dim);
	//mtl::matrix::dense2D<double> mat(d, &vec[0]);

//	mtl::matrix::dense2D < double ,mtl::matrix::parameters< tag::col_major> > mat(10,10);
	//cMatrix mat(d, &vec[0]);
	rMatrix matr(d, &vec[0]);

	//cout<<"A_col_maj= \n"<<mat<<endl;
//	cout<<"A_row_maj= \n"<<matr<<endl;


	cMatrix mat(d, &weights[0]);

	cout<<"A_col_maj= \n"<<mat<<endl;


//	mtl::dense_vector<std::complex<float>, mtl::vector::parameters<tag::row_major> >  v(7);
	return 0;
}
