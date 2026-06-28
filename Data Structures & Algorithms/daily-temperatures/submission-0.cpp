/**
 * @file 739_Daily_Temperatures.cpp
 * @author Rut Koticha
 * @date 2026-03-22
 */

#include <vector>
#include <stack>

class Solution {
public:
	std::vector<int> dailyTemperatures(std::vector<int>& temperatures)
	{
		std::vector<int> output(temperatures.size(), 0);
		std::stack<std::pair<int, int>> stack;

		for (int i = 0; i < temperatures.size(); i++)
		{
			int current = temperatures.at(i);

			while (!stack.empty()
				&& stack.top().first < current)
			{
				int index = stack.top().second;
				output.at(index) = i - index;
				stack.pop();
			}

			stack.push({ current, i });
		}

		return output;
	}
};
