void bonAppetit(vector<int> bill, int k, int b) 
{
    int i,sum=0,res,f;
    for(i=0;i<bill.size();i++)
    {
        sum=sum+bill[i];
    }
    sum=sum-bill[k];
    res=sum/2;
    if(res==b)
        printf("Bon Appetit");
    else
    {
        f=b-res;
        printf("%d",f);
    }
}
