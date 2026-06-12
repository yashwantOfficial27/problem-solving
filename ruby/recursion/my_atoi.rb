# def my_atoi(str)
#   an = 0
#   str = str.strip
#   flag = str[0] == '-' ? false : true
    
#   str.each_char do |char|
#     if char == ' '
#       break
#     else
#       converted_char =  char.to_i
#       an = an * 10 + converted_char
#     end
#   end
  
#   flag == false ? an = an * -1 : ''
#   an
# end

def atoi_helper(str, idx, res)
  # base condition
   if idx == str.length || str[idx] == ' ' || !str[idx].match?(/\d/)
    return res
   end

   num = str[idx].to_i 
   return atoi_helper(str, idx+1, res*10 + num)
end

def my_atoi(str)
  return nil if str.empty? 

  # trim
  str = str.strip 

  # handle sign
  signed_value = str[0] == '-' ? -1 : 1
  
  new_str = signed_value == -1 ? str[1..] : str
  result = atoi_helper(new_str, 0, 0)

  return result*signed_value

end

# num = "       -423  254      "
num = "432"
# num = "1337c0d3"
puts my_atoi(num)