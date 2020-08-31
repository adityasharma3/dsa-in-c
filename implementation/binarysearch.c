int binarysearch(int left ,int right, int arr[] , int key ) {
	while (r >= left) {
		int mid = (l+r)/2;

		if (mid == key) {
			return mid;
		}
		
		if (key > mid) {
			left = mid + 1;
		}

		if (key < mid) {
			right = mid - 1;
		}
	}
}