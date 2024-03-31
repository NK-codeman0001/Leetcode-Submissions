# @param {String[]} arr
# @param {Integer} k
# @return {String}
def kth_distinct(arr, k)
  temp_arr= arr.uniq
  arr.each do |ele|
    if arr.count(ele)>1
      temp_arr.delete(ele)
    end
  end
  return temp_arr[k-1].nil? ? "" : temp_arr[k-1]
end