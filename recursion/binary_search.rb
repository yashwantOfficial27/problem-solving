def binary_search(arr, left, right, n)
  if left > right
    return "element not found!!"  # base case 
  end

  mid = (left + right ) // 2
  if arr[mid] == n  # base case if element found
    return "element found!!" 
  end


  if arr[mid] > n # element to find is small
    return binary_search(arr, left, mid-1, n)
  else
    return binary_search(arr, mid+1, right, n)
  end
end

arr = [1,3,5,7,9]
binary_search(arr, 0, arr.length-1, 5)