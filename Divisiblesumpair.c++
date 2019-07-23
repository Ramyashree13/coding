int divisibleSumPairs(int n, int k, vector<int> ar) 
{
    int i,j,count=0,sum=0;
    for(i=0;i<ar.size();i++)
    {
        for(j=i+1;j<ar.size();j++)
        {
            sum=ar[i]+ar[j];
            if((sum%k)==0)
                count++;
        }
    }
    return count;
}
