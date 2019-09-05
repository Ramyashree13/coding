def compareTriplets(a, b):
    alice_points = 0
    bob_points = 0
    for i in range(3):
        if a[i] > b[i]:
            alice_points +=1
        elif a[i] < b[i]:
            bob_points += 1
    return [alice_points, bob_points]
a=[5,6,7]
b=[4,6,10]
res1,res2=compareTriplets(a,b)
print(res1,res2)



# c++ program
vector<int> compareTriplets(vector<int> a, vector<int> b) 
{
    int ele,i;
    vector<int> v{0,0};
    for(i=0;i<3;i++)
    {
        scanf("%d\t",&ele);
        a.push_back(ele);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d\t",&ele);
        b.push_back(ele);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            v[0]=v[0]+1;
        }
        else if(a[i]<b[i])
        {
            v[1]=v[1]+1;
        }
        else
            ;
            
            
    }
    return v;


}
