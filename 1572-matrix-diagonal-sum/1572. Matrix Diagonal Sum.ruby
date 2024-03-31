# @param {Integer[][]} mat
# @return {Integer}
def diagonal_sum(mat)
  sum=0
  n=mat.length
  for i in 0...n
    sum += mat[i][i] + mat[i][n-i-1]
    if i==(n-i-1)
      sum -= mat[i][i]
    end
  end
  return sum
end