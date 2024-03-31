# @param {String} s
# @param {String[]} words
# @return {Boolean}
def is_prefix_string(s,words)
  temp = ""
  words.each do |word|
    temp +=word
    if temp == s
      return true
    end
  end
  return false
end