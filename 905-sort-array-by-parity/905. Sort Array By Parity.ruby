# @param {Integer[]} nums
# @return {Integer[]}
def sort_array_by_parity(nums)
  return nums.sort_by{|num| num%2}
end