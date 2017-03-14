/* 
 * File:   main.cpp
 * Author: iheb
 *
 * Created on March 11, 2017, 7:33 PM
 */

#include <iostream>
using namespace std;


/*
 * functions 
 */
void RemplitA(int[]);
void impA(int[],int);
void fillarr(int array[],int size){
    double max =array[0];
    double min=array[0];
    double avrage=0;
    for (int i = 0; i < size; i++) {
        if ((int)array[i]>max){
            max=(int)array[i];
        }
        if((int)array[i]<min){
            min=(int)array[i];
        }
        avrage=avrage+(int)array[i];

    }
    cout<<"\nmin:"<<min<<"\nmax:"<<max<<"\navrage:"<<avrage/size<<endl;

}
/*
 * 
 */
int main(int argc, char** argv) {
 
    int array[10];
    int size = sizeof(array)/sizeof(array[0]);
    RemplitA(array);
    fillarr(array,size);
    
    
    return 0;
}


void RemplitA(int array[]){
    for ( int i = 0; i < 10; i++ ) {
      array[i] = -i + 100; // set element at location i to i + 100
   }
}
void impA(int array[],int size){
   for(int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    } 
}
