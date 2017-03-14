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
int quickSort(int[], int, int);
int partition(int[], int, int, int&);
void RemplitA(int[]);
void impA(int[],int);
void trie(int[],int);

/* 
 */
int main(int argc, char** argv) {
 
    int array[10];
    int size = sizeof(array)/sizeof(array[0]);
    RemplitA(array);
    trie(array,size);
    impA(array,size);
    
    return 0;
}

int quickSort(int array[], int start, int end)
{
    int swaps = 0;
    if(start < end)
    {
        int pIndex = partition(array, start, end, swaps);
        //after each call one number(the PIVOT) will be at its final position
        swaps += quickSort(array, start, pIndex-1);
        swaps += quickSort(array, pIndex+1, end);
    }
    return swaps;
}

int partition(int array[], int start, int end, int& swaps)
{
    int pivot = array[end];
    int pIndex = start;

    for(int i = start; i < end; i++)
    {
        if(array[i] <= pivot)
        {

            if(pIndex != i)
            {
                std::swap(array[i], array[pIndex]);
                swaps++;
            }
            pIndex++;
        }
    }
    if(pIndex != end)
    {
        std::swap(array[pIndex], array[end]);
        swaps++;
    }
    return pIndex;
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
void trie(int array[],int size){
   
    int swaps = quickSort(array, 0, size-1);
 
}
