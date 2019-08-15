int hurdleRace(int k, vector<int> height) 
{
    int i,maxele,dose;
    maxele=max(height.begin(),height.end());
    if(k>maxele)
    {
        dose=k-maxele;
        return dose;
    }
    else
        return 0;



}
