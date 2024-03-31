# @param {String} s
# @param {String} part
# @return {String}
def remove_occurrences(s, part)
  while s.sub!(part,'')
  end
  return s
end