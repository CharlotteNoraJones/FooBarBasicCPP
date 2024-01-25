#include <iostream>
#include <string>
#include <vector>

constexpr std::string convertToFooBar(const std::vector<int>& nums) {
  std::string converted;

  for (auto x : nums) {
    std::string newRow;
    if (!(x % 3)) {
      newRow.append("foo");
    }
    if (!(x % 5)) {
      newRow.append("bar");
    }

    
    if (newRow.length() != 0) {
      newRow.append("\n");
      converted.append(newRow);

    }
  }
  return converted;
}

int main(int, char**) {
  std::vector<int> nums = {3, 10, 9, 15, 30, 35, 45, 9, 12, 2};
  std::cout << convertToFooBar(nums) << "\n";
}
