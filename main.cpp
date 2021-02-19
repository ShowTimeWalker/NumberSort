#include <bits/stdc++.h>

using namespace std;

//排序算法练习 2021-2-20
void BubbleSort(int* arr, int n);//冒泡排序
void SelectSort(int* arr, int n);//选择排序
void InsertSort(int* arr, int n);//插入排序
void QuickSort(int* arr, int n);//快速排序
void MergeSort(int* arr, int n);//归并排序
void HeapSort(int* arr, int n);//堆排序
void CountingSort(int* arr, int n);//计数排序
void ShellSort(int* arr, int n);//希尔排序

//测试数据
int sequence_1[5] = { 43.56,20,14,33 };
int sequence_2[10] = { 29,543,345,103,378,472,32,764,272,634 };
int sequence_3[20] = { 5,7,4,5,8,2,7,1,5,2,7,8,9,2,3,5,6,2,5,1 };

//测试入口
void PrintNums(int* arr, int n) {
	for (int i = 0; i < n - 1; i++) {
		cout << arr[i] << "-";
	}
	cout << arr[n - 1] << endl;
}

void sort(void (*fun)(int*, int), int* arr, int n) {
	fun(arr, n);//函数指针，调用不同的排序算法
}

void test(void) {
	cout << "print raw numbers:" << endl;
	cout << "sequence_1:\t";
	PrintNums(sequence_1, sizeof(sequence_1)/sizeof(int));
	cout << "sequence_2:\t";
	PrintNums(sequence_2, sizeof(sequence_2) / sizeof(int));
	cout << "sequence_3:\t";
	PrintNums(sequence_3, sizeof(sequence_3) / sizeof(int));

	//*********************************//
	cout << endl;
	cout << "sort and print for sequence 1:" << endl;
	int* temp_1 = new int[sizeof(sequence_1) / sizeof(int)];//申请动态数组

	memcpy(temp_1, sequence_1, sizeof(sequence_1));
	sort(BubbleSort, temp_1, sizeof(sequence_1) / sizeof(int));
	cout << "BubbleSort:\t";
	PrintNums(temp_1, sizeof(sequence_1) / sizeof(int));

	memcpy(temp_1, sequence_1, sizeof(sequence_1));
	sort(SelectSort, temp_1, sizeof(sequence_1) / sizeof(int));
	cout << "SelectSort:\t";
	PrintNums(temp_1, sizeof(sequence_1) / sizeof(int));

	memcpy(temp_1, sequence_1, sizeof(sequence_1));
	sort(InsertSort, temp_1, sizeof(sequence_1) / sizeof(int));
	cout << "InsertSort:\t";
	PrintNums(temp_1, sizeof(sequence_1) / sizeof(int));

	memcpy(temp_1, sequence_1, sizeof(sequence_1));
	sort(QuickSort, temp_1, sizeof(sequence_1) / sizeof(int));
	cout << "QuickSort:\t";
	PrintNums(temp_1, sizeof(sequence_1) / sizeof(int));

	memcpy(temp_1, sequence_1, sizeof(sequence_1));
	sort(MergeSort, temp_1, sizeof(sequence_1) / sizeof(int));
	cout << "MergeSort:\t";
	PrintNums(temp_1, sizeof(sequence_1) / sizeof(int));

	memcpy(temp_1, sequence_1, sizeof(sequence_1));
	sort(HeapSort, temp_1, sizeof(sequence_1) / sizeof(int));
	cout << "HeapSort:\t";
	PrintNums(temp_1, sizeof(sequence_1) / sizeof(int));

	memcpy(temp_1, sequence_1, sizeof(sequence_1));
	sort(CountingSort, temp_1, sizeof(sequence_1) / sizeof(int));
	cout << "CountingSort:\t";
	PrintNums(temp_1, sizeof(sequence_1) / sizeof(int));

	memcpy(temp_1, sequence_1, sizeof(sequence_1));
	sort(ShellSort, temp_1, sizeof(sequence_1) / sizeof(int));
	cout << "ShellSort:\t";
	PrintNums(temp_1, sizeof(sequence_1) / sizeof(int));

	//*********************************//
	cout << endl;
	cout << "sort and print for sequence 2:" << endl;
	int* temp_2 = new int[sizeof(sequence_2) / sizeof(int)];//申请动态数组

	memcpy(temp_2, sequence_2, sizeof(sequence_2));
	sort(BubbleSort, temp_2, sizeof(sequence_2) / sizeof(int));
	cout << "BubbleSort:\t";
	PrintNums(temp_2, sizeof(sequence_2) / sizeof(int));

	memcpy(temp_2, sequence_2, sizeof(sequence_2));
	sort(SelectSort, temp_2, sizeof(sequence_2) / sizeof(int));
	cout << "SelectSort:\t";
	PrintNums(temp_2, sizeof(sequence_2) / sizeof(int));

	memcpy(temp_2, sequence_2, sizeof(sequence_2));
	sort(InsertSort, temp_2, sizeof(sequence_2) / sizeof(int));
	cout << "InsertSort:\t";
	PrintNums(temp_2, sizeof(sequence_2) / sizeof(int));

	memcpy(temp_2, sequence_2, sizeof(sequence_2));
	sort(QuickSort, temp_2, sizeof(sequence_2) / sizeof(int));
	cout << "QuickSort:\t";
	PrintNums(temp_2, sizeof(sequence_2) / sizeof(int));

	memcpy(temp_2, sequence_2, sizeof(sequence_2));
	sort(MergeSort, temp_2, sizeof(sequence_2) / sizeof(int));
	cout << "MergeSort:\t";
	PrintNums(temp_2, sizeof(sequence_2) / sizeof(int));

	memcpy(temp_2, sequence_2, sizeof(sequence_2));
	sort(HeapSort, temp_2, sizeof(sequence_2) / sizeof(int));
	cout << "HeapSort:\t";
	PrintNums(temp_2, sizeof(sequence_2) / sizeof(int));

	memcpy(temp_2, sequence_2, sizeof(sequence_2));
	sort(CountingSort, temp_2, sizeof(sequence_2) / sizeof(int));
	cout << "CountingSort:\t";
	PrintNums(temp_2, sizeof(sequence_2) / sizeof(int));

	memcpy(temp_2, sequence_2, sizeof(sequence_2));
	sort(ShellSort, temp_2, sizeof(sequence_2) / sizeof(int));
	cout << "ShellSort:\t";
	PrintNums(temp_2, sizeof(sequence_2) / sizeof(int));

	//*********************************//
	cout << endl;
	cout << "sort and print for sequence 3:" << endl;
	int* temp_3 = new int[sizeof(sequence_3) / sizeof(int)];//申请动态数组

	memcpy(temp_3, sequence_3, sizeof(sequence_3));
	sort(BubbleSort, temp_3, sizeof(sequence_3) / sizeof(int));
	cout << "BubbleSort:\t";
	PrintNums(temp_3, sizeof(sequence_3) / sizeof(int));

	memcpy(temp_3, sequence_3, sizeof(sequence_3));
	sort(SelectSort, temp_3, sizeof(sequence_3) / sizeof(int));
	cout << "SelectSort:\t";
	PrintNums(temp_3, sizeof(sequence_3) / sizeof(int));

	memcpy(temp_3, sequence_3, sizeof(sequence_3));
	sort(InsertSort, temp_3, sizeof(sequence_3) / sizeof(int));
	cout << "InsertSort:\t";
	PrintNums(temp_3, sizeof(sequence_3) / sizeof(int));

	memcpy(temp_3, sequence_3, sizeof(sequence_3));
	sort(QuickSort, temp_3, sizeof(sequence_3) / sizeof(int));
	cout << "QuickSort:\t";
	PrintNums(temp_3, sizeof(sequence_3) / sizeof(int));

	memcpy(temp_3, sequence_3, sizeof(sequence_3));
	sort(MergeSort, temp_3, sizeof(sequence_3) / sizeof(int));
	cout << "MergeSort:\t";
	PrintNums(temp_3, sizeof(sequence_3) / sizeof(int));

	memcpy(temp_3, sequence_3, sizeof(sequence_3));
	sort(HeapSort, temp_3, sizeof(sequence_3) / sizeof(int));
	cout << "HeapSort:\t";
	PrintNums(temp_3, sizeof(sequence_3) / sizeof(int));

	memcpy(temp_3, sequence_3, sizeof(sequence_3));
	sort(CountingSort, temp_3, sizeof(sequence_3) / sizeof(int));
	cout << "CountingSort:\t";
	PrintNums(temp_3, sizeof(sequence_3) / sizeof(int));

	memcpy(temp_3, sequence_3, sizeof(sequence_3));
	sort(ShellSort, temp_3, sizeof(sequence_3) / sizeof(int));
	cout << "ShellSort:\t";
	PrintNums(temp_3, sizeof(sequence_3) / sizeof(int));
}


int main(int) {
	test();
	return 0;
}

//
void BubbleSort(int* arr, int n) {
	if (arr == nullptr || n < 2)
		return;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}
}

//
void SelectSort(int* arr, int n) {
	if (arr == nullptr || n < 2)
		return;
	for (int i = 0; i < n; i++) {
		int min = arr[i];
		int min_index = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < min) {
				min = arr[j];
				min_index = j;
			}
		}
		swap(arr[i], arr[min_index]);
	}
}

//
void InsertSort(int* arr, int n) {
	if (arr == nullptr || n < 2)
		return;
	for (int i = 1; i < n; i++) {
		int j = i - 1;
		int temp = arr[i];
		while (j >= 0 && temp < arr[j]) {
			j--;
		}
		for (int k = i; k > j + 1; k--)
			arr[k] = arr[k - 1];
		arr[j + 1] = temp;
	}
}

//
static int partition(int* arr, int left, int right) {
	int i = left + 1, j = right;
	while (true) {
		while (i <= j && arr[i] <= arr[left])
			i++;
		while (i <= j && arr[j] >= arr[left])
			j--;
		if (i >= j)
			break;
		swap(arr[i], arr[j]);
	}
	swap(arr[j], arr[left]);
	return j;
}

static void sortRecursive(int* arr, int left, int right) {
	if (left >= right)
		return;
	int middle = partition(arr, left, right);
	sortRecursive(arr, left, middle - 1);
	sortRecursive(arr, middle + 1, right);
}

void QuickSort(int* arr, int n) {
	if (arr == nullptr || n < 2)
		return;
	sortRecursive(arr, 0, n - 1);
}

//
static void merge(int* arr, int left, int middle, int right) {
	int i = left, j = middle + 1, k = 0;
	int* tempArr = new int[right - left + 1];
	while (i <= middle && j <= right) {
		if (arr[i] < arr[j])
			tempArr[k++] = arr[i++];
		else
			tempArr[k++] = arr[j++];
	}
	while (i <= middle)
		tempArr[k++] = arr[i++];
	while (j <= right)
		tempArr[k++] = arr[j++];
	memcpy(arr + left, tempArr, sizeof(int) * (right - left + 1));
	delete[] tempArr;
}

static void mergeRecursive(int* arr, int left, int right) {
	if (left == right)
		return;
	int middle = (left + right) / 2;
	mergeRecursive(arr, left, middle);
	mergeRecursive(arr, middle + 1, right);
	merge(arr, left, middle, right);
}

void MergeSort(int* arr, int n) {
	if (arr == nullptr || n < 2)
		return;
	mergeRecursive(arr, 0, n - 1);
}

//
static void downAdjust(int* arr, int n, int parent) {
	int child = 2 * parent + 1;
	while (child <= n) {
		if (child + 1 <= n && arr[child] < arr[child + 1])
			child++;
		if (arr[parent] < arr[child]) {
			swap(arr[parent], arr[child]);
			parent = child;
			child = 2 * parent + 1;
		}
		else
			break;
	}
}

void HeapSort(int* arr, int n) {
	if (arr == nullptr || n < 2)
		return;
	for (int i = n / 2 - 1; i >= 0; i--)
		downAdjust(arr, n - 1, i);
	for (int i = n - 1; i > 0; i--) {
		swap(arr[0], arr[i]);
		downAdjust(arr, i - 1, 0);
	}
}

//
void CountingSort(int* arr, int n) {
	if (arr == nullptr || n < 2)
		return;
	int max_value = *max_element(arr, arr + n);
	int min_value = *min_element(arr, arr + n);
	int* tempArr = new int[max_value - min_value + 1];
	fill_n(tempArr, max_value - min_value + 1, 0);
	for (int i = 0; i < n; i++)
		tempArr[arr[i] - min_value]++;
	int k = 0;
	for (int i = min_value; i <= max_value; i++) {
		while (tempArr[i - min_value]) {
			tempArr[i - min_value]--;
			arr[k++] = i;
		}
	}
}

//
static void insertI(int* arr, int n, int interval) {
	for (int i = interval; i < n; i += interval) {
		int j = i - interval;
		int value = arr[i];
		while (j >= 0 && arr[j] > value)
			j -= interval;
		for (int k = i; k > j + interval; k -= interval)
			arr[k] = arr[k - interval];
		arr[j + interval] = value;
	}
}

void ShellSort(int* arr, int n) {
	if (arr == nullptr || n < 2)
		return;
	for (int i = n / 2; i > 0; i /= 2) {
		for (int j = 0; j < i; j++) {
			insertI(arr + j, n - j, i);
		}
	}
}

