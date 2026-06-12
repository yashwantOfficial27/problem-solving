def factorial(n)
  return 1 if n == 0 

  return n * factorial(n-1)
end


def factorial_tail(n, acc = 1)
  return acc if n == 1 || n == 0

  return factorial_tail(n-1, acc * n)
end

puts factorial_tail(5) # 120
puts factorial_tail(0) # 1
puts factorial_tail(1) # 1
puts factorial_tail(10) # 3628800