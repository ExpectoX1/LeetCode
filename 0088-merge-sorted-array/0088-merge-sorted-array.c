/*Keep a pointer  i , j and k. Point all of them at the end of the arr , i will be n-1 and so on , k is for the total array. lazy decremnt the values and check with the condition below*/

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int i = m-1;
    int j = n-1;
    int k = m+n-1;

   while(j>=0 )
   {
       if(i>=0 && nums1[i] > nums2[j]){
           nums1[k--] = nums1[i--];
       }
       else{
           nums1[k--] = nums2[j--];
       }
   }

}