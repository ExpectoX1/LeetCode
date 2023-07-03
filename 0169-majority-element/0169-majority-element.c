int majorityElement(int* nums, int numsSize) {  // moor's voting algo 
    int majority = 0;
    int count = 0;
    
    // Find potential majority element
    for (int i = 0; i < numsSize; i++) {
        if (count == 0) {
            majority = nums[i];
            count = 1;
        } else if (nums[i] == majority) {
            count++;
        } else {
            count--;
        }
    }
    
    // Verify if potential majority is the actual majority element
    int occurrences = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == majority) {
            occurrences++;
        }
    }
    
    if (occurrences > numsSize / 2) {
        return majority;
    } else {
        // No majority element
        return -1;
    }
}
