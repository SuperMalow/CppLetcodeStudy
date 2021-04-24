#include <iostream>
using namespace std;
#include <algorithm>


class Solution
{
private:
    /* data */
public:
    void findMinNum(int arr[],int findNum)
    {   //arr为目标数组
        int len = sizeof(arr) / sizeof(int);
        int index[len],cnt[len];
        for (int i = 0; i < len; i++)
        {
            index[i] = cnt[i] = i;
            index[i] += i;
        }
        int f = 0;
        while (f<len)
        {
            for (int i = 0; i < len; i++)
            {
                if (index[i] == arr[f])
                {
                    cnt[i] += 1;
                }
            }
            f++;
        }
        for (int i = 0; i < findNum; i++)
        {
            cout << "查找到最小的数为：" << cnt[i] << endl;
        }
        
    }

};

void test()
{
    Solution s1;
    int arr[] = {2,2,1,0,1,5};
    s1.findMinNum(arr,2);
}




int main()
{
    test();

    system("pause");
    return 0;
}