#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution
{
private:
    vector<int> quickSort(vector<int> &arr, int k, int l, int r)
    {
        int i = l, j = r;
        while (i < j)
        {
            while (i < j && arr[j] >= arr[l])
            {
                j--;
            }
            while (i < j && arr[i] <= arr[l])
            {
                i++;
            }
            swap(arr[i], arr[j]);
        }
        swap(arr[i], arr[l]);
        if (i > k)
        {
            return quickSort(arr, k, l, i - 1);
        }
        if (i < k)
        {
            return quickSort(arr, k, i + 1, r);
        }
        vector<int> res;
        res.assign(arr.begin(), arr.begin() + k);
        return res;
    }

public:
    vector<int> getListNumbers(vector<int> &arr, int k)
    {
        if (k >= arr.size())
            return arr;
        return quickSort(arr, k, 0, arr.size() - 1);
    }
};

void test()
{
    //测试函数
    vector<int> arr = {5, 8, 2, 3, 1, 7, 6, 4};
    Solution s1;
    vector<int> arr1;
    arr1 = s1.getListNumbers(arr, 2);
    cout << "数组内最小的值为：" << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << arr1[i] << "  ";
    }
    cout << endl;
}

int main()
{

    test();
    system("pause");
    return 0;
}