int designerPdfViewer(vector<int> h, string word) 
{
    int max=0,temp,i,sum=0;
    while(word[i]!='\0')
    {
        temp=h[int(word[i])-97];
        if(max<temp)
        {
            max=temp;
        }
        i++;
    }
    sum=max * word.size();
    return sum;

}
