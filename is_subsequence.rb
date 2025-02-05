# @param {String} s
# @param {String} t
# @return {Boolean}
def is_subsequence(s, t)
    count = 0
    idx = 0
    t.each_byte  do |element|
        count += 1 if (s[count] == t[idx])
        idx += 1
    end
   return count == s.length ?  true :  false
end

# p is_subsequence('abc', 'ahbgdc')
# p is_subsequence('axc', 'ahbgdc')
p is_subsequence('abc', 'ahbgdb')