int getMoneySpent(vector<int> keyboards, vector<int> drives,int b) 
{
    int sum,arr[10][10];
    int i,j,max;
    for(i=0;i<keyboards.size();i++)
    {
        for(j=0;j<drives.size();j++)
        {
            sum=keyboards[i]+drives[j];
            if(sum<b)
                arr[i][j]=sum;
        }
    }
    max=arr[0][0];
    for(i=0;i<keyboards.size();i++)
    {
        for(j=0;j<drives.size();j++)
        {
            if(arr[i][j]>max)
                max=arr[i][j];
            
        }
    }
    if(arr[0][0]==0)
        return -1;
    else
        return max;
}
