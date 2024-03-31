# @param {String} s
# @return {Boolean}
def are_occurrences_equal(s)
  records= Hash.new(0)
  s.each_char {|c| records[c]+=1}
  values=records.values
  return values.uniq.length ==1    
end