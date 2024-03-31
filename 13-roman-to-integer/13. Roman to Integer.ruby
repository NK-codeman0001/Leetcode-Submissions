# @param {String} s
# @return {Integer}
def roman_to_int(s)
  roman_value =  {
    "I":1,
    "V":5,
    "X":10,
    "L":50,
    "C":100,
    "D":500,
    "M":1000,
    }
    sum=0
    i=0
    while i<s.length
      # p roman_value[s[i].to_sym] , roman_value[s[i+1].to_sym
      # p roman_value[s[i].to_sym] , roman_value[s[i+1].to_sym]
      if i<s.length-1 && roman_value[s[i].to_sym] < roman_value[s[i+1].to_sym] 
        sum-= roman_value[s[i].to_sym]
        i+=1 
      end
      sum += roman_value[s[i].to_sym] 
      i+=1
    end
  return sum
end