# @param {Integer[]} nums
# @return {Integer}
def find_numbers(nums)
  count=0
  nums.each do |num|
    if (num.to_s.chars).length % 2 ==0
      count +=1
    end
  end
  return count
end