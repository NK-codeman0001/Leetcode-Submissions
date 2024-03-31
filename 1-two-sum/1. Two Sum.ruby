# @param {Integer[]} nums
# @param {Integer} target
# @return {Integer[]}
def two_sum(nums, target)
  records = Hash.new(0)
  records[nums[0]]=0
  for i in 1...nums.length
    temp = target-nums[i]
    if records.include?(temp)
      return records[temp],i
    end
    records[nums[i]]=i
  end
end