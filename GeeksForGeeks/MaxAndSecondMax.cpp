void largestAndSecondLargest(int sizeOfArray, int arr[]){
    int max = INT_MIN, max2= INT_MIN;
    
    /*********************************
     * Your code here
     * This function should print 
     * max and second max
     * *******************************/
     max=arr[0];
     int index=0;
     for(int i=1;i<sizeOfArray;i++)
     {
         if(arr[i]>max)
         {
             max=arr[i];
             index=i;
         }
     }
     if(sizeOfArray>=2)
     {
         max2=-1;
         for(int i=0;i<sizeOfArray;i++)
         {
             if(arr[i]>max2 && index!=i && arr[i]!=max)
             {
                 max2=arr[i];
             }
         }
     }
     else 
      max2=-1;
     if(max2==max)
      max2=-1;
     cout << max << " " << max2 << endl;
}
