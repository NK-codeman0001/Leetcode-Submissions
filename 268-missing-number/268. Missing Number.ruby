# @param {Integer[]} nums
# @return {Integer}
def missing_number(nums)
  records= Hash.new(0)
  for i in 0..nums.length
    records[i]=0
  end
  for i in 0..nums.length
    records[nums[i]]+=1
  end
  return records.key(0)
end