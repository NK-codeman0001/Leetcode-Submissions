# @param {Integer[]} nums1
# @param {Integer[]} nums2
# @return {Integer[]}
def intersection(nums1, nums2)
  records = Hash.new(0)
  intersection_hash= Hash.new(0)
  if nums1.length < nums2.length
    nums1, nums2 = nums2, nums1
  end
  nums1.each {|ele| records[ele]+=1}
  # p records
  for i in 0...nums2.length
    if records[nums2[i]]!=0
      intersection_hash[nums2[i]]+=1
    end
  end
  return intersection_hash.keys
end