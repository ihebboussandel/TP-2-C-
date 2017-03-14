/* 
 * File:   main.cpp
 * Author: iheb
 *
 * Created on March 11, 2017, 8:48 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
void impA(int[],int);
int main(int argc, char** argv) {
int* pa = NULL;
int* pb = NULL;
int* merge= NULL;
int na,nb,nmerge;          
cout<< "set array size "<<endl;
cin >> na;       
cout<<"set array nb size"<<endl;
cin >> nb;       
pa = new int[na];
pb = new int[nb];
merge = new int[na+nb];
for (int i=0; i<na; i++) {
    cout<<"arrayA["<<i<<"]"<<endl;
    cin>>pa[i];    // Initialize all elements to zero.
}
for (int i=0; i<nb; i++) {
    cout<<"arrayB["<<i<<"]"<<endl;
    cin>>pb[i];    // Initialize all elements to zero.
}
for(int i=0; i<na; i++){
		merge[i]=pa[i];
	}
nmerge=na+nb;
for(int i=0,k=na; k<nmerge && i<nb; i++, k++){
		merge[k]=pb[i];
	}
delete pa;
pa = new int[nmerge];
for(int i=0; i<nmerge; i++){
		pa[i]=merge[i];
	}
impA(pa,nmerge);
delete [] pa;
delete [] pb;  // When done, free memory pointed to by a.
delete [] merge;
pa,pb = NULL;     // Clear a to prevent using invalid memory reference.

    return 0;
}

void impA(int array[],int size){
   for(int i = 0; i < size; i++)
    {
        cout << array[i] << " " endl;;
    } 
}