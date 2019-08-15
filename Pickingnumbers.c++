int pickingNumbers(vector<int> a) 
{
    sort(a.begin(),a.end());
    int len=a.size();
    int i,j,max=0,count,samelement=0;
    for(i=len-1;i>=0;i--)
    {
        count=1;
        if(a[i]==samelement)
        {
            continue;
        }
        else
        {
            samelement=a[i];
        }
        for(j=i-1;j>=0;j--)
        {
            if(a[i]-a[j]<=1)
                count++;
        }
        max=count>max?count:max;
    }
    
    return max;
}
