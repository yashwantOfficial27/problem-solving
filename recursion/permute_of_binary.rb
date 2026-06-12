def generate(curr, n, result)
  # base case
  result << curr.join && return if curr.length == n 

  [0, 1].each do |bit|
    next if bit == 1 and curr.last == 1
    curr << bit
    generate(curr, n, result)
    curr.pop
  end
end

result = []
generate([], 3, result)
puts result