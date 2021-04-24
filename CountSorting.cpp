#include <iostream>
using namespace std;

//计数排序
void count()
{
    //目标数组
    int arr[6] = {2,2,1,0,1,5};
    //计数数组
    int cnt[6];
    //索引
    int index[6];
    for (int i = 0; i < 6; i++)
    {
        cnt[i] = 0;
        cout << "  cnt初始化  " << cnt[i];
        cout << endl;
        index[i] = 0;
        cout << "  index初始化  " << index[i];
    }
    cout << endl;
    for (int i = 0; i < 6; i++)
    {
        
        index[i] += i; 
        cout << "  index定义  " << index[i];
    }
    cout << endl;
    int f = 0;
    while (f != 6)
    {
        for (int i_f = 0; i_f < 6; i_f++)
        {
            if (index[i_f] == arr[f])
            {
                cnt[i_f] += 1;
            }
        }
        f++;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << "查找的为：" << cnt[i] << endl;
    }
    
}

int main()
{
    count();
    system("pause");
    return 0;
}