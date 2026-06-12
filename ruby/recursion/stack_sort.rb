stack = [1,4,2,6]

# puts stack.sort.reverse
sorted_desc = stack.sort {|a,b| b <=> a}

puts sorted_desc