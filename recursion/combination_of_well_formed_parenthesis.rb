def can_add?(curr, n, bit)
  open_count = curr.count('(')
  close_count = curr.count(')')

  if bit == '('
    return open_count <= n
  else # bit == ')'
    return close_count > open_count
  end
end

def generate(result, n, curr)
  if curr.length == n * 2
    result << curr.join
    return
  end

  ['(', ')'].each do |bit|
    next unless can_add?(curr, n, bit)
    curr << bit
    generate(result, n, curr)
    curr.pop
  end
end

result = []
generate(result, 3, [])
puts result
