
void Selection_sort(int* array,int n)
{
	int j = 0;
	for (int i = 0; i < n - 1; i++)
	{
		int min = i;
		for (j = i + 1; j < n; j++) {
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != i) {
			int temp = array[min];
			array[min] = array[j];
			array[j] = temp;
		}
	}
}