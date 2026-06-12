def generate(str, result, curr, used)
    
    if !result.include?(curr.join) and !curr.empty?
        result << curr.join
        # return
    end

    (0..str.size).each do |i|
        next if used[i] 

        used[i] = true
        curr << str[i]
        generate(str, result, curr, used)
        used[i] = false
        curr.pop
        
    end
end
result = []
str = "ABC"
used = [false]*str.size
generate(str, result, [], used)
puts result