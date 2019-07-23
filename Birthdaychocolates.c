int birthday(vector<int> s, int d, int m) 
{
    int i,j,square=0,count=0,n;
    for(i=0;i<s.size();i++)
    {
        square=0;
        for(j=0;j<m;j++)
        {
            square=square+s[i+j];
        }
        if(square==d)
            count++;
    }

    return count;
}
