#include <iostream>
#include <vector>
#include <algorithm>

void findLargestSumCycle(const std::vector<int> &edges, int n, std::vector<bool> &visited, int current_node, int start_node, int &cycle_sum, int &max_sum)
{
    visited[current_node] = true;
    cycle_sum += current_node;

    int next_node = edges[current_node];

    if (next_node == start_node)
    {
        // Cycle found
        max_sum = std::max(max_sum, cycle_sum);
    }
    else if (!visited[next_node])
    {
        findLargestSumCycle(edges, n, visited, next_node, start_node, cycle_sum, max_sum);
    }

    visited[current_node] = false;
    cycle_sum -= current_node;
}

int getLargestSumCycle(const std::vector<int> &edges, int n)
{
    std::vector<bool> visited(n + 1, false); // Adjusted the size to n + 1
    int max_sum = 0;

    for (int i = 0; i < n; i++)
    {
        int cycle_sum = 0;
        findLargestSumCycle(edges, n, visited, i, i, cycle_sum, max_sum);
    }

    return max_sum;
}

int main()
{
    int n;
    std::cout << "Enter the number of cells: ";
    std::cin >> n;

    std::vector<int> edges(n);
    std::cout << "Enter the values of the edge array: ";
    for (int i = 0; i < n; i++)
    {
        std::cin >> edges[i];
    }

    int largest_sum_cycle = getLargestSumCycle(edges, n);
    std::cout << "Sum of the largest sum cycle: " << largest_sum_cycle << std::endl;

    return 0;
}
