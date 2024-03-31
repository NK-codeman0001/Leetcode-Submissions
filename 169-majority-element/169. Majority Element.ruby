# @param {Integer[]} nums
# @return {Integer}
def majority_element(nums)
  return nums.sort_by {|num| nums.count(num)} [-1]
end