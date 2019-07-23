int birthday(vector<int> s, int d, int m) 
{
    int i,j,square,count=0,n;
    for(i=0;i<s.size();i++)
    {
        if(s[i]==d)
        {
            count++;
        }
        for(j=;j<s.size();j++)
        {
            square=s[i]+s[j];
           // n=square.size();
            if(square==d)
            {
                count++;
            }
        }
    }

    return count;
}
