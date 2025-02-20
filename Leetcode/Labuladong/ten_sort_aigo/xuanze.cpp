#include <iostream>
#include <vector>
#include <algorithm>
// void selectionSort(std::vector<int> &arr)
// {
//     int n = arr.size();
//     for (int i = 0; i < n - 1; ++i)
//     {
//         int minIndex = i;
//         for (int j = i + 1; j < n; ++j)
//         {
//             if (arr[j] < arr[minIndex])
//             {
//                 minIndex = j;
//             }
//         }
//         std::swap(arr[i], arr[minIndex]);
//     }
// }

void selectionSort(std::vector<int> &arr)
{
    int n = arr.size();
    int sorted = 0;
    while (sorted < n)
    {
        int minindex = sorted;
        for (int i = sorted + 1; i < n; i++)
        {
            if (arr[i] < arr[minindex])
            {
                minindex = i;
            }
        }
        std::swap(arr[sorted], arr[minindex]);
        sorted++;
    }
}
int main()
{
    std::vector<int> arr = {64, 25, 12, 22, 11, 0, 1, 3, 2};
    selectionSort(arr);
    std::cout << "Sorted array: \n";
    for (int i = 0; i < arr.size(); ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    system("pause");
    return 0;
}