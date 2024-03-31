# @param {String[][]} paths
# @return {String}
def dest_city(paths)
  cityB_arr=[]
  paths.each {|ele| cityB_arr<<ele[1] }
  paths.each {|ele| cityB_arr.delete(ele[0])}
  return cityB_arr[0]
end