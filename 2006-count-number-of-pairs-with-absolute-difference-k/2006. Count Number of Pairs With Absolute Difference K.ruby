# @param {Integer[]} nums
# @param {Integer} k
# @return {Integer}
def count_k_difference(nums, k)
  count = 0
  for i in 0...nums.length
    for j in i+1...nums.length
      if (nums[i] - nums[j]).abs == k
        count +=1
      end
    end
  end
  return count
end