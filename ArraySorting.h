
#ifdef LAB6_EXPORTS
#define LAB6_API __declspec(dllexport)
#else
#define LAB6_API __declspec(dllimport)
#endif

#include <array>

class LAB6_API CLab6 {
public:
	CLab6(void);
	void GenArray10();
	void GenArray100();
	void GenArray500();
	void GenArray5000();
	void GenArray25000();

	int Size10[10];
	int Size100[100];
	int Size500[500];
	int Size5000[5000];
	int Size25000[25000];

	void OutputArray();

	void Swap(int *xp, int *yp);
	void BubbleSort(int arr[], int n);
	void Size10Bubble();
	void Size100Bubble();
	void Size500Bubble();
	void Size5000Bubble();
	void Size25000Bubble();

	void InsertionSort(int arr[], int n);
	void Size10Insertion();
	void Size100Insertion();
	void Size500Insertion();
	void Size5000Insertion();
	void Size25000Insertion();

	void Merge10(int arr[], const int l, const int m, const int r);
	void MergeSort10(int arr[], int l, int r);
	void Size10Merge();
	void Merge100(int arr[], const int l, const int m, const int r);
	void MergeSort100(int arr[], int l, int r);
	void Size100Merge();
	void Merge500(int arr[], const int l, const int m, const int r);
	void MergeSort500(int arr[], int l, int r);
	void Size500Merge();
	void Merge5000(int arr[], const int l, const int m, const int r);
	void MergeSort5000(int arr[], int l, int r);
	void Size5000Merge();
	void Merge25000(int arr[], const int l, const int m, const int r);
	void MergeSort25000(int arr[], int l, int r);
	void Size25000Merge();

	int Partition(int arr[], int low, int high);
	void QuickSort(int arr[], int low, int high);
	void Size10Quick();
	void Size100Quick();
	void Size500Quick();
	void Size5000Quick();
	void Size25000Quick();

	int GetMax(int arr[], int n);
	void RadixSort10(int arr[], int n);
	void RadixSort100(int arr[], int n);
	void RadixSort500(int arr[], int n);
	void RadixSort5000(int arr[], int n);
	void RadixSort25000(int arr[], int n);
	void CountSort10(int arr[], int n, int exp);
	void CountSort100(int arr[], int n, int exp);
	void CountSort500(int arr[], int n, int exp);
	void CountSort5000(int arr[], int n, int exp);
	void CountSort25000(int arr[], int n, int exp);
	void Size10Radix();
	void Size100Radix();
	void Size500Radix();
	void Size5000Radix();
	void Size25000Radix();
};
