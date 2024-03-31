# @param {String} s
# @param {String} t
# @return {Integer}

def min_steps(s, t)
  #store both in hash
  record_s = Hash.new(0)
  record_t = Hash.new(0)
  
  s.each_char {|ele| record_s[ele]+=1}
  t.each_char {|ele| record_t[ele]+=1}
  
  record_t.each_pair {|k,v| record_s[k]-=v}
  return record_s.values.delete_if {|ele| ele <1}.reduce(0) {|sum, num| sum + num} 
end
