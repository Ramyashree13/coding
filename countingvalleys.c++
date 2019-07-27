int countingValleys(int n, string s) 
{
    int i,lvl=0,count=0;
    for(i=0;i<n;i++)
    {
        if(s[i]=='U')
            lvl++;
        else
            lvl--;
        if(lvl==0 && s[i]=='U')
            count++;
    }
    return count;

}
