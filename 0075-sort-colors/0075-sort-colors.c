void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void sortColors(int* nums, int numsSize){
    int i, j;
    int n = numsSize;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                swap(&nums[j], &nums[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }

}