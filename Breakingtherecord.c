vector<int> breakingRecords(vector<int> scores) 
{
    int i,ele,l=0,small=0,s,low;
    vector<int> res;
    //ele=scores[0];
    for(i=1;i<scores.size();i++)
    {
        low=scores[0];
        if(scores[i]>scores[i-1])
        {
            //ele=scores[i];
            l++;
            s=scores[i-1];
        }
        else
        {
            s=scores[i];
        }
        if(low!=s || s<low)
        {
            low=s;
            small++;
        }
    }
    res.push_back(small);
    res.push_back(l);
    return res;
}
