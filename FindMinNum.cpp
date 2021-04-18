#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


/*
输入整数数组 arr ，找出其中最小的 k 个数。
限制：0 <= k <= arr.length <= 10000  0 <= arr[i] <= 10000
输入4、5、1、6、2、7、3、8  k = 2
输出 1、2
之间排序，排序后取前k个数
*/

class Solution
{
private:
    /* data */
    //vector <int> vec;
public:

    vector <int> getlistNumbers(vector<int>& arr,int k)
    {
        vector <int> vec(k,0);
        sort(arr.begin(),arr.end());
        for (int i = 0; i < k; i++)
        {
            vec[i] = arr[i];
        }
        return vec;
    }
};

void test()
{
    Solution s;
    vector <int> arr{4,5,1,6,2,7,3,8};
    vector <int> arr1;
    arr1 = s.getlistNumbers(arr,4);
    for (int i = 0; i < 4; i++)
    {
        cout << arr1[i] << endl;
    }

}


int main()
{
    test();
    system("pause");
    return 0;
}