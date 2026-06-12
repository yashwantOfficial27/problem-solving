# def count_good_numbers(n)
#     arr = [0,9,99,999,9999,99999,999999,9999999,99999999,999999999]
#     limit = a[n]
#     puts limit
#     count = 0
#     if limit < 10
#       [1..limit].each do |i|
#         count + 1 if i.even?
#       end
#     end

#     [1..limit].each do |i|
#       i
#     end


#     puts isPrime(n)
# end

# def isPrime(n)
#   return false if n < 2
#   return true if n == 2
#   return false if n.even?

#   (3..Math.sqrt(n)).step(2) do |i|
#     return false if n % i == 0 
#   end
#   true
# 
MOD = 10**9 + 7

def count_good_numbers(n)
  even_places = (n+1)/2
  odd_places = n/2

  even_possibilites = 5 ** even_places % MOD
  odd_possibilites  = 4 ** odd_places % MOD
  total =  (even_possibilites * odd_possibilites) % MOD
  return total
end

puts count_good_numbers(806166225460393)
# result = 5, 0,2,4,6,8

