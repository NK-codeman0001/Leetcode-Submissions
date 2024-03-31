# @param {String[]} nums
# @param {Integer} k
# @return {String}
def kth_largest_number(nums, k)
  nums.sort_by! {|ele| ele.to_i}
  return nums[-k]
end