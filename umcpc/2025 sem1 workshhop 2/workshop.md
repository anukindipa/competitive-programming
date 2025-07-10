# Wordkshop



42/7 = 6
but 42 mod 10 = 2
2 is not divisible by 7.

If you take modulo after every step itsgonna cause problems


 [ 6 7 2 3.....]
 prefix_multiple_before_mod [6 42 84 ... ]
 prefix_after_mod [6 2 4 ....]

 if we use division instead of addition for prefix sums
 then its gonna overflow real quick.
 so thats why they use mod M i guess. ``