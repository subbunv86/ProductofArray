// ProductofArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
	vector<int> productExceptSelf(vector<int>& nums)
	{
		vector<int>resultVector(nums.size(), 1);
		int nProd = 1;
		for (int i = 0; i < nums.size(); i++)
		{
			resultVector[i] = nProd;
			nProd *= nums[i];
		}
		nProd = 1;
		for (int i = nums.size()-1; i >=0; i--)
		{	
			resultVector[i] *= nProd;
			nProd *= nums[i];
		}
		return resultVector;
	}
};
int main()
{
	vector<int> nums = { 1,2,3,4 };
	Solution solutionObj;
	solutionObj.productExceptSelf(nums);
	std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
