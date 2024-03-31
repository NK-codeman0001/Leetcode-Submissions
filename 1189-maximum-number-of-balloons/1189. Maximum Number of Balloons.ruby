# @param {String} text
# @return {Integer}
def max_number_of_balloons(text)
  map = Hash.new(0)
  text.chars.each {|i| map[i]+=1}
  nums=[map['b'],map['a'],map['l']/2,map['o']/2,map['n']]
  return nums.min
end