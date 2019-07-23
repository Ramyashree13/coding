int migratoryBirds(vector<long int> arr) 
{
    int a,i,ele,index;
    vector<long int> res;
    for(i=1;i<arr.size();i++)
    {
        a=count(arr.begin(),arr.end(),i);
        res.push_back(a);
    }
    ele=res[0];
    for(i=1;i<res.size();i++)
    {
        if(res[i]>ele)
        {
            ele=res[i];
            index=i;
        }
        else if(res[i]==ele)
        {
            if(i<index)
                index=i;
        }
    }
    return (index+1);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string arr_count_temp;
    getline(cin, arr_count_temp);

    int arr_count = stoi(ltrim(rtrim(arr_count_temp)));

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    vector<long int> arr(arr_count);

    for (int i = 0; i < arr_count; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int result = migratoryBirds(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}
