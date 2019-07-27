void bonAppetit(vector<int> bill, int k, int b) 
{
    int i,sum=0,res;
    //vector<int>::iterator it;
   //auto it=bill.begin()+k;
    
    for(i=0;i=bill.size();i++)
    {
       /* if(it == k)
        {
            bill.erase(it);
        }
        else
        {*/
            sum= bill[i] + sum;
        
    }
    sum=sum-bill[k];
    res=sum/2;
    if(res==b)
        printf("Bon Appetit");
    else
        printf("%d",sum);
}
