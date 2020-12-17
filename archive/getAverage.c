double getAverage(int arr[], int size) {
	int i;
	double avg;
	double sum = 0;
	for (i = 0; i < size; ++i) {
		sum += arr[i];
	}
	avg = sum /size;
	
	return avg;
}
