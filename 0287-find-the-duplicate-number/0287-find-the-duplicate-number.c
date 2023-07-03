int findDuplicate(int* nums, int numsSize) {
    int* seen = (int*)calloc(numsSize, sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        if (seen[nums[i]] == 1) {
            free(seen);
            return nums[i];
        }
        seen[nums[i]] = 1;
    }

    free(seen);
    return -1; // If no duplicate is found
}