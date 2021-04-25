#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> getListNum(vector<int>&arr,int k)
    {
        vector<int> temp(1000);
        for (const int& val : arr) //增强型for语句 类似java
        {
            ++temp[val];
        }
        vector<int> result; //定义好要返回的结果
        int count = 0;  //这是计数
        for (int i = 0; i < temp.size(); ++i)
        {
            if (count >= k)
            {
                break;
            }
            if (temp[i])
            {
                while (temp[i]--)
                {
                    result.push_back(i);
                    count++; //计数
                }
            }
        }
        result.resize(k);
        return result;    
    }
};

void test()
{
    Solution s;
    vector <int> arr{4,5,1,6,2,7,3,8};
    vector <int> arr1;
    arr1 = s.getListNum(arr,4);
    for (int i = 0; i < 4; i++)
    {
        cout << arr1[i] << endl;
    }
}

int main()
{
    test();
    system ("pause");
    return 0;
}

