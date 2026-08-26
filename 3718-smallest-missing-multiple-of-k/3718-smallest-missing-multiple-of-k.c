
void sort(int* nums,int numsSize)
{
    for(int i=0;i<numsSize;i++)
    {
        int min=i;
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[min]>nums[j]) min=j;
        }
        int tmp=nums[min];
        nums[min]=nums[i];
        nums[i]=tmp;
    }
}
int missingMultiple(int* nums, int numsSize, int k) {
    sort(nums,numsSize);
    int j=1;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==(k*j))
        {
            j++;
        }
    }
    return k*j;
}