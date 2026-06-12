def sumOfSubArr(arr, k)
    i = 0
    sum = 0
    maxSize = -Float::INFINITY

    (0..arr.size-1).each do |j|
        sum += arr[j]

        while sum <= k
            maxSize = [maxSize, j-i+1].max
            sum -= arr[i]
            i += 1
        end
    end

    maxSize == Float::INFINITY ? 0 : maxSize
end


arr = [2,1,5,2,3,2]
# arr = [0]*5

k = 7
puts sumOfSubArr(arr, k)