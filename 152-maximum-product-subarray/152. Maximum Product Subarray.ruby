# @param {Integer[]} nums
# @return {Integer}
def max_product(arr)
      prod = 1
      prod2 = arr[0]
      prod3 = arr[0]
      for i in  0 ... arr.length
        prod = prod * arr[i]
        if prod == 0
          prod = arr[i]
        end
        if (arr[i] < 0 && i != arr.length - 1) && arr[i +1]>0
          prod3 = 1
          j = i + 1 
          while  j < arr.length && arr[j] > 0 
            prod3 = prod3 * arr[j]
            j = j+1
          end
        end
        if prod2 < prod 
          prod2 = prod 
        end
        if prod2 < prod3
          prod2 = prod3
        end
      end
        return prod2
end