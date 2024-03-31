# @param {String} s
# @return {Boolean}
def is_palindrome(phrase)
  phrase= phrase.downcase
  if phrase.size < 2
    return true 
  end
  phrase.delete!('^a-zA-Z0-9')
  return phrase==phrase.reverse
end