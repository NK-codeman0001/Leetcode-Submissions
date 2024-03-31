# @param {String} sentence
# @return {Boolean}
def check_if_pangram(sentence)
  char_count = Hash.new(0)
  sentence.each_char {|c| char_count[c]+=1}
  return char_count.length == 26  
end