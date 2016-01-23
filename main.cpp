//
//  main.cpp
//  combinations
//
//  Created by Michael Montella on 1/22/16.
//  Copyright © 2016 Michael Montella. All rights reserved.
//

#include <iostream>
using namespace std;

// Sorts input so that it can be compared to the different combinations
void sort(int data[]) {
  int num1 = data[0];
  int num2 = data[1];
  int num3 = data[2];
  int num4 = data[3];
}

void printArray(int arr[]) {
  for (int i = 0; i < 4; i++) {
    cout << arr[i];
  }
  cout << endl;
}

// Recursive function to generate all possible combinations
void combination(int n, int r, int *arr, int sz) {
  for (int i = n; i >= r; i--) {
    // Choose the first element
    arr[r-1] = i;
    if (r > 1) { //If still needs to choose an element
      // Recursion
      combination(i - 1, r - 1, arr, sz); 
    } else {
      // Print a combination
      for (int i = 0; i < sz; i++) {
	//cout << arr[i] << " ";
      }
      //cout << endl;
    }
  }
}


int main() {
  int nums[] = {1, 3, 9, 2};
  int nums2[] = {4, 1, 3, 7};
  int nums3[] = {9, 2, 4, 5};

  //sort(nums);
  //printArray(nums);

  sort(nums2);
  printArray(nums2);

  //sort(nums3);
  //printArray(nums3);

  const int N = 7;
  const int M = 4;
  int *arr = new int[M];
  combination(N, M, arr, M);
    
    return 0;
}
