require 'totient'

include Totient

max = [0, 0]
6.step(1_000_000, 6) do |n|
  a = n / totient(n).to_f
  p max = [a, n] if max[0] < a
end
puts max[1]
