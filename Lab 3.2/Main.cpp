#include <iostream>
#include <vector>
#inlcude <algorithm>
using namespace std;

class Sorter {
public:
 void mergeSort (int arr[], int l, int r); // recursive
 void quickSort (int arr[], int low, int high); // last-element pivot
 void quickSortM3(int arr[], int low, int high); // median-of-three
pivot
private:
 void merge(int arr[], int l, int m, int r);
 int partition (int arr[], int low, int high);
 int partitionM3(int arr[], int low, int high);
 int medianOfThree(int arr[], int low, int high); // returns pivot
index
};

// Merge helper (provided)
