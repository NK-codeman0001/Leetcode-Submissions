# @param {String} s
# @param {String} t
# @return {Boolean}
def is_anagram(s, t)
  s= s.downcase.split('').sort.join
  t= t.downcase.split('').sort.join
  return t==s
end