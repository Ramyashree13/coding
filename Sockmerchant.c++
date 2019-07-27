int sockMerchant(int n, vector<int> ar) 
{
    int pairs=0,i,j,count=0;
    for(i=0;i<ar.size();i++)
    {
        for(j=i+1;j<ar.size();j++)
        {
            if(ar[i]==ar[j])
            {
                count++;
                if(count==2)
                {
                    pairs++;
                    count=0;
                }
            }
        }
        
    }
    return pairs;
}
