#include <iostream>
#include <vector>

class BubbleSort
{
public:
    // 冒泡排序主函数
    static void bubbleSort(std::vector<int> &arr)
    {
        int n = arr.size();
        // 外层循环控制需要多少轮排序
        for (int i = 0; i < n - 1; i++)
        {
            bool swapped = false;
            // 内层循环控制每轮需要比较的次数
            for (int j = 0; j < n - 1 - i; j++)
            {
                // 如果前面的元素大于后面的元素，则交换它们
                if (arr[j] > arr[j + 1])
                {
                    std::swap(arr[j], arr[j + 1]);
                    swapped = true;
                }
            }
            // 如果一轮比较中没有发生交换，说明数组已经有序，可以提前退出
            if (!swapped)
            {
                break;
            }
        }
    }

    // 打印数组
    static void printArray(const std::vector<int> &arr)
    {
        for (int num : arr)
        {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
};

// 测试代码
int main()
{
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    std::cout << "原始数组: ";
    BubbleSort::printArray(arr);

    BubbleSort::bubbleSort(arr);

    std::cout << "排序后数组: ";
    BubbleSort::printArray(arr);

    system("pause");
    return 0;
}