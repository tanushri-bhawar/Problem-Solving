
void duplicateZeros(int* arr, int arrSize) {
    int temp2=0;
    for(int i=0;i<arrSize;i++)
    {
        if(arr[i]==0 && i<arrSize)
        {
            int j=arrSize-1;
            while(j>i)
            {
                arr[j]=arr[j-1];
                j--;
            }
            i++;
        }
    }
}