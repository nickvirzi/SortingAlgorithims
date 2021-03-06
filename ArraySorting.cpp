// Lab 6.cpp : Defines the exported functions for the DLL application.
//

#include "header.h"
#include "Lab 6.h"
#include <array>
#include <stdlib.h>
#include <iostream>
#include <chrono>

typedef std::chrono::high_resolution_clock Clock;

using namespace std;

CLab6::CLab6()
{
    return;
}

void CLab6::GenArray10()
{
	for (int i = 0; i < 10; i++)
	{
		Size10[i] = rand() % 20 + 0;
	}
}

void CLab6::GenArray100()
{
	for (int i = 0; i < 100; i++)
	{
		Size100[i] = rand() % 200 + 0;
	}
}

void CLab6::GenArray500()
{
	for (int i = 0; i < 500; i++)
	{
		Size500[i] = rand() % 1000 + 0;
	}
}

void CLab6::GenArray5000()
{
	for (int i = 0; i < 5000; i++)
	{
		Size5000[i] = rand() % 10000 + 0;
	}
}

void CLab6::GenArray25000()
{
	for (int i = 0; i < 25000; i++)
	{
		Size25000[i] = rand() % 50000 + 0;
	}
}

void CLab6::Swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void CLab6::BubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{ 
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				Swap(&arr[j], &arr[j + 1]);
			}
		}
	}
	Size10[10] = arr[10];
}

void CLab6::OutputArray()
{
	for (int i = 0; i < 10; i++)
	{
		cout << Size10[i] << " ";
	}
	cout << endl;
}

void CLab6::Size10Bubble()
{
	OutputArray();
	int n = sizeof(Size10) / sizeof(Size10[0]);
	auto t1 = Clock::now();
	BubbleSort(Size10, n);
	auto t2 = Clock::now();
	OutputArray();
	cout << endl;
	cout << "Delta t2-t1: " << std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() << " nanoseconds" << std::endl;
}

void CLab6::Size100Bubble()
{
	int n = sizeof(Size100) / sizeof(Size100[0]);
	auto t1 = Clock::now();
	BubbleSort(Size100, n);
	auto t2 = Clock::now();
	cout << "Delta t2-t1: " << std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() << " nanoseconds" << std::endl;
}

void CLab6::Size500Bubble()
{
	int n = sizeof(Size500) / sizeof(Size500[0]);
	auto t1 = Clock::now();
	BubbleSort(Size500, n);
	auto t2 = Clock::now();
	cout << "Delta t2-t1: " << std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() << " nanoseconds" << std::endl;
}

void CLab6::Size5000Bubble()
{
	int n = sizeof(Size5000) / sizeof(Size5000[0]);
	auto t1 = Clock::now();
	BubbleSort(Size5000, n);
	auto t2 = Clock::now();
	cout << "Delta t2-t1: " << std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() << " nanoseconds" << std::endl;
}

void CLab6::Size25000Bubble()
{
	int n = sizeof(Size25000) / sizeof(Size25000[0]);
	auto t1 = Clock::now();
	BubbleSort(Size25000, n);
	auto t2 = Clock::now();
	cout << "Delta t2-t1: " << std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() << " nanoseconds" << std::endl;
}

void CLab6::InsertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void CLab6::Size10Insertion()
{
	OutputArray();
	int n = sizeof(Size10) / sizeof(Size10[0]);
	auto t1 = Clock::now();
	InsertionSort(Size10, n);
	auto t2 = Clock::now();
	OutputArray();
	cout << endl;
	cout << "Delta t2-t1: " << std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() << " nanoseconds" << std::endl;
}

void CLab6::Size100Insertion()
{
	int n = sizeof(Size100) / sizeof(Size100[0]);
	auto t1 = Clock::now();
	InsertionSort(Size100, n);
	auto t2 = Clock::now();
	cout << "Delta t2-t1: " << std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() << " nanoseconds" << std::endl;
}

void CLab6::Size500Insertion()
{
	int n = sizeof(Size500) / sizeof(Size500[0]);
	auto t1 = Clock::now();
	InsertionSort(Size500, n);
	auto t2 = Clock::now();
	cout << "Delta t2-t1: " << std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() << " nanoseconds" << std::endl;
}

void CLab6::Size5000Insertion()
{
	int n = sizeof(Size5000) / sizeof(Size5000[0]);
	auto t1 = Clock::now();
	InsertionSort(Size5000, n);
	auto t2 = Clock::now();
	cout << "Delta t2-t1: " << std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() << " nanoseconds" << std::endl;
}

void CLab6::Size25000Insertion()
{
	int n = sizeof(Size25000) / sizeof(Size25000[0]);
	auto t1 = Clock::now();
	InsertionSort(Size25000, n);
	auto t2 = Clock::now();
	cout << "Delta t2-t1: " << std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() << " nanoseconds" << std::endl;
}

void CLab6::Merge10(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	int L[5], R[5];

	for (i = 0; i < n1; i++)
	{
		L[i] = arr[l + i];
	}
	for (j = 0; j < n2; j++)
	{
		R[j] = arr[m + 1 + j];
	}

	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

void CLab6::MergeSort10(int arr[], int l, int r)
{
	if (l < r)
	{
		int m = l + (r - l) / 2;

		MergeSort10(arr, l, m);
		MergeSort10(arr, m + 1, r);

		Merge10(arr, l, m, r);
	}
}

void CLab6::Size10Merge()
{
	OutputArray();
	int n = sizeof(Size10) / sizeof(Size10[0]);
	auto t1 = Clock::now();
	MergeSort10(Size10, 0, n - 1);
	auto t2 = Clock::now();
	OutputArray();
	cout << endl;
	cout << "Delta t2-t1: " << std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() << " nanoseconds" << std::endl;
}

void CLab6::Merge100(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	int L[50], R[50];

	for (i = 0; i < n1; i++)
	{
		L[i] = arr[l + i];
	}
	for (j = 0; j < n2; j++)
	{
		R[j] = arr[m + 1 + j];
	}

	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

void CLab6::MergeSort100(int arr[], int l, int r)
{
	if (l < r)
	{
		int m = l + (r - l) / 2;

		MergeSort100(arr, l, m);
		MergeSort100(arr, m + 1, r);

		Merge100(arr, l, m, r);
	}
}

void CLab6::Size100Merge()
{
	int n = sizeof(Size100) / sizeof(Size100[0]);
	auto t1 = Clock::now();
	MergeSort100(Size100, 0, n - 1);
	auto t2 = Clock::now();
	cout << "Delta t2-t1: " << std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() << " nanoseconds" << std::endl;
}

void CLab6::Merge500(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	int L[250], R[250];

	for (i = 0; i < n1; i++)
	{
		L[i] = arr[l + i];
	}
	for (j = 0; j < n2; j++)
	{
		R[j] = arr[m + 1 + j];
	}

	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

void CLab6::MergeSort500(int arr[], int l, int r)
{
	if (l < r)
	{
		int m = l + (r - l) / 2;

		MergeSort500(arr, l, m);
		MergeSort500(arr, m + 1, r);

		Merge500(arr, l, m, r);
	}
}

void CLab6::Size500Merge()
{
	int n = sizeof(Size500) / sizeof(Size500[0]);
	auto t1 = Clock::now();
	MergeSort500(Size500, 0, n - 1);
	auto t2 = Clock::now();
	cout << "Delta t2-t1: " << std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() << " nanoseconds" << std::endl;
}

void CLab6::Merge5000(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	int L[2500], R[2500];

	for (i = 0; i < n1; i++)
	{
		L[i] = arr[l + i];
	}
	for (j = 0; j < n2; j++)
	{
		R[j] = arr[m + 1 + j];
	}

	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

void CLab6::MergeSort5000(int arr[], int l, int r)
{
	if (l < r)
	{
		int m = l + (r - l) / 2;

		MergeSort5000(arr, l, m);
		MergeSort5000(arr, m + 1, r);

		Merge5000(arr, l, m, r);
	}
}

void CLab6::Size5000Merge()
{
	int n = sizeof(Size5000) / sizeof(Size5000[0]);
	auto t1 = Clock::now();
	MergeSort5000(Size5000, 0, n - 1);
	auto t2 = Clock::now();
	cout << "Delta t2-t1: " << std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() << " nanoseconds" << std::endl;
}

void CLab6::Merge25000(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	int L[12500], R[12500];

	for (i = 0; i < n1; i++)
	{
		L[i] = arr[l + i];
	}
	for (j = 0; j < n2; j++)
	{
		R[j] = arr[m + 1 + j];
	}

	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

void CLab6::MergeSort25000(int arr[], int l, int r)
{
	if (l < r)
	{
		int m = l + (r - l) / 2;

		MergeSort25000(arr, l, m);
		MergeSort25000(arr, m + 1, r);

		Merge25000(arr, l, m, r);
	}
}

void CLab6::Size25000Merge()
{
	int n = sizeof(Size25000) / sizeof(Size25000[0]);
	auto t1 = Clock::now();
	MergeSort25000(Size25000, 0, n - 1);
	auto t2 = Clock::now();
	cout << "Delta t2-t1: " << std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() << " nanoseconds" << std::endl;
}

int CLab6::Partition(int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			Swap(&arr[i], &arr[j]);
		}
	}
	Swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}

void CLab6::QuickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		int pi = Partition(arr, low, high);

		QuickSort(arr, low, pi - 1);
		QuickSort(arr, pi + 1, high);
	}
}

void CLab6::Size10Quick()
{
	OutputArray();
	int n = sizeof(Size10) / sizeof(Size10[0]);
	auto t1 = Clock::now();
	QuickSort(Size10, 0, n-1);
	auto t2 = Clock::now();
	OutputArray();
	cout << endl;
	cout << "Delta t2-t1: " << std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() << " nanoseconds" << std::endl;
}

void CLab6::Size100Quick()
{
	int n = sizeof(Size100) / sizeof(Size100[0]);
	auto t1 = Clock::now();
	QuickSort(Size100, 0, n - 1);
	auto t2 = Clock::now();
	cout << "Delta t2-t1: " << std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() << " nanoseconds" << std::endl;
}

void CLab6::Size500Quick()
{
	int n = sizeof(Size500) / sizeof(Size500[0]);
	auto t1 = Clock::now();
	QuickSort(Size500, 0, n - 1);
	auto t2 = Clock::now();
	cout << "Delta t2-t1: " << std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() << " nanoseconds" << std::endl;
}

void CLab6::Size5000Quick()
{
	int n = sizeof(Size5000) / sizeof(Size5000[0]);
	auto t1 = Clock::now();
	QuickSort(Size5000, 0, n - 1);
	auto t2 = Clock::now();
	cout << "Delta t2-t1: " << std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() << " nanoseconds" << std::endl;
}

void CLab6::Size25000Quick()
{
	int n = sizeof(Size25000) / sizeof(Size25000[0]);
	auto t1 = Clock::now();
	QuickSort(Size25000, 0, n - 1);
	auto t2 = Clock::now();
	cout << "Delta t2-t1: " << std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() << " nanoseconds" << std::endl;
}

int CLab6::GetMax(int arr[], int n)
{
	int mx = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > mx)
			mx = arr[i];
	}
	return mx;
}

void CLab6::RadixSort10(int arr[], int n)
{
	int m = GetMax(arr, n);

	for (int exp = 1; m / exp > 0; exp *= 10)
	{
		CountSort10(arr, n, exp);
	}
}

void CLab6::CountSort10(int arr[], int n, int exp)
{
	int output[10];
	int i, count[10] = { 0 };

	for (i = 0; i < n; i++)
	{
		count[(arr[i] / exp) % 10]++;
	}

	for (i = 1; i < 10; i++)
	{
		count[i] += count[i - 1];
	}

	for (i = n - 1; i >= 0; i--)
	{
		output[count[(arr[i] / exp) % 10] - 1] = arr[i];
		count[(arr[i] / exp) % 10]--;
	}

	for (i = 0; i < n; i++)
	{
		arr[i] = output[i];
	}
}

void CLab6::RadixSort100(int arr[], int n)
{
	int m = GetMax(arr, n);

	for (int exp = 1; m / exp > 0; exp *= 10)
	{
		CountSort100(arr, n, exp);
	}
}

void CLab6::CountSort100(int arr[], int n, int exp)
{
	int output[100];
	int i, count[10] = { 0 };

	for (i = 0; i < n; i++)
	{
		count[(arr[i] / exp) % 10]++;
	}

	for (i = 1; i < 10; i++)
	{
		count[i] += count[i - 1];
	}

	for (i = n - 1; i >= 0; i--)
	{
		output[count[(arr[i] / exp) % 10] - 1] = arr[i];
		count[(arr[i] / exp) % 10]--;
	}

	for (i = 0; i < n; i++)
	{
		arr[i] = output[i];
	}
}

void CLab6::RadixSort500(int arr[], int n)
{
	int m = GetMax(arr, n);

	for (int exp = 1; m / exp > 0; exp *= 10)
	{
		CountSort500(arr, n, exp);
	}
}

void CLab6::CountSort500(int arr[], int n, int exp)
{
	int output[500];
	int i, count[10] = { 0 };

	for (i = 0; i < n; i++)
	{
		count[(arr[i] / exp) % 10]++;
	}

	for (i = 1; i < 10; i++)
	{
		count[i] += count[i - 1];
	}

	for (i = n - 1; i >= 0; i--)
	{
		output[count[(arr[i] / exp) % 10] - 1] = arr[i];
		count[(arr[i] / exp) % 10]--;
	}

	for (i = 0; i < n; i++)
	{
		arr[i] = output[i];
	}
}

void CLab6::RadixSort5000(int arr[], int n)
{
	int m = GetMax(arr, n);

	for (int exp = 1; m / exp > 0; exp *= 10)
	{
		CountSort5000(arr, n, exp);
	}
}

void CLab6::CountSort5000(int arr[], int n, int exp)
{
	int output[5000];
	int i, count[10] = { 0 };

	for (i = 0; i < n; i++)
	{
		count[(arr[i] / exp) % 10]++;
	}

	for (i = 1; i < 10; i++)
	{
		count[i] += count[i - 1];
	}

	for (i = n - 1; i >= 0; i--)
	{
		output[count[(arr[i] / exp) % 10] - 1] = arr[i];
		count[(arr[i] / exp) % 10]--;
	}

	for (i = 0; i < n; i++)
	{
		arr[i] = output[i];
	}
}

void CLab6::RadixSort25000(int arr[], int n)
{
	int m = GetMax(arr, n);

	for (int exp = 1; m / exp > 0; exp *= 10)
	{
		CountSort25000(arr, n, exp);
	}
}

void CLab6::CountSort25000(int arr[], int n, int exp)
{
	int output[25000];
	int i, count[10] = { 0 };

	for (i = 0; i < n; i++)
	{
		count[(arr[i] / exp) % 10]++;
	}

	for (i = 1; i < 10; i++)
	{
		count[i] += count[i - 1];
	}

	for (i = n - 1; i >= 0; i--)
	{
		output[count[(arr[i] / exp) % 10] - 1] = arr[i];
		count[(arr[i] / exp) % 10]--;
	}

	for (i = 0; i < n; i++)
	{
		arr[i] = output[i];
	}
}

void CLab6::Size10Radix()
{
	OutputArray();
	int n = sizeof(Size10) / sizeof(Size10[0]);
	auto t1 = Clock::now();
	RadixSort10(Size10, n);
	auto t2 = Clock::now();
	OutputArray();
	cout << endl;
	cout << "Delta t2-t1: " << std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() << " nanoseconds" << std::endl;
}

void CLab6::Size100Radix()
{
	int n = sizeof(Size100) / sizeof(Size100[0]);
	auto t1 = Clock::now();
	RadixSort100(Size100, n);
	auto t2 = Clock::now();
	cout << "Delta t2-t1: " << std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() << " nanoseconds" << std::endl;
}

void CLab6::Size500Radix()
{
	int n = sizeof(Size500) / sizeof(Size500[0]);
	auto t1 = Clock::now();
	RadixSort500(Size500, n);
	auto t2 = Clock::now();
	cout << "Delta t2-t1: " << std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() << " nanoseconds" << std::endl;
}

void CLab6::Size5000Radix()
{
	int n = sizeof(Size5000) / sizeof(Size5000[0]);
	auto t1 = Clock::now();
	RadixSort5000(Size5000, n);
	auto t2 = Clock::now();
	cout << "Delta t2-t1: " << std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() << " nanoseconds" << std::endl;
}

void CLab6::Size25000Radix()
{
	int n = sizeof(Size25000) / sizeof(Size25000[0]);
	auto t1 = Clock::now();
	RadixSort25000(Size25000, n);
	auto t2 = Clock::now();
	cout << "Delta t2-t1: " << std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() << " nanoseconds" << std::endl;
}