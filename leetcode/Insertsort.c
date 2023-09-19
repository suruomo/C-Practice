void Insert_sort(int* array, int n)
{
	for (int i = 1; i < n; i++) {
		int temp = array[i];
		int j;
		for (j = i; j > 0 && array[j - 1] > temp; j--)
		{
			array[j] = array[j - 1];
		}
		array[j] = temp;
	}
}