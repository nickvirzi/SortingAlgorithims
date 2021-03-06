#include <iostream>
#include "Lab 6.h"
#include <stdlib.h>
#include <stdio.h>
#include <chrono>

typedef std::chrono::high_resolution_clock Clock;

using namespace std;

int main()
{
	bool PlayerCheck = false;

	while (!PlayerCheck)
	{
		CLab6 Lab6;
		Lab6.GenArray10();
		Lab6.GenArray100();
		Lab6.GenArray500();
		Lab6.GenArray5000();
		Lab6.GenArray25000();

		int PlayerChoice;

		cout << "Choose which sort method you would like to use: " << endl;
		cout << "Enter 1 for Bubble Sort" << endl;
		cout << "Enter 2 for Insertion Sort" << endl;
		cout << "Enter 3 for Merge Sort" << endl;
		cout << "Enter 4 for Quick Sort" << endl;
		cout << "Enter 5 for Radix Sort" << endl;
		cout << "Enter 0 to Exit" << endl;
		cout << endl;
		cin >> PlayerChoice;

		if (PlayerChoice < 0 || PlayerChoice > 5)
		{
			cout << "Please enter a valid number" << endl;
		}
		else if (PlayerChoice == 1)
		{
			Lab6.Size10Bubble();
			Lab6.Size100Bubble();
			Lab6.Size500Bubble();
			Lab6.Size5000Bubble();
			Lab6.Size25000Bubble();
			cout << endl;
		}
		else if (PlayerChoice == 2)
		{
			Lab6.Size10Insertion();
			Lab6.Size100Insertion();
			Lab6.Size500Insertion();
			Lab6.Size5000Insertion();
			Lab6.Size25000Insertion();
			cout << endl;
		}
		else if (PlayerChoice == 3)
		{
			Lab6.Size10Merge();
			Lab6.Size100Merge();
			Lab6.Size500Merge();
			Lab6.Size5000Merge();
			Lab6.Size25000Merge();
			cout << endl;
		}
		else if (PlayerChoice == 4)
		{
			Lab6.Size10Quick();
			Lab6.Size100Quick();
			Lab6.Size500Quick();
			Lab6.Size5000Quick();
			Lab6.Size25000Quick();
			cout << endl;
		}
		else if (PlayerChoice == 5)
		{
			Lab6.Size10Radix();
			Lab6.Size100Radix();
			Lab6.Size500Radix();
			Lab6.Size5000Radix();
			Lab6.Size25000Radix();
			cout << endl;
		}
		else if (PlayerChoice == 0)
		{
			PlayerCheck = true;
		}
	}
}