# @param {Integer[]} nums
# @return {Integer[]}
def running_sum(nums)
  sum =0
  for i in 0...nums.length
    sum += nums[i]
    nums[i] = sum
  end 
  return nums
end