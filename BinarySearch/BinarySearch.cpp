
#include <vector>
#include <iostream>

using namespace std;

int BinarySearch(vector<int> nums, int target){
    int left=0,right=nums.size()-1;
    while(left <= right){
        int mid = left + (right - left)/2; //防止left和right的和大于INT_MAX造成溢出
        // int mid = (left + right)/2;
        if(nums[mid] == target){
            return mid;
        }else if(nums[mid] < target){
            left = mid + 1;
        }else if(nums[mid] > target){
            right = mid - 1;
        }
    }
    return left;
}

int main(int argc, char *argv[]){
    std::vector<int> test = {1,2,3,4,5,6,8};
    int in;
    cout << "input test vector:" << endl;
    // 使用自定义的向量时会跳过
    // while(cin >> in){
    //     test.push_back(in);
    // }
    int target;
    cout << "input target:" << endl;
    cin >> target;
    cout << "ans: " << BinarySearch(test, target) << endl;
    return 0;
}
