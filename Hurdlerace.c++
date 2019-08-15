int hurdleRace(int k, vector<int> height) 
{
    int i,dose;
    //*maxele=max(height.begin(),height.end());
    vector<int>::const_iterator it;
    it = max_element(height.begin(), height.end());
    if(k > *it)
         return 0;
    else
    {
        dose= *it - k;
        return dose;
    }
       
}

   
