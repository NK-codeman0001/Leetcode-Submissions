# @param {Integer[]} nums
# @return {Integer}
def num_identical_pairs(nums)
  count = 0
  for i in 0...nums.length
    for j in i+1...nums.length
      if nums[i] == nums[j]
        count +=1
      end
    end
  end
  return count
end