vector<int> breakingRecords(vector<int> scores) 
{
    int i,ele,l=0,s=0,low,high;
    vector<int> res;
     low=high=scores[0];
    for(i=1;i<scores.size();i++)
    {
       
        if(scores[i]>high)
        {
            high=scores[i];
            l++;
        }
        if(scores[i]<low && scores[i]!=low)
        {
            low=scores[i];
            s++;
        }
    }
    res.push_back(l);
    res.push_back(s);
    return res;
}
