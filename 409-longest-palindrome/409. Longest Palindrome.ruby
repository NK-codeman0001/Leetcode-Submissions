# @param {String} s
# @return {Integer}
def longest_palindrome(s)
  records = Hash.new(0)
  s.each_char{|c| records[c]+=1}
  even_count =0
  odd_count =0
  odd_flag = false
  records.each do |k,v|
    if v%2==0
      even_count+=v
    else
      odd_flag = true
      odd_count += (v -1)     
    end
  end
  return odd_flag ? odd_count + even_count + 1 : odd_count + even_count
end