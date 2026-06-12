def subArrayOfSum(arr,  k)
    i = 0
    sum = 0
    minSize = Float::INFINITY

    (0..arr.size-1).each do |j|
        sum += arr[j]

        while sum >= k
            minSize = [minSize, j-i+1].min 
            sum -= arr[i]
            i+=1
        end
    end

    minSize == Float::INFINITY ? 0 : minSize
end

# arr = [2,1,5,2,3,2]
arr = [0]*5

k = 7
puts subArrayOfSum(arr, k)