/*
 * Lab3Part1.cpp
 *
 *  Created on: Sep 20, 2017
 *      Author: Michael Ly
 */

/*
 * Michael Ly
 * TA: Eeshita Biswas
 * 9/22/17
 * Lab 2
 * This file contains functions for Lab 3 Part 1.
 */

#include <iostream>
#include <stdlib.h>
#include <array>
using namespace std;

// Function Declarations
int* createArray1(int* len, int* lo, int* hi);
int* createArray2(int* len, int* lo, int* hi);
void arrHelper(int arr[], int len, int lo, int hi);
void printArray(int arr[], int len);
int hanningWin(int arr[]);
int* filterArray(int arr[], int len);
void graphArray(int arr[], int len, int lo, int hi);

int main() {

	cout << "Problem 1" << endl;
	cout << "Test 1: ";
	int len1, lo1, hi1, *arr1;
	arr1 = createArray1(&len1, &lo1, &hi1);
	cout << endl;
	cout << "len1 = " << len1 << endl; // Expected a random value between 25 and 50.
	cout << "lo1 = " << lo1 << endl; // Expected a random value between -5 and -10.
	cout << "hi1 = " << hi1 << endl; // Expected a random value between 5 and 10.
	printArray(arr1, len1); // Expected arr1 to be printed out.
	cout << endl;
	cout << "Test 2: ";
	int len2, lo2, hi2, *arr2;
	arr2 = createArray1(&len2, &lo2, &hi2);
	cout << endl;
	cout << "len2 = " << len2 << endl; // Expected a random value between 25 and 50.
	cout << "lo2 = " << lo2 << endl; // Expected a random value between -5 and -10.
	cout << "hi2 = " << hi2 << endl; // Expected a random value between 5 and 10.
	printArray(arr2, len2); // Expected arr2 to be printed out.
	cout << endl;
	cout << "Test 3: ";
	int len3, lo3, hi3, *arr3;
	arr3 = createArray1(&len3, &lo3, &hi3);
	cout << endl;
	cout << "len3 = " << len3 << endl; // Expected a random value between 25 and 50.
	cout << "lo3 = " << lo3 << endl; // Expected a random value between -5 and -10.
	cout << "hi3 = " << hi3 << endl; // Expected a random value between 5 and 10.
	printArray(arr3, len3); // Expected arr3 to be printed out.
	cout << "****************************************" << endl;

	cout << "Problem 2" << endl;
	cout << "Test 1: ";
	int len4, lo4, hi4, *arr4;
	arr4 = createArray2(&len4, &lo4, &hi4);
	cout << endl;
	cout << "len4 = " << len4 << endl; // Expected a random value between 25 and 50.
	cout << "lo4 = " << lo4 << endl; // Expected a random value between -5 and -10.
	cout << "hi4 = " << hi4 << endl; // Expected a random value between 5 and 10.
	printArray(arr4, len4); // Expected arr4 to be printed out.
	cout << endl;
	cout << "Test 2: ";
	int len5, lo5, hi5, *arr5;
	arr5 = createArray2(&len5, &lo5, &hi5);
	cout << endl;
	cout << "len5 = " << len5 << endl; // Expected a random value between 25 and 50.
	cout << "lo5 = " << lo5 << endl; // Expected a random value between -5 and -10.
	cout << "hi5 = " << hi5 << endl; // Expected a random value between 5 and 10.
	printArray(arr5, len5); // Expected arr5 to be printed out.
	cout << endl;
	cout << "Test 3: ";
	int len6, lo6, hi6, *arr6;
	arr6 = createArray2(&len6, &lo6, &hi6);
	cout << endl;
	cout << "len6 = " << len6 << endl; // Expected a random value between 25 and 50.
	cout << "lo6 = " << lo6 << endl; // Expected a random value between -5 and -10.
	cout << "hi6 = " << hi6 << endl; // Expected a random value between 5 and 10.
	printArray(arr6, len6); // Expected arr6 to be printed out.
	cout << "****************************************" << endl;

	cout << "Problem 3" << endl;
	int arr7[] = {1, 2, 3, 4, 5};
	cout << "Test 1: ";
	printArray(arr7, 5); // Expected arr7 to be printed out.
	int arr8[] = {8, 4, 3, 1, 7, 9, 0};
	cout << "Test 2: ";
	printArray(arr8, 7); // Expected arr8 to be printed out.
	int arr9[] = {33, 45, 69, 2, 78};
	cout << "Test 3: ";
	printArray(arr9, 5); // Expected arr9 to be printed out.
	cout << "****************************************" << endl;

	cout << "Problem 4" << endl;
	int hw1[] = {3, 8, 2, 5, 1};
	cout << "Test 1: " << hanningWin(hw1) << endl; // Expected output is 4.
	int hw2[] = {8, 2, 5, 1, 4};
	cout << "Test 2: " << hanningWin(hw2) << endl; // Expected output is 3.
	int hw3[] = {2, 5, 1, 4, 6};
	cout << "Test 3: " << hanningWin(hw3) << endl; // Expected output is 3.
	cout << "****************************************" << endl;

	cout << "Problem 5" << endl;
	int old1[] = {3, 8, 2, 5, 1};
	cout << "Test 1: ";
	int* new1 = filterArray(old1, 5);
	printArray(new1, 5); // Expected output is {0, 0, 4, 0, 0}.
	int old2[] = {3, 8, 2, 5, 1, 4, 6, 0, 2};
	cout << "Test 2: ";
	int* new2 = filterArray(old2, 9);
	printArray(new2, 9); // Expected output is {0, 0, 4, 3, 3, 3, 3, 0, 0}.
	cout << "Test 3: ";
	int old3[] = {3, 8, 2, 5, 1, 4};
	int* new3 = filterArray(old3, 6);
	printArray(new3, 6); // Expected output is {0, 0, 4, 3, 0, 0}.
	cout << "****************************************" << endl;

	cout << "Problem 6" << endl;
	cout << "Test 1: " << endl;
	int garr1[] = {6, -2, -4, 5, -3, -4, -3, -1, 5, 2, -2, 0, -7, 2, -3, -4, -3, -1, -5, -3, 1, 7, 3, -7, -7, 3, -8, 1, -5, -4, -2, -5, -8, 0, -4};
	graphArray(garr1, 35, -8, 7);
	cout << endl;
	cout << "Test 2: " << endl;
	int* garr2 = filterArray(garr1, 35);
	graphArray(garr2, 35, -4, 2); // Expected
	cout << endl;
	cout << "Test 3: " << endl;
	int garr3[] = {1, 2, 3, 4, 5, 4, 3, 2, 1, 0, -1, -2, -3, -4, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 4, 3, 2, 1, 0};
	graphArray(garr3, 30, -5, 5); // Expected a wave to be printed out.

	return 0;
}


// Problem 1
int* createArray1(int* len, int* lo, int* hi) {
	*len = rand()%25 + 25;
	*lo = -1 * (rand()%5 + 5);
	*hi = rand()%5 + 5;
	int* arr = new int[*len];
	for (int i=0; i<*len; i++) {
		arr[i] = rand()%(*hi-*lo) + *lo;
	}
	return arr;
	delete[] arr;
}

// Problem 2
void arrHelper(int arr[], int len, int lo, int hi) {
	arr[len-1] = rand()%(hi-lo) + lo;
	if (len-1 > 0) {
		arrHelper(arr, len-1, lo, hi);
	}
}

int* createArray2(int* len, int* lo, int* hi) {
	*len = rand()%25 + 25;
	*hi = rand()%25 + 5;
	*lo = -1 * (rand()%5 + 5);
	int* arr = new int[*len];
	arrHelper(arr, *len, *lo, *hi);
	return arr;
	delete[] arr;
}

// Problem 3
void printArray(int arr[], int len) {
	cout << "{";
	for (int i=0; i<len; i++) {
		if (i < len-1) {
			cout << arr[i] << ", ";
		}
		else {
			cout << arr[i];
		}
	}
	cout << "}" << endl;
}

// Problem 4
int hanningWin(int arr[]) {
	int result = 0;
	for (int i=0; i<5; i++) {
		if (i==0 || i==4) {
			result += arr[i]*1;
		}
		else if (i==1 || i==3) {
			result += arr[i]*2;
		}
		else {
			result += arr[i]*3;
		}
	}
	result /= 9;
	return result;
}

// Problem 5
int* filterArray(int arr[], int len) {
	int* newarr = new int[len];
	if (len<5) {
		for (int i=0; i<len; i++) {
			newarr[i] = 0;
		}
	}
	else {
		for (int i=0; i<len; i++) {
			if (i<2 || i>len-3) {
				newarr[i] = 0;
			}
			else {
				newarr[i] = hanningWin(&arr[i-2]);
			}
		}
	}
	return newarr;
	delete[] newarr;
}

// Problem 6
void graphArray(int arr[], int len, int lo, int hi) {
	for (int i=hi; i>=lo; i--) {
		if (i>=0) {
			cout << " " << i << ":";
		}
		else {
			cout << i << ":";
		}
		for (int j=0; j<len; j++) {
			if (arr[j]==i) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
}
